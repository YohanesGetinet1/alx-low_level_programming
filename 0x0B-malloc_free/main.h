#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0 (Always)
 *
 */

int _putchar(char c);
 char *create_array(unsigned int size, char c);
 char *_strdup(char *str);
 char *str_concat(char *s1, char *s2);
 int **alloc_grid(int width, int height);
 void free_grid(int **grid, int height);
 int _strlen(char *s);

 char *argstostr(int ac, char **av);

#endif
