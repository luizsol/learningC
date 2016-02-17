/*
 * Compiler comprehension exercise
 * Source: Head First C Book
 * Chapter 1, page 23.
 * "Author": Luiz Sol
 * Date: 2016/02/17
 */

//This code whoudn't be compiled

#include <stdio.h>

int main() 
{ //This brace is not being closed anywere else.
	int card = 1; 
	if (card > 1) { 
		card = card - 1; 
		if (card < 7)
			puts("Small card");
	else  
		puts("Ace!");
	
	return 0; 
}

