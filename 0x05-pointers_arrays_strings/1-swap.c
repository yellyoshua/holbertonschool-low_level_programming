#include "main.h"

/**
	*	swap_int - swap values between arguments
	*	@a: first argument number
	*	@b: second argument number
	*/
void swap_int(int *a, int *b)
{
	int prevA = *a;
	int prevB = *b;

	*a = prevB;
	*b = prevA;
}
