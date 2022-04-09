#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void execute_cmd(char *cmd);
int f_space(int ac __attribute__((unused)), char **av);
unsigned int space(char *str);
char **tokenizer(char *str);
extern char **environ;
int env(int argc, char *argv[]);

#endif
