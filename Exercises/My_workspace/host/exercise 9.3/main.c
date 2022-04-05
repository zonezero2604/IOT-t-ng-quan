/*
 * main.c
 *
 *  Created on: Feb 11, 2022
 *      Author: chau
 */


#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include <ctype.h>


void swap(float *a, float*b);



int main() {

  float a,b;

   printf("Input a, b: ");
   fflush(stdout);
   scanf("%f",&a);
   scanf("%f",&b);
  swap(&a,&b);

 printf("a = %f, b = %f",a,b);
 fflush(stdout);

	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
 getchar();
   return 0;
}


void swap(float *a, float*b)
{
	float tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
