

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

	 // tim so chan le
	numBer = numBer & 1;
	if(numBer)
	{
		printf("so vua nhap la so le\n");
			 fflush(stdout);
	}
	else
	{
		printf("so vua nhap la so chan\n");
					 fflush(stdout);
	}



	 printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
	//just read the input buffer and do nothing
	 }
     getchar();
}
