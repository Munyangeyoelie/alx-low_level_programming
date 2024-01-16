#include "main.h"
/**
 *_isupper - checks if letters are uppercase.
 *@c: input.
 *
 *Return: 1 if c is uppercase
 *0 otherwise.
 *Author: Jaba @my room 21, on Oct 03, 2022,  Mon.
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
	return (1);
else
	return (0);
}
