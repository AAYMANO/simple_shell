#include "shell.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The ptr to the memory area
 * @b: The byte to fill *s with
 * @n: The amount of bytes to be filled
 * Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

/**
 * ffree - Frees a str of str
 * @pp: str of str
 */
void ffree(char **pp)
{
	char **i = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(i);
}

/**
 * _realloc - Reallocates a block of memory
 * @ptr: Pointer to previous malloc'ated block
 * @old_size: Byte size of previous block
 * @new_size: Byte size of new block
 * Return: Ptr to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

