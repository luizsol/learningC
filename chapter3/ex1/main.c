/*
 * This program can read comma-separated data from the command line and then display it in JSON format.
 * Source: Head First C Book
 * Chapter 3, page 105
 * Author: Luiz Sol
 * Date: 2016/03/18
 */

 #include <stdio.h>

 int main(){
 	float latitude;
 	float longitude;
 	char info[80];
 	int started = 0;
 	puts("data=[");

 	while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3){
 		if(started)
 			printf(",\n");
 		else
 			started = 1;
 		printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}
	puts("\n]");
	return 0;
}
