#include "shell.h"

/**
 * bfree - Frees a ptr and NULLs the address
 * @ptr: Address of the ptr to free
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

