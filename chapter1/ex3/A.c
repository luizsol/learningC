/*
 * Compiler comprehension exercise
 * Source: Head First C Book
 * Chapter 1, page 23.
 * "Author": Luiz Sol
 * Date: 2016/02/17
 */

//This code would be compiled, but whoudn't work as intended

#include <stdio.h>

int main() 
{
	int card = 1; 
	if (card > 1) //The compiler will probably ignore this since you've already defined card = 1
		card = card - 1;
		if (card < 7) //Then the code will execute this, since it isn't in the same block as the previous statement
			puts("Small card");  //Then this would be printed
	else {
		puts("Ace!");  //And this would be ignored, since card is < 7
	}
	return 0; 
}

