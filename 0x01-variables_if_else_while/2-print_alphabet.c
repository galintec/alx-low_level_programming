#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 * Description:The program prints the alphabet in
 * lowercase.followed by a new line
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
