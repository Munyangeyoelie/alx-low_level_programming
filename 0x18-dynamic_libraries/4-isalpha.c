#include "main.h"

/**
 * _isalpha - check for letters
 * @c: input
 *
 * Return: 1 if c is an alphabet, 0 otherwise.
 * Author: Jaba  @Kiit on Oct 03, 2022 in room 21
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
 
