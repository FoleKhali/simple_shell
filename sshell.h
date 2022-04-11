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

/*execute_cmd*/
void execute_cmd(char *cmd);
/*exit shell*/
void the_exit(char *cmd);
/*get env*/
void the_env(char *cmd);
/*tokenize the cmd*/
char **tokenizer(char *cmd);
/* functions in defuncion.c */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);

#endif
