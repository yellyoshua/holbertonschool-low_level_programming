#include "main.h"

/**
 *	_isLower - validate lower case character
 *	@character: value for validate
 *	Return: Always 0 (Pass)
 */
int _isLower(int character)
{
	/*
	 * should validate if character is
	 * is lowercase
	 */

	if ((character >= 'a') && (character <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
