#include "main.h"
#include <unistd.h>
/**
 * putchar - write the character c to stdout
 * @C - the character to print 
 * Return: Always 0 (Success)
 */
int _putchar (char c)
{
	return (write(1,&c,1))
}
