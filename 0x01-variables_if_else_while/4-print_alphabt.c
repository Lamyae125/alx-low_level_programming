#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C;

	C = 'a';
	while
		(C <= 'Z') {
			if ((C != 'q' && C != 'e') && C <= 'Z')
				putchar(C);
			C++;
		}
	putchar('\n');
	return (0);
}

