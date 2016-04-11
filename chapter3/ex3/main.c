/*
 * This program decodes a Top-secret message
 * Source: Head First C Book
 * Chapter 3, page 125
 * Author: Luiz Sol
 * Date: 2016/04/11
 */

 #include <stdio.h>

 int main(){
 	char word[10];
 	int i = 0;
 	while (scanf("%9s", word) == 1){
 		i = i + 1;
 		if (i % 2){
 			fprintf(stdout, "%s\n", word);
 		} else {
 			fprintf(stderr, "%s\n", word);
 		}
 	}
 	return 0;
}		
 			