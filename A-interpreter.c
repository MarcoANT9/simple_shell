#include "dragola.h"

/**
 * _interpreter - Simulates the interpreter part of the shell.
 *
 * @buff: Received buffer to write.
 *
 * Description - The shell is composed of three parts, this is the second part,
 *               it takes the input and creates the tokens for execution.
 *
 * Return: An array of char*, NULL if something fails.
 */
char **_interpreter(char *buff)
{
	int index = 0, jndex = 0, kndex = 0, space_counter = 0;
	char **name, *token;

	while (*(buff + index) != '\0') /** This counts spaces */
	{
		if (*(buff + index) == ' ')
			space_counter++;
		index++;
	}
	name = malloc(sizeof(char *) * (space_counter + 2));
	if (name == NULL)
		return (NULL);
	token = strtok(buff, " \n");
	while (token != NULL)/** This separate the command in tokens */
	{
		name[kndex] = token;
		token = strtok(NULL, " \n");
		kndex++;
	}
	name[kndex] = NULL;
	return (name);
}
