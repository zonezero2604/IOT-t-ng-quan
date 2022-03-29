/*
 * main.c
 *
 *  Created on: Feb 10, 2022
 *      Author: chau
 */


#include <stdio.h>

int main ()
{
	char kyTu;
	printf("Nhap vao so bat ky:");
	scanf("%c",&kyTu);
	printf("\nMa ASCII cua %c la %d",kyTu,kyTu);
	fflush(stdin); // đọc ký tự '\n'
//	getchar(); // đọc ký tự '\n'
	getchar();
}
