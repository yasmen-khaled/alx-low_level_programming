#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the  value
 * @ht:pointer
 * @key: The key
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *re;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
		return (NULL);

	re = ht->array[x];
	while (re && strcmp(re->key, key) != 0)
		re = re->next;

	return ((re == NULL) ? NULL : re->value);
}
