#include "hash_tables.h"

/**
 * hash_djb2 - Hash function
 * @str: string
 * Return: table.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int table;
	int xo;

	table = 5381;
	while ((xo = *str++))
		table = ((table << 5) + table) + xo;

	return (table);
}
