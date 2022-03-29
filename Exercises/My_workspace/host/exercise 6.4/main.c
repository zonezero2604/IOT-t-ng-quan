

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

	 // set bit thu 4 va 7
	numBer = numBer & ~(1<<4);
	numBer = numBer & ~(1<<5);
	numBer = numBer & ~(1<<6);

	 printf("so vua nhap: 0x%02x\n",numBer);
		 fflush(stdout);


	 printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
	//just read the input buffer and do nothing
	 }
     getchar();
}
