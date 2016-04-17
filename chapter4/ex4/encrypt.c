/*
 * File: encrypt.c
 * Program that encripts a message
 * Source: Head First C Book
 * Chapter 4, page 187
 * Author: Luiz Sol
 * Date: 2016/04/17
 */

#include "encrypt.h"

 void encrypt(char *message){
 	char c;
 	while (*message){
 		*message = *message ^ 31; //XOR encritption with the key 31
 		message++;
 	}
 }
 