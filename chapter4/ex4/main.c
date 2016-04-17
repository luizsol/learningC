/*
 * File: main.c
 * Program that encripts a message
 * Source: Head First C Book
 * Chapter 4, page 187
 * Author: Luiz Sol
 * Date: 2016/04/17
 */

#include <stdio.h>
#include "encrypt.h"

 int main(){
 	char msg[80];
 	while(fgets(msg, 80, stdin)){
 		encrypt(msg);
 		printf("%s", msg);
 	}
 }