#include "dragola.h"

/**
 * func_exist - This function will decide if a command exists or not.
 *
 * @argv: Array of arguments in the input.
 * @argenv: Environment variables of the system.
 *
 * Return: → The file with path if it exists in the system.
 *         → NULL if the file does not exist in the system.
 */

char *func_exist(char *argv[], char *argenv[])
{

	char **n_path, *_full_path;

	n_path = find_path(argenv);

	_full_path = full_path(n_path, argv[1]);

	if (_full_path != NULL)
		return (_full_path);

	printf("Error: %s does not exist\n", argv[1]);

	free(n_path);

	return (NULL);

}
