/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	float nhietDo;
	printf("Nhap gia tri nhiet do");
	fflush(stdout);
	scanf("%f",&nhietDo);

	if(nhietDo >= 35.f)
	{
		printf("oklumi! DIeu hoa da duoc bat");
		fflush(stdout);
	}
	else
	{
		printf("oklumi! DIeu hoa da tat");
				fflush(stdout);
	}
    getchar();
}
