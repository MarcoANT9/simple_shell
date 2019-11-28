#include "dragola.h"

/**
 * _strcomp - Compares two strings.
 *
 * @str1: First String.
 * @str2: Second String.
 *
 *
 * Return: → 1 If both strings are equal.
 *         → 0 If they're not.
 */
int _strcomp(char *str1, char *str2)
{
	int index = 0;
	int strlen_1 = _strlen(str1), strlen_2 = _strlen(str2);

	if (strlen_1 != strlen_2)
		return (0);

	while (str1[index] != '\0')
	{
		if (str1[index] == str2[index])
			index++;
		else
			return (0);
	}
	return (1);
}

/**
 * print_env - Prints environment variables.
 *
 * @env: Environment variables.
 *
 * Return: Nothing (void).
 */

void print_env(char *env[])
{
	int index = 0, env_len;

	while (env[index] != NULL)
	{
		env_len = _strlen(env[index]);
		write(STDOUT_FILENO, env[index], env_len);
		write(STDOUT_FILENO, "\n", 1);
		index++;
	}
}
