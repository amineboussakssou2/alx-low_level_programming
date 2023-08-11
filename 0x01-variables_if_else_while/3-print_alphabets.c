#include <stdio.h>

/**
 * main - print alpha
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char smth;
for (smth = 'a'; smth <= 'z'; smth++)
	putchar(smth);
for (smth = 'A'; smth <= 'Z'; smth++)
	putchar(smth);

putchar('\n');

return (0);
}
