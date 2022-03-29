/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>
#define DIENTICH_CUA_HINHVUONG(a) ((a)*(a))
#define CHUVI_CUA_HINHVUONG(a) (4*(a))


int main ()
{
	float canh,chuVi,dienTich;
	printf("Nhap vao canh hình vuong:");
	fflush(stdout);
	scanf("%f",&canh);
	chuVi = CHUVI_CUA_HINHVUONG(canh);
	dienTich = DIENTICH_CUA_HINHVUONG(canh);
	printf("\nChuvi =  %.2f Dientich =  %.2f",chuVi,dienTich);
	fflush(stdout);
//	getchar(); // đọc ký tự '\n'
	getchar();
}
