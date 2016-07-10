/*
 * Automates Dear John letters
 * Source: Head First C Book
 * Chapter 7, page 335
 * Author: Luiz Sol
 * Date: 2016/07/09
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};

typedef struct {
	char *name;
	enum response_type type;
} response;

void dump(response r){
	printf("Dear %s,\n", r.name);
	puts("Unfortunately your last date contacted us to");
	puts("say that they will not be seeing you again");
}

void second_chance(response r){
	printf("Dear %s,\n", r.name);
	puts("Good news: your last date has asked us to");
	puts("arrange another meeting. Please call ASAP.");
}

void marriage(response r){
	printf("Dear %s,\n", r.name);
	puts("Congratulations! Your last date has contacted");
	puts("us with a proposal of marriage.");
}

int main(){
	response r[] = {
		{"Mike", DUMP}, {"Luis", SECOND_CHANCE},
		{"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
	};
	
	int i;
	for(i = 0; i < 4; i++){
		switch(r[i].type){
		case DUMP:
			dump(r[i]);
			break;
		case SECOND_CHANCE:
			second_chance(r[i]);
			break;
		default:
			marriage(r[i]);
		}
	}
	return 0;
}
