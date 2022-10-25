#include <unistd.h>

/**
 * putchar writes character c to stdout
 * @c : cahr to printed
 * return : on success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
