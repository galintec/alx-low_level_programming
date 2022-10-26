#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of my program
 * Description: The program prints the alphabet in lowercase
 * and then in uppercase followed by a new line.
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar (CH);
		CH++;
	}
		putchar('\n');
		return (0);
}
