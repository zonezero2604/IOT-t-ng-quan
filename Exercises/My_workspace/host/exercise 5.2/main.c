/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{

	int x=5;
	 int * const ptr = &x;

	 ++(*ptr);
	 printf("%d",x);
	 fflush(stdout);

	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
	//just read the input buffer and do nothing
	 }
     getchar();
}
