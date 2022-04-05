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


int uscln(int a, int b);
int bscnn(int a, int b);




int main() {


  int a,b;
  char stroka[10];
  char strokb[10];


     	  do{
     	          printf("Input a, b: ");
     	          fflush(stdout);
     	          scanf("%s",stroka);
     	          scanf("%s",strokb);
     	  }
     	      while (!digit_check(stroka) || !digit_check(strokb));
     	  a = atoi(stroka);
     	  b = atoi(strokb);

  printf("uscln cua %d va %d la:%d\n",a,b,uscln(a,b));
  fflush(stdout);
  printf("bscnn cua %d va %d la:%d\n",a,b,bscnn(a,b));
  fflush(stdout);

	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
 getchar();
   return 0;
}

int uscln(int a, int b)
{
	while(a != b)
	{
		if(a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
	}

int bscnn(int a, int b)
{
	int result = 0;
	int max;
	if(a>b)
	{
		max = a;
	 }
	else
	{
		max = b;
	}
	for(int i=max; i <= a*b; i++ )
	{
		if(((i % a) == 0) && ((i % b) == 0))
			{
			result = i;
			break;
			}
	}
	return result;
	}

