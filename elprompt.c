#include "sshell.h"

/**
 * main - make a prompt that starts to read cmd (commands)
 * Return: 0
 */

int main(void)
{
	char *cmd;

	cmd = NULL;
	size_t  size = 0;
	ssize_t read_b = 0;

	while (1)
	{
		printf("#cisfun$ ");
		read_b = getline(&cmd, &size, stdin);
		if (read_b == -1)
		{
			if (cmd)
				printf("\n");
			exit(1);
		}
		if (strcmp(cmd, "exit\n") == 0)
		{
			if (cmd)
				printf("Successful exit!\n");
			free(cmd);
			exit(0);
		}
		cmd[strlen(cmd) - 1] = '\0';
		execute_cmd(cmd);
	}
	return (0);
}
