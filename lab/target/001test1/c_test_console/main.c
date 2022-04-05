/*
 * main.c
 *
 *  Created on: Feb 11, 2022
 *      Author: chau
 */


#include <stdio.h>
int main() {
   int i, space, rows = 3, k = 0;
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf(" ");
      }
      while (k != 2 * i - 1) {
         printf("*");
         ++k;
      }
      printf("\n");
   }
   getchar();
   getchar();
   return 0;
}

