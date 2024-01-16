#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: pointer to the string
  * @c: character to be searched for
  *
  * Description: the function behaves like the standard library fuction strchr.
  * Return: pointer to the first occurrence of the character c in the string,
  * or NULL if the character is not found.
  * author: Jaba
  * date: Aug. 23, 2022. Central Library
  */

char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}

