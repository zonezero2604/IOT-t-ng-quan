/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>

int main ()
{
	{
		int a= 1;
		printf("\n a1 = %d",a);
		fflush(stdout);
		{
			int a= 2;
			printf("\n a2 = %d",a);
			fflush(stdout);
		}
		printf("\n a3 = %d",a);
		fflush(stdout);
	}
	{
		int a= 3;
	    printf("\n a4 = %d",a);
		fflush(stdout);
	}
//	getchar(); // đọc ký tự '\n'
	getchar();
}
