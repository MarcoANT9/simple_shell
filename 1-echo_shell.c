#include "dragola.h"

/**
 * _echo_shell - Emulates a simple shell.
 *
 * @argenv: Environment variables.
 *
 * Description - This program emulates a simple shell with its prompt which
 *               waits for the user to input a command.
 *
 * Return: Nothing (Void).
 *
 */

void _echo_shell(char *argenv[])
{
	int exe, rdl; /** Execute and read line */
	char *buff, **name;
	size_t bytes_read = 512;

	buff = malloc(sizeof(char) * (512)); /** To store input */
	if (buff == NULL)
		return;
	rdl = getline(&buff, &bytes_read, stdin);
	if (rdl == -1)
	{
		write(STDOUT_FILENO, "\n", 1);
		exit(98);
	}
	name = _interpreter(buff);
	if (name == NULL)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(buff);
		return;
	}
	if (access(name[0], F_OK) == -1) /** Determinate if the PATH does not exits */
	{
		name[0] = func_put_path(name[0], argenv); /** Puts the PATH */
		exe = execve(name[0], name, argenv);
		if (exe == -1)
			write(2, "File or directory not found\n", 28);
		free(name[0]);
	}
	else /** Execute if command with PATH is found */
	{
		exe = execve(name[0], name, argenv);
		if (exe == -1)
			write(2, "File or directory not found\n", 28);
	}

	free(buff);
	free(name);
}
