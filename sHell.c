#include "sshell.h"

/**
 * main - shell that execute commands
 * Return: 0.
 */

int main(void)
{
	ssize_t read_cmd = 0;
	size_t size_bytes = 0;
	char *cmd = NULL;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("#Cisfun$ ");
		read_cmd = getline(&cmd, &size_bytes, stdin);

		if (read_cmd == -1)
		{
			if (cmd)
				printf("\n");
			exit(1);
		}
		/*end of file*/
		if (read_cmd == EOF)
		{
			printf("\nBye bye!\n");
			free(cmd);
			exit(0);
		}
		if (read_cmd == 1)
		{
			continue;
		}
		the_env(cmd), the_exit(cmd);
		cmd[_strlen(cmd) - 1] = '\0';
		execute_cmd(cmd);
	}
	return (0);
}
