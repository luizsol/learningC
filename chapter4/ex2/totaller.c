/*
 * This program is a implementation of separate head files.
 * Source: Head First C Book
 * Chapter 4, page 174
 * Author: Luiz Sol
 * Date: 2016/04/17
 */

 #include <stdio.h>
 #include "totaller.h"

 float total = 0.0;
 short count = 0;
 short tax_percent = 6;


 int main(int argc, char *argv[])
 {
 	float val;
 	printf("Price of item: ");
 	while(scanf("%f", &val) == 1){
 		printf("Total so far: %.2f\n", add_with_tax(val));
 		printf("Price of item: ");
 	}
 	printf("\n Final total: %.2f\n", total);
 	printf("Number of items: %hi\n", count);

 	return 0;
 }

 float add_with_tax(float f){
 	float tax_rate = 1 + tax_percent / 100.0;
 	total = total + (f * tax_rate);
 	count ++;
 	return total;
 }