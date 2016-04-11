/*
 * This determines whether a coordenate is inside the bermuda rectangle
 * Source: Head First C Book
 * Chapter 3, page 133
 * Author: Luiz Sol
 * Date: 2016/04/11
 */

 #include <stdio.h>

 int main(){
 	float latitude;
 	float longitude;
 	char info[80];
 	while(scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
 		if (latitude > 26 && latitude < 34)
 			if (longitude > -76 && longitude < -64)
 				printf("%f, %f, %s\n", latitude, longitude, info);
 	return 0;
 }