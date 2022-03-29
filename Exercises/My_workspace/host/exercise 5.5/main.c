/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{

	int i = 10;
	const int j = 20;
	int *ptr = &i;
	 printf("ptr i:%d \n",*ptr);
	 fflush(stdout);

	 ptr = &j;
	 printf("ptr i:%d \n",*ptr);
	 fflush(stdout);


	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
	//just read the input buffer and do nothing
	 }
     getchar();
}
