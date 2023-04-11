#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[p]; i++)
	{
i		if (b[p] < '0' || b[p] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[p] - '0');
	}

	return (dec_val);
}

