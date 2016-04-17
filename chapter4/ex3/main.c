/*
 * In this exercise we need to determine the fate of each code	
 * Source: Head First C Book
 * Chapter 4, page 165
 * Author: Luiz Sol
 * Date: 2016/04/11
 */

 #include <stdio.h>

 ///////////////// Option 1 /////////////////
 //I can compile this code
 //This program will work

float mercury_day_in_earth_days();
int hours_in_an_earh_day();

int main(){
	float length_of_day = mercury_day_in_earth_days();
	int hours = hours_in_an_earh_day();
	float day = length_of_day * hours;

///////////////// Option 2 /////////////////
//I can compile this code
//I should display a warning
//This program will work

float mercury_day_in_earth_days();

int main(){
	float length_of_day = mercury_day_in_earth_days();
	int hours = hours_in_an_earh_day(); //Even thogh it wasn't declared, this function would be implicit (and correctly) declared as an int
	float day = length_of_day * hours;

///////////////// Option 3 /////////////////
//I should display a warning

int main(){
	float length_of_day = mercury_day_in_earth_days(); //The compiler would assume this funcion to return int, but are returning a float
	int hours = hours_in_an_earh_day();
	float day = length_of_day * hours;

///////////////// Option 4 /////////////////
//I can compile this code

float mercury_day_in_earth_days();
int hours_in_an_earh_day();

int main(){
	int length_of_day = mercury_day_in_earth_days(); //The value would casted to a int, generatin a rounding error
	int hours = hours_in_an_earh_day();
	float day = length_of_day * hours;


/////////////////////////////////////////// 

 	printf("A day on Mercury is %f hours\n", day);
 	return 0;
 }

 float mercury_day_in_earth_days(){
 	return 58.65;
 }

 int hours_in_an_earh_day(){
 	return 24;
 }