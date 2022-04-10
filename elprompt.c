#include "sshell.h"

/**
 * main - make a prompt that starts to read cmd (commands)
 * Return: 0
 */

int main(void)
{
	size_t  size = 0;
	ssize_t read_b = 0;
	char *cmd;

	cmd = NULL;
	int count = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "#Cisfun$", 8);

		read_b = getline(&cmd, &size, stdin);
		if (read_b == EOF)
		{
			printf("\nBye bye!\n");
			exit(0);
		}
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
	while (environ[count] != NULL)
	{
		printf("[%s] \n", environ[count]);
		count++;
	}
	return (0);
}
