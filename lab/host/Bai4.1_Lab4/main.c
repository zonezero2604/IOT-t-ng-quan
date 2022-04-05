/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	int a=-25;
	printf("%x",a);
	fflush(stdout);
	printf("\n%d",(unsigned char)a);
	fflush(stdout);

    getchar();
}
