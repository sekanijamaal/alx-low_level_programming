#include "main.h"

/**
 * get_bit - returns value of bit at index in decimal number
 * @l: number to search
 * @index: index of bit
 *
 * Return: value of bit
 */

int get_bit(unsigned long int l, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (l >> index) & 1;

	return (bit_val);
}

