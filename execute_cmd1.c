#include "sshell.h"
/**
 * execute_cmd - check if the function works correctly
 * @tokens: pointer
 */

void execute_cmd(char **tokens)
{
	pid_t pid = 0;
	int child_status = 0;
	char *path_bin[2];

	path_bin[0] = tokens[0];
	path_bin[1] = NULL;

	pid = fork();

	if (pid == -1)
	{
		perror("./sHell");
		free(tokens);
		exit(0);
	}
	else if (pid == 0)
	{
	/*execve ejecuta*/
		if (access(tokens[0], F_OK) == 0)
			execve(path_bin[0], path_bin, NULL);

		else
		{
			perror("./sHell");
			free(tokens);
			exit(1);
		}
	}
	else
	{
		wait(&child_status);
	}
}
