#include <stdio.h>
/**
 * main - start code
 *
 * Return: 0 success
 */

int main(void)
{
	char i;

	for (i = 'e' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
