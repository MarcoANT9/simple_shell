#include "dragola.h"

/**
 * _strcpy - Copies a string to another.
 *
 * @dest: Destiny of the copy.
 * @src: Source of the string.
 *
 * Return: Copied string (char *).
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];

	return (dest);
}
/**
 *
 *
 *
 *
 *
 *
 */
void _usr_exit(void)
{
	return;

}
/**
 * _exit_ - Determines if the exit command has been inputed.
 *
 * @buff: Readed buffer.
 *
 * Return: → 1 if the command is exit.
 *         → 0 if the command is not exit.
 */

int _exit_(char *buff)
{
	char *_exi1 = "exit";
	char *_exi2 = "EXIT";
	int index = 0;

	while (index < 4)
	{
		if (buff[index] == _exi1[index] || buff[index] == _exi2[index])
			index++;
		else
			break;
	}

	if (index == 4)
		return (1);
	return (0);
}

/**
 * _interpreter - Simulates the interpreter part of the shell.
 *
 * @buff: Received buffer to write.
 *
 * Description - Receives what is written in the terminal, it takes
 *               the input and creates the tokens for execution.
 *
 * Return: An array of char*, NULL if something fails.
 */

char **_interpreter(char *buff)
{
	int index = 0, kndex = 0, space_counter = 0, word_len;
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
		word_len = _strlen(token);
		name[kndex] = malloc(sizeof(char) * (word_len + 1));
		if (name[kndex] == NULL)
		{
			free_array_pointer(name);
			return (NULL);
		}
		_strcpy(name[kndex], token);
		token = strtok(NULL, " \n");
		kndex++;
	}
	name[kndex] = NULL;
	return (name);
}
