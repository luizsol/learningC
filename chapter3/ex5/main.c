/*
 * This program separates the file outputs by category
 * Source: Head First C Book
 * Chapter 3, page 139
 * Author: Luiz Sol
 * Date: 2016/04/11
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(){
 	char line[80];
 	FILE *in = fopen("spooky.csv", "r");
 	FILE *file1 = fopen("ufos.csv", "w");
 	FILE *file2 = fopen("disappearances.csv", "w");
 	FILE *file3 = fopen("others.csv", "w");

 	while(fscanf(in, "%79[^\n]\n", line) == 1){
 		if(strstr(line,"UFO"))
 			fprintf(file1, "%s\n", line);
 		else if (strstr(line, "Disappearance"))
 			fprintf(file2, "%s\n", line);
 		else
 			fprintf(file3, "%s\n", line);
 	}

 	fclose(file1);
 	fclose(file2);
 	fclose(file3);

 	return 0;
 }