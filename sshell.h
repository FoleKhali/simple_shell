#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stddef.h>

extern char **environ;

void execute_cmd(char *cmd);
int f_space(int ac __attribute__((unused)), char **av);
unsigned int space(char *str);
char **tokenizer(char *str);
int env(int argc, char *argv[]);
int sp(char *av);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);

#endif
