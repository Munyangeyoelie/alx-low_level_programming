#include "main.h"
/**
 *_islower - check for lower case letters
 *@c: input.
 *
 *Return: 1 if c is lowercase
 * 0 if c is anything else.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
