#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
 *  * Print_before_main - prints a message before main
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
