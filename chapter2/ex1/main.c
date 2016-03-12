/*
 * Program to move the boat
 * Source: Head First C Book
 * Chapter 2, page 48
 * Author: Luiz Sol
 * Date: 2016/03/12
 */


#include <stdio.h>


void go_south_east(int *lat, int *lon){
	(*lat)--;
	(*lon)++;
}

 int main(int argc, char ** argv){
 	int latitude = 32;
 	int longitude = -64;
 	go_south_east(&latitude,&longitude);
 	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
 	return 0;
 }