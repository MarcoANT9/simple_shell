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
	int exe, rdl;
	char *buff;
	char **name;
	size_t bytes_read = 1024;

	buff = malloc(sizeof(char) * (1024)); /** To store input */
	if (buff == NULL)
		return;
	rdl = getline(&buff, &bytes_read, stdin);
	if (rdl == -1 || rdl == EOF)
	{
		write(STDOUT_FILENO, "\n", 1);
		exit(98);
	}
	name = _interpreter(buff);
	if (name == NULL)
	{
		free(buff);
		return;
	}
	exe = execve(name[0], name, argenv);
	if (exe == -1)
		write(2, "File or directory not found\n", 28);

	free(buff);
	free(name);

}
