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
        char **tokens;
        int i = 0;

        signal(SIGINT, SIG_IGN);

        while (1)
        {
                if (isatty(STDIN_FILENO) == 1)
                        printf("#Cisfun$ ");
                read_cmd = getline(&cmd, &size_bytes, stdin);

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
                tokens = tokenizer(cmd);
          the_env(tokens),the_exit(tokens);
                        execute_cmd(tokens);
        }
        return (0);
}
