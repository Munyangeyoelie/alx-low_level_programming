#include "main.h"
/**
 *_isdigit - ckecks if is an input is a number
 *@c: input int
 *
 *Return: Always 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

else
{
return (0);
}
}
