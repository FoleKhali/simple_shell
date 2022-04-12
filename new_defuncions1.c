#include "sshell.h"

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
		return(1);	
	}
}


int the_env(char **tokens)
{
        int c = 0;
	
	if (_strcmp(tokens[0], "env\n") == 0 && tokens[1] == 1)
	{
                while(environ[c] != NULL)
                {
                        printf("%s\n ", environ[c]);
                        c++;
                }
		return(0);
	}
	else
	{
		return(1);
	}
}

