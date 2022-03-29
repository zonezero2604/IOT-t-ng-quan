/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>

unsigned int global;
unsigned int global_init = 10;

int main ()
{
	static unsigned int local;
	printf("value of local variable: %i \n",local);
	fflush(stdout);
	printf("address of local variable: %p \n",&local);
	fflush(stdout);


	static unsigned int local_init = 10;
    printf("value of local_init variable: %i \n",local_init);
    fflush(stdout);
    printf("address of local_init variable: %p \n",&local_init);
    fflush(stdout);


    printf("value of global variable: %i \n",global);
    fflush(stdout);
	printf("address of global variable: %p \n",&global); // 0x2000008c bss segment
	fflush(stdout);

	printf("value of global_init variable: %i \n",global_init);
	fflush(stdout);
	printf("address of global_init variable: %p \n",&global_init); // 20000000  - data segment
	fflush(stdout);
	
//	getchar(); // đọc ký tự '\n'
	getchar();
}
