#ifndef MAIN_H
#define MAIN_H

/*MACROS*/
#define TRUE 1

/*Global Variable*/
extern char **environ;

/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stddef.h>
#include <signal.h>

/*execute_cmd*/
void execute_cmd(char *tokens);
/*exit shell*/
int the_exit(char *tokens);
/*get env*/
int the_env(char *tokens);
/*tokenize the cmd*/
char tokenizer(char *cmd);
/* functions in defuncion.c */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);

#endif
