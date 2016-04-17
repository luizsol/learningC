/*
 * File: launch.c
 * Program to understand multiple file compilation and Makefile
 * Source: Head First C Book
 * Chapter 4, page 201
 * Author: Luiz Sol
 * Date: 2016/04/17
 */

#include "launch.h"
#include "thruster.h"

 int main(int argc, char const *argv[])
 {
 	print_message();
 	return 0;
 }

 void print_message(){
 	 print_message_sub();
 }