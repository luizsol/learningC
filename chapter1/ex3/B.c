/*
 * Compiler comprehension exercise
 * Source: Head First C Book
 * Chapter 1, page 23.
 * "Author": Luiz Sol
 * Date: 2016/02/17
 */

//This code whoud be compiled, but whoudn't work as intended

#include <stdio.h>

int main() 
{
	int card = 1; 
	if (card > 1) { //Nothing from here...
		card = card - 1; 
		if (card < 7)
			puts("Small card");
	else 
		puts("Ace!");
	} //... to here would be executed, since all the code above is in the same block and card is > 1
	return 0; 
}

