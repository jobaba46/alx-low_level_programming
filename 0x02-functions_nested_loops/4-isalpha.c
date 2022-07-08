#include "main.h"

/**
 * _isalpha - check for alphaetical letter
 * @c: a charter to be check on
 *  Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
}
