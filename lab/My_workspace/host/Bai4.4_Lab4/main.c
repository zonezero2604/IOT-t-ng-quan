/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	float nhietDo = 33.27;

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
	printf("Dia chi cua bien la: %p", &nhietDo);
	fflush(stdout);
    getchar();
}
