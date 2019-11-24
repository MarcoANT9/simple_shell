#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
/** #include "dragola.h" */

/**
 * func_exist - This function will decide if a command exists or not.
 *
 * @argv: Array of arguments in the input.
 * @argenv: Environment variables of the system.
 *
 * Return: → The file with path if it exists in the system.
 *         → NULL if the file does not exist in the system.
 */

char **find_path(char **argenv);
char *full_path(char **argenv, char *command);

int main(int argc, char **argv, char **argenv)
{

	char **n_path, *_full_path;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		n_path = find_path(argenv);

		_full_path = full_path(n_path, argv[1]);

		if (_full_path != NULL)
			printf("File exists\n");
		else
			printf("Error: %s does not exist\n", argv[1]);

		free(n_path);
		free(_full_path);

	}
	return (0);

}
