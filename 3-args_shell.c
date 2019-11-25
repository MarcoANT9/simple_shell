#include "dragola.h"

/**
 * _interpreter3 - Simulates the interpreter part of the shell.
 *
 * @func_name: Name of the function (includes path).
 * @argv: Rest of the arguments.
 *
 * Description - The shell is composed of three parts, this is the second
 *               part, it takes the arguments and the full name of the command
 *               and creates tokens with them.
 *
 * Return: An array of char*, NULL if something fails.
 */
char **_interpreter3(char *func_name, char **argv)
{
/** ↓ Modify Here
	int index = 0, jndex = 0, kndex = 0, space_counter = 0;
	char **name, *token, *input;

	while (*(buff + index) != '\0')
	{
		if (*(buff + index) == ' ')
			space_counter++;
		index++;
	}
	input = malloc(sizeof(char) * (index + 1));
	if (input == NULL)
		return (NULL);
	name = malloc(sizeof(char *) * (space_counter + 2));
	if (name == NULL)
	{
		free(input);
		return (NULL);
	}
	while (*(buff + jndex) != '\0')
	{
		input[jndex] = buff[jndex];
		jndex++;
	}
	input[jndex] = '\0';
	token = strtok(input, " \n");
	while (token != NULL)
	{
		name[kndex] = token;
		token = strtok(NULL, " \n");
		kndex++;
	}
	name[kndex] = NULL;
	free (input);
	return (name);

*/
}

/**
 * _args_shell - Emulates a simple shell.
 *
 * @argv: List of arguments from main.
 * @argenv: Environment variables.
 *
 * Description - This program emulates a simple shell with its prompt which
 *               waits for the user to input a command.
 *
 * Return: Nothing (Void).
 *
 */

void _args_shell(char *argv[], char *argenv[])
{
	int exe, stat, index = 0, path = 0;
	pid_t child;
	char **name, *comm_name;

	/** 1st - Determine if the name has or not the path */
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] != '/')
		{
			path = 1;
			break;
		}
		else
			index++;
	}
	/** 1.1. If it doesn't have the path, add it */
	if (_path == 0)
		comm_name = add_path3(argv[1], argenv);
	else
		comm_name = argv[1];

	name = _interpreter3(comm_name, argv);
	if (name == NULL)
		return;
	child = fork();
	if (child == 0)
	{
		exe = execve(comm_name, name, argenv);
		if (exe == -1)
			write(2, "File or directory not found\n", 28);
	}
	else
	{
		wait(&stat);
	}
	free(name);
}
