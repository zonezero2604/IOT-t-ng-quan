/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	unsigned int numberOne,numberTwo,sum,avg;
	printf("nhap numberOne\n");
    fflush(stdout);
    scanf("%d",&numberOne);
	printf("nhap numberTwo\n");
	fflush(stdout);
	scanf("%d",&numberTwo);

	// tính tổng hai phần tử
	sum = numberOne+numberTwo;
	avg = sum>>1;

	 printf("avg = %d\n",avg);
	 fflush(stdout);


	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
    getchar();
}
