#include "sshell.h"
/**
 * the_exit - built to exit
 * @cmd: command
 * Return: nothing
 */
void the_exit(char *cmd)
{
	if (_strcmp(cmd, "exit\n") == 0)
	{
		free(cmd);
		exit(0);
	}
}
/**
 * the_env - find enviromment variable
 * @cmd: command
 * Return: nothing
 */
void the_env(char *cmd)
{
	int c = 0;

	if (_strcmp(cmd, "env\n") == 0)
	{
		while (environ[c] != NULL)
		{
			printf("[%s] \n ", environ[c]);
			c++;
		}
	}
}
