/*
 * main.c
 *
 *  Created on: Feb 11, 2022
 *      Author: chau
 */


#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void reverseSentence(void);

int main() {


	reverseSentence();

	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
 getchar();
   return 0;
}


void reverseSentence(void){
	char c;
	scanf("%c", &c);
	if(c != '\n'){
		printf("%p\n", &c);
	 fflush(stdout);
		reverseSentence();
		printf("%c", c);
	 fflush(stdout);

	}
}