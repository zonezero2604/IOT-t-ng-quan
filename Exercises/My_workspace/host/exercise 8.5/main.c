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



int main() {


  int num;
  char stroka[10];

   	  do{
   	          printf("Input a number: ");
   	          fflush(stdout);
   	          scanf("%s",stroka);

   	  }
   	      while (!digit_check(stroka));
   	  num = atoi(stroka);

  for(int i=1; i<=num; i++)
  {
	  if(i%2==0)
	  {
		  printf("%d ",i);
		        fflush(stdout);
	  }

  }

	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
 getchar();
   return 0;
}
