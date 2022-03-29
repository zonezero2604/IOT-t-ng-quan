/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>
#define CONG(a,b) ((a)+(b))
#define TRU(a,b) ((a)-(b))
#define NHAN(a,b) ((a)*(b))
#define CHIA(a,b) ((float)(a)/(b))


int main ()
{
	int a,b,cong,tru,nhan;
	float chia;
	printf("Nhap vao 2 so:");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	cong = CONG(a,b);
	tru = TRU(a,b);
	nhan = NHAN(a,b);
	chia = CHIA(a,b);
	printf("\nCONG =  %.2d TRU =  %.2d NHAN =  %.2d chia =  %.2f",cong,tru,nhan,chia);
	fflush(stdout);
//	getchar(); // đọc ký tự '\n'
	getchar();
}
