#include "main.h"
/**
 * _isalpha - check for lowercase or uppercase
 * @c: this parameter to be checked
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c = 'A' && c <= 'Z'));
}
