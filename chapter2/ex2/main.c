/*
 * Program that makes the woman choose her partner
 * Source: Head First C Book
 * Chapter 2, page 57
 * Author: Luiz Sol
 * Date: 2016/03/12
 */

#include <stdio.h>

 int main(int argc, char ** argv){
 	int contestants[] = {1,2,3};
 	int *choice = contestants;
 	contestants[0] = 2;
 	contestants[1] = contestants[2];
 	contestants[2] = *choice;
 	printf("I'm going to pick contestant number %i\n", contestants[2]);
 	return 0;
 }