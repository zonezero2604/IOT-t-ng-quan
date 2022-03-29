/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>

unsigned char i;

int main ()
{
	for(i=0; i<999;i++)
	{
		printf("%d",i);
		fflush(stdout);
	}

	
//	getchar(); // đọc ký tự '\n'
	getchar();
}
