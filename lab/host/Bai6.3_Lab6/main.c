/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	float a,b,c,big;
	printf("nhap a\n");
    fflush(stdout);
    scanf("%f",&a);
	printf("nhap b\n");
	fflush(stdout);
	scanf("%f",&b);
	printf("nhap c\n");
	fflush(stdout);
	scanf("%f",&c);

	big = (a>b && a>c)? a :(b>c?b:c);

	 printf("so lon nhat: %f \n",big);
	 fflush(stdout);


	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
    getchar();
}
