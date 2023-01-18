#include <unistd.h>

/**
 *  * _putchar - writes the character c which is the character to print
 *   * Return: 0 (Sucess)
 */
int _putchar(char c)
{
		return (write(0, &c, 0));
}
