/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{

// nhập một số bất kì
	int numBer;
	 printf("nhap so bat ky\n");
	 fflush(stdout);
	 scanf("%d",&numBer);
	 printf("so vua nhap: %d\n",numBer);
	 fflush(stdout);

	 // thực hiện gấp 4 lần số vừa nhập bằng cách dịch trái 2 bit
	numBer = numBer << 2;
	 printf("so numBer sau khi dich nhap: %d\n",numBer);
	 fflush(stdout);



	 printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
	//just read the input buffer and do nothing
	 }
     getchar();
}

