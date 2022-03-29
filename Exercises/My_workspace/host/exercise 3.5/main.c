/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>

#define COMPARE(x,y)   ((x)<(y)?-1:((x)==(y)?0:1))

int main()
{
  int a,b;
  printf("Nhap vao 2 so:");
  fflush(stdout);
  scanf("%d %d",&a,&b);

  printf("\n so sanh %d voi %d : %d", a , b, COMPARE(a,b));
  fflush(stdout);
  getchar();
}
