/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>
#define Pi 3.14159

int main ()
{
	float banKinh,chuVi,dienTich;
	printf("Nhap vao Ban kinh hình tron:");
	fflush(stdout);
	scanf("%f",&banKinh);
	chuVi = 2*Pi*banKinh;
	dienTich = Pi*banKinh*banKinh;
	printf("\nChuvi =  %.2f Dientich =  %.2f",chuVi,dienTich);
	fflush(stdout);
//	getchar(); // đọc ký tự '\n'
	getchar();
}
