/*
 * Program that searches for substrings
 * Source: Head First C Book
 * Chapter 2.5, page 90
 * Author: Luiz Sol
 * Date: 2016/03/14
 */

#include <stdio.h>
#include <string.h>

void find_track(char search_for[]){
	int i;
	for(i = 0;i < 5; i++){
		if(strstr(tracks[i],search_for))
			printf("Track %i: '%s'\n",i,tracks[i]);
	}
}
