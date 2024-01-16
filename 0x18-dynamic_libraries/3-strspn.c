#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of the bytes from accept.
 * author: Jaba [not my code, but understood the algorithm]
 * date: 23-08-2022. Central Library
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32) /* check for spaces */
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
					match += 1; /* increment if match is found */
			}
		}
		else
		{
			return (match);
		}
	}
	return (match);
}


