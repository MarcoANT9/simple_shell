#include "dragola.h"

/**
 * func_fun_path - This function will create a PATH for a command.
 *
 * @command: Name of the command.
 * @argenv: Environment variables of the system.
 *
 * Return: → The file with path if it exists in the system.
 *         → NULL if the file does not exist in the system.
 */

char *func_put_path(char *command, char *argenv[])
{

	char **n_path, *_full_path;
	int comm_len = 0;

	comm_len = _strlen(command);

	n_path = find_path(argenv); /** 5.FindPath */

	_full_path = full_path(n_path, command); /** 6. AppendPath */

	if (_full_path != NULL)
	{
		free(n_path);
		return (_full_path);
	}

	write(STDERR_FILENO, "Error: ", 7);
	write(STDERR_FILENO, command, comm_len);
	write(STDERR_FILENO; " does not exist\n", 16);

	free(n_path);

	return (NULL);

}
