#include "main.h"

/**
 *print_alphabet - a function that prints the alphabet, in lowercase,
 *followed by a new line.
 */

void print_alphabet(void)

{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		_putchar(sl);
	}
	_putchar('\n');
}
