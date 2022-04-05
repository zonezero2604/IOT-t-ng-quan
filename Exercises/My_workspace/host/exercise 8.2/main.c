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

int giaiThua(int n)
{
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}


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


int main() {


	 int n;
	  char stroka[10];

	  do{
	          printf("Input a number: ");
	          fflush(stdout);
	          scanf("%s",stroka);

	  }
	      while (!digit_check(stroka));
	  	  n = atoi(stroka);

  printf("%d",giaiThua(n));
  fflush(stdout);

	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
 getchar();
   return 0;
}
