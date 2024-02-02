#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * Description: prints a hash table
 *		Key/value pairs are printed in the order
 *		they appear in the array of the hash table
 * @ht: pointer to the hash table to be printed
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int n;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[n];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
