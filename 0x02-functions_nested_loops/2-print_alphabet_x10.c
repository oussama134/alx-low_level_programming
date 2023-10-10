
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char lettre;
	int i;
	for ( i=0; i<10; i++){
		for (lettre = 'a'; lettre <= 'z'; i++){
			_putchar(lettre);
			_putchar('\n'); }
	}

} 

