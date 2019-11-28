#include "dragola.h"

/**
 * main - Simple shell.
 *
 * @argc: Number of arguments that enter the main.
 * @argv: String of arguments that enter the main.
 * @argenv: Environment Variables.
 *
 * Return: Always successfull (0).
 */

int main(int argc, char *argv[], char *argenv[])
{
	int status; /** Execute and read line */
	char *buff, **name, **argenv_copy, **path;
	pid_t child;
	size_t bytes_read = 0;
	ssize_t rdl;
	struct stat stats;

	(void) argc, (void) argv, buff = NULL;
	if (isatty(STDIN_FILENO))
		_prompt();
	while ((rdl = getline(&buff, &bytes_read, stdin)))
	{ argenv_copy = copy_env(argenv_copy, argenv), name = _interpreter(buff);
		if (name == NULL)
		{	free(buff), free_array_pointer(argenv_copy);
			return (1);
		}
		if (stat(name[0], &stats) != 0)
		{	path = find_path(argenv_copy), name[0] = full_path(path, name[0]);
			if (stat(name[0], &stats) != 0)
			{	free_array_pointer(path), free_array_pointer(name);
				free_array_pointer(argenv_copy), free(buff);
				continue;
			}
		}
		if (_strcomp(name[0], "exit"))
			free_mem(buff, name, argenv_copy), _usr_exit();
		else if (_strcomp(name[0], "env"))
			print_env(argenv_copy), free_mem(buff, name, argenv_copy), _usr_exit();
		else if (rdl == EOF)
			free_mem(buff, name, argenv_copy), _usr_exit();
		child = fork();
		if (child == 0)
			exe_path(name, 0, argenv_copy);
		else
			wait(&status), free_mem(buff, name, argenv_copy);
		buff = NULL, bytes_read = 0;
		if (isatty(STDIN_FILENO))
			_prompt();
	}
	return (0);
}
