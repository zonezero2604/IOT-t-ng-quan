/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	float temperature,humidity;
	printf("Nhap gia tri nhiet do");
	fflush(stdout);
	scanf("%f",&temperature);

		printf("Nhap gia tri %% do am");
		fflush(stdout);
		scanf("%f",&humidity);


	if(temperature > 30.f)
	{
		printf("oklumi! DIeu hoa duoc tat che do lam mat\n");
		fflush(stdout);
	}
	else
	{
		printf("oklumi! DIeu hoa duoc bat che do lam mat\n");
				fflush(stdout);
	}

	if(humidity > 70.f)
		{
			printf("oklumi! DIeu hoa duoc bat che do gio\n");
			fflush(stdout);
		}
		else
		{
			printf("oklumi! DIeu hoa duoc tat che do gio\n");
					fflush(stdout);
		}


	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
   getchar();
}