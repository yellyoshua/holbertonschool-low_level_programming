#include "main.h"

/**
 *	_isLower - validate lower case character
 *	@c: value for validate
 *	Return: Always 0 (Pass)
 */
int _isLower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
