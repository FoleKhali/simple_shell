#include "sshell.h"

/**
 *
 *
 */
char tokenizer(char *cmd)
{
	char **tokens;
	unsigned int i = 0;

	tokens = malloc(sizeof(char *) * 1024);

	if(tokens == NULL)
	{
		perror("Can't malloc");
                exit(0);
	}


	while ((tokens[i] = strtok(cmd, "\n\t\r ")) != NULL)
	{
		cmd = NULL;
		i++;
	}
	return (tokens);
}
