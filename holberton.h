#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * struct optype - struct for built in commands
 *
 * @s: string
 * @f: pointer to function
 */
typedef struct builtin
{
	char *s;
	void (*f)(void);
}builtin_t;
char *read_line(void);
char **splits(char *line);
int execute(char **parse);
void _puts(char *str);
int _putchar (char c);
char *_strcat(char *dest, char *src);
int _strcmp(char *, char *);
void _help(void);
void my_exit(void);
#endif
