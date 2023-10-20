#include <unistd.h>
/*
 * putchar - writes the character c to stdout
 * @c: charactere to print
 *
 *
 */
int _putchar(chqr c)
{
	return (write(1, &c, 1));
}
