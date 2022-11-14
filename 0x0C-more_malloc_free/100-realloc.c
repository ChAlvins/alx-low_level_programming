#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: size of the old allocated memory for ptr
 * @ptr: pointer to the memory previously allocated
 * @new_size: size of new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr = ptr;
	char *new_ptr;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		j = old_size;
	}
	for (i = 0; i < j; i++)
	{
		new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
