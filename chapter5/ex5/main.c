/*
 * This exercise the usage of the -> notation
 * Source: Head First C Book
 * Chapter 5, page 242
 * Author: Luiz Sol
 * Date: 2016/05/08
 */
 
#include <stdio.h>

typedef struct {
	const char *description;
	float value;
} swag;

typedef struct {
	swag *swag;
	const char *sequence;
} combination;

typedef struct {
	combination numbers;
	const char *make;
} safe;
 
int main(){
	swag gold = {"GOLD!", 1000000.0};
	combination numbers = {&gold, "6502"};
	safe s = {numbers, "RAMACON250"};
	printf("The combination for the safe %s containing %.2f in %s is: %s\n", s.make, s.numbers.swag->value, s.numbers.swag->description, s.numbers.sequence);
}	
