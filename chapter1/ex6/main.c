/*
 * Compiler comprehension exercise
 * Source: Head First C Book
 * Chapter 1, page 35.
 * "Author": Luiz Sol
 * Date: 2016/02/27
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char card_name[3];
	int count = 0;
	while(card_name[0] != 'X'){
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0]){
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				return 0;
			default:
				val = atoi(card_name);
				if(val>10 || val <1){
					puts("Error. Invalid card number. Try again");
					break;
				}
		}
		if((val>2)&&(val<7))
			count++;
		else if(val==10)
			count--;
		printf("Current count: %i\n", count);
	}
	return 0;
}