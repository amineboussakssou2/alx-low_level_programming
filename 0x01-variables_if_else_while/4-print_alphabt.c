#include <stdio.h>

/**
 * main - print alpha
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char z;
for (z = 'a'; z <= 'z'; z++)
{
if (z == 'e' || z == 'q')
continue;
putchar(z);
}
putchar('\n');

return (0);
}
