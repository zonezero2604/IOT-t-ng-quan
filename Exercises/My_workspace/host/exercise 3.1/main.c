/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */



#include <stdio.h>

int main ()
{
	char kyTu1, kyTu2, kyTu3, kyTu4, kyTu5, kyTu6;
	printf("Nhap vao 6 ky tu bat ky:");
	fflush(stdout);
	scanf("%c %c %c %c %c %c",&kyTu1, &kyTu2,&kyTu3, &kyTu4,&kyTu5, &kyTu6);
	printf("\n6 ky tu bat ky: %c %c %c %c %c %c",kyTu1,kyTu2,kyTu3,kyTu4,kyTu5,kyTu6);
	fflush(stdout);
//	getchar(); // đọc ký tự '\n'
	getchar();
}
