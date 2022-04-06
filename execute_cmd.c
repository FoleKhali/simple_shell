#include "sshell.h"

/*
 * execute_cmd - check if the function works correctly
 * @cmd: pointer
 */

void execute_cmd(char *cmd)
{
	pid_t pid = 0;
	int child_status = 0;
	char *path_bin[2];
	path_bin[0] = cmd;
	path_bin[1] = NULL;

	pid = fork();
	if (pid == -1)
	{
		exit(0);
	}
	else if (pid == 0)
	{
		if (access(cmd, F_OK) == 0)
			execve(instruction[0], instruction, NULL);
		else
			perror("./sHell");
			free(cmd);
			exit(1);
	}
	else
	{
		wait(&child_status);
	}
}
