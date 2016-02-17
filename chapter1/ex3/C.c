/*
 * Compiler comprehension exercise
 * Source: Head First C Book
 * Chapter 1, page 23.
 * "Author": Luiz Sol
 * Date: 2016/02/17
 */

//This code whoud be compiled and work as intended 

#include <stdio.h>

int main() 
{
	int card = 1; 
	if (card > 1) { //Nothing from here...
		card = card - 1; 
		if (card < 7)
			puts("Small card");
	} else  //... to here would be executed, since all the code above is in the same block and card is > 1
	puts("Ace!"); //Then the program would output "Ace!"
	
	return 0; 
}

