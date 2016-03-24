/*
 * Displays a string backwards
 * Source: Head First C Book
 * Chapter 2.5, page 97
 * Author: Luiz Sol
 * Date: 2016/03/14
 */

 #include <stdio.h>
 #include <string.h>

 void print_reverse(const char *s){
 	size_t len = strlen(s);
 	char *t = s + len - 1;
 	while(t >= s){
 		printf("%c", *t);
 		t = t - 1;
 	}
 	puts("");
 }

int main(int argc, char const *argv[])
 {
 	print_reverse(argv[1]);
 	return 0;
 }