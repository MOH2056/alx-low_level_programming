#include "main.h"
/**
 * _abs - value of integer
 * @b: parameter
 * Return: -b or b
 */
int _abs(int b)
{
	if (b < 0)
		return (-b);
	else if (b >= 0)
	{
		return (b);
	}
	return (0);
}
