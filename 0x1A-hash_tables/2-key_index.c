#include "hash_tables.h"

/**
 * key_index- function that gives the index of a key
 * @key: the key to get at it index
 * @size: the size of the hash tables
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
