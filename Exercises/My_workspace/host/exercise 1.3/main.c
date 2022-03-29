/*
 * main.c
 *
 *  Created on: Feb 10, 2022
 *      Author: chau
 */


#include <stdio.h>

int main ()
{
	int a;
	printf("Nhap vao so bat ky:");
	scanf("%d",&a);
	printf("\nso hex cua %d la %x",a,a);
	fflush(stdin); // đọc ký tự '\n'
//	getchar(); // đọc ký tự '\n'
	getchar();
}
