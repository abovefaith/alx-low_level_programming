#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones))) /*eliminates repition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8')) /*adds commas and spaces*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


