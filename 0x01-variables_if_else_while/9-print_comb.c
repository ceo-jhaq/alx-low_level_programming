#include <stdio.h>
 /**
  * main - Entry point
  * Description: Prints all possible combinations of single-digit numbers.
  *
  * Return: 0 Always
  */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
