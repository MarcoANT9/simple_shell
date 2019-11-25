#include "dragola.h"

/**
 * _prompt - Prints a prompt.
 *
 *
 * Return: Nothing (void).
 *
 */
void _prompt(void)
{
	int writ;

	writ = write(STDOUT_FILENO, "$ ", 2);
	if (writ == -1)
	{
		perror("Shell:");
		exit(98);
	}
}
/**
 * _kill_child - Kills a child process.
 *
 * @pid: Child Process PID.
 *
 * Description - Given a process PID it proceeds to kill it.
 *
 * Return: Nothing (void).
 */
/**void _kill_child(int pid)
{
	kill(pid, SIGTERM);
}
*/
/**
 * _prompt_shell - Emulates a simple shell prompt.
 *
 * @argenv: Environment variables.
 *
 * Description - This program emulates a simple shell with its prompt which
 *               waits for the user to input a command.
 *
 * Return: Nothing (Void).
 *
 */

void _prompt_shell(char *argenv[])
{
	int exe, rdl, stat;
	pid_t  child;
	char *buff, **name/**, *_path = argenv[8]*/;
	size_t bytes_read = 1024;

	do {
		buff = malloc(sizeof(char) * (1024)); /** To store input */
		if (buff == NULL)
			return;
		_prompt();
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
		child = fork();
		if (child == 0)
		{
			exe = execve(name[0], name, argenv);
			if (exe == -1)
			{
				write(STDERR_FILENO, "File or directory not found\n", 28);
				free(buff);
				free(name);
			}
		}
		else
		{
			wait(&stat);
		}
	} while (1);
}
