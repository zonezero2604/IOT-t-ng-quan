/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	unsigned int a,b,c,A,B;
	printf("nhap a\n");
    fflush(stdout);
    scanf("%d",&a);
	printf("nhap b\n");
	fflush(stdout);
	scanf("%d",&b);
	printf("nhap c\n");
	fflush(stdout);
	scanf("%d",&c);

	A = (a++) + (++a);
	B = --a - b-- * ++c;

	 printf("A = %d B = %d a = %d b = %d c = %d\n",A,B,a,b,c);
	 fflush(stdout);


	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
    getchar();
}
