#include "main.h"

/**
  * _memcpy - copies n bytes from memory area src to memory area dest.
  * @dest: pointer to destination string
  * @src: pointer to source string
  * @n: number of bytes to be copied
  *
  * author: Jaba
  * date: 23-08-2022. Central Library
  * Return: pointer to destination string
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}


