#include "sshell.h"

void the_exit(char *cmd)
{
        if (_strcmp(cmd, "exit\n") == 0)
        {
                        printf("Successful exit!\n");
                        free(cmd);
                        exit(0);
        }
}


void the_env(char *cmd)
{
        int c = 0;

        if (_strcmp(cmd, "env\n") == 0)
        {
                while(environ[c] != NULL)
                {
                        printf("[%s] \n ", environ[c]);
                        c++;
                }
        }
}

