#include "sshell.h"
/**
 * the_exit - exit the shell
 * @tokens: ...
 * Return: 0 if success, 1 if fail
 */

int the_exit(char **tokens)
{
	int i = 0;

	if (_strcmp(tokens[0], "exit\n") == 0)
	{
		printf("Successful exit!\n");
		while (tokens[i] != NULL)
		{
			free(tokens[i]);
			i++;
		}
		free(tokens);
		exit(0);
	}
	else
	{
		return (1);
	}
}
/**
 * the_env - print env
 * @tokens: ...
 * Return: 0 if success, 1 if fails
 */
int the_env(char **tokens)
{
	int c = 0;

	if (_strcmp(tokens[0], "env\n") == 0 && tokens[1] == 1)
	{
		while (environ[c] != NULL)
		{
			printf("%s\n ", environ[c]);
			c++;
		}
		return (0);
	}
	else
	{
		return (1);
	}
}
