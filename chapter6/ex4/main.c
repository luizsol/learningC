/*
 * Using the free() funciton to prevent memory leak
 * Source: Head First C Book
 * Chapter 6, page 289
 * Author: Luiz Sol
 * Date: 2016/05/19
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
	char *name;
	char *opens;
	char *closes;
	struct island *next;
} island;

void display(island *start){
	island *i = start;
	for(; i != NULL ; i = i->next)
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
}

island* create(char *name){
	island *i = malloc(sizeof(island));
	i->name = strdup(name);
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}

void release(island *start){
	island *i = start;
	island *next = NULL;
	for(; i != NULL; i = next){
		next = i->next;
		free(i->name);
		free(i);
	}
}

int main(){
	island *start = NULL;
	island *i = NULL;
	island *next = NULL;
	char name[80];
	for(; fgets(name, 80, stdin) != NULL; i = next){
		next = create(name);
		if (start == NULL)
			start = next;
		if (i != NULL)
			i -> next = next;
	}
	display(start);
	release(start);
}
