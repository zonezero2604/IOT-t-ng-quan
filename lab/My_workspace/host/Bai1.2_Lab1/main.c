/*
 * main.c
 *
 *  Created on: Feb 11, 2022
 *      Author: chau
 */


#include <stdio.h>
int main() {
   int i, j, width=6, height = 4;
   for (i = 1; i <= height; ++i) {
	   for (j = 1; j <= width; ++j) {
         printf("* ");

   }
      printf("\n");
   }
   getchar();
   getchar();
   return 0;
}
