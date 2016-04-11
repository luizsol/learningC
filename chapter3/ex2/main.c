/*
 * This program can read comma-separated data from the command line, validates the data and then display it in JSON format.
 * Source: Head First C Book
 * Chapter 3, page 115
 * Author: Luiz Sol
 * Date: 2016/04/11
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

		if(latitude < -90 || latitude > 90){
 			fprintf(stderr,"Bad latitude (%.2f). Exiting.\n", latitude);
 			return(2);
 		}
 		if(longitude < -180 || longitude > 180){
 			fprintf(stderr,"Bad longitude (%.2f). Exiting.\n", latitude);
 			return(2);
 		} 		

 		printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}
	puts("\n]");
	return 0;
}		
 			