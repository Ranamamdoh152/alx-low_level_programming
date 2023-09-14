#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks the existance of a lower case letter
 *
 * @c: the char of intrest
 *
 * Return: 1 if is upper 0 atherwise
 */

int _isupper(int c)
{
	while (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
=======
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

>>>>>>> 12e19465c3204c05baedf87aeb375917fa08495a
}
