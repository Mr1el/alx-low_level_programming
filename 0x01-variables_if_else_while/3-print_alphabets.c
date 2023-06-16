#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints Alphabet with putchar function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lower = 'a';
	char UPPER = 'A';

	/*prints a - z*/
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	/*prints A - Z*/
	while (UPPER <= 'Z')
	{
		putchar(UPPER);
		UPPER++;
	putchar('\n');
	return (0);
}
