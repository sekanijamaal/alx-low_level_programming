#include "main.h"

/**
 * print_alphabet - entry point
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_puchar('\n');
}
