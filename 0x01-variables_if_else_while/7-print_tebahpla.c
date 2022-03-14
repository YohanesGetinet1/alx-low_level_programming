#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0(Success/correct)
 */
int main(void)
{
char letter;

for (letter = 122 ; letter >= 97; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);

}
