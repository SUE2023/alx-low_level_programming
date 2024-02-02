#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * Description: Creates  hash table
 * @size: The size of the array
 * Return: pointer to the new hash table or NULL if error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int n;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		ht->array[n] = NULL;

	return (ht);
}
