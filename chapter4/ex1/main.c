/*
 * This program automatically totals a bill and adds sales tax to each item.
 * Source: Head First C Book
 * Chapter 4, page 165
 * Author: Luiz Sol
 * Date: 2016/04/11
 */

 #include <stdio.h>

 float total = 0.0;
 short count = 0;
 short tax_percent = 6;

 float add_with_tax(float f){
 	float tax_rate = 1 + tax_percent / 100.0;
 	total = total + (f * tax_rate);
 	count ++;
 	return total;
 }

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