/*
 * main.c
 *
 *  Created on: Feb 11, 2022
 *      Author: chau
 */


#include<stdlib.h>
#include<stdio.h>

void printEvenOdd(int cur, int limit);


int main() {

  int a,b;

   printf("Input a gioi han duoi, b gioi han tren: ");
   fflush(stdout);
   scanf("%d",&a);
   scanf("%d",&b);

  printEvenOdd(a,b);

	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
 getchar();
   return 0;
}


void printEvenOdd(int cur, int limit)
{
	if(cur>limit)
	{
		return;
	}
	printf("%d, ",cur);
	fflush(stdout);
	printEvenOdd(cur + 2, limit);
}
