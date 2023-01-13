#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of the allocates space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to a newly allocated memory block of new_size
 * or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		return (malloc(new_size));
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else
		{
			new_ptr = malloc(new_size);
			if (!new_ptr)
				return (NULL);

			if (new_size > old_size)
				memcpy(new_ptr, ptr, old_size);
			else
				memcpy(new_ptr, ptr, new_size);

			free(ptr);
			return (new_ptr);
		}
	}
}
