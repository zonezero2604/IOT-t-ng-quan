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

bool digit_check(char key[])
{
    for(int i = 0; i < strlen(key); i++)
    {
        if(isdigit(key[i])==0)
        {
            return false;
        }
    }
    return true;
}


long gt(int n);


int main() {


	  int a;
	  char stroka[10];


	     	  do{
	     	          printf("Input a: ");
	     	          fflush(stdout);
	     	          scanf("%s",stroka);
	     	  }
	     	      while (!digit_check(stroka) || (atoi(stroka)>10));
	     	  a = atoi(stroka);
	     	  printf("gt cua %d la :%ld",a,gt(a));
	     	  fflush(stdout);

	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
 getchar();
   return 0;
}

long gt(int n)
{
	int i;
	long gt = 1;
	for(i=1;i<=n;i++)
	{
		gt *= i;
	}
	return gt;
	}
