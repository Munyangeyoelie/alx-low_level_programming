#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes.
 * @s: pointer to string.
 * @accept: pointer to string to be matched
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found.
 * author: Jaba [borrowed the code]
 * date: 23-08-22. Central Library
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}

