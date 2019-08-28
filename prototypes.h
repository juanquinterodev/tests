#ifndef _INFINITY_H_
#define _INFINITY_H_
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void ctrlc(int sig_num);
extern char **environ;
int exit_func (char *my_str);
int _strcmp(char *s1, char *s2);
#endif
