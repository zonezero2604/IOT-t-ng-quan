

/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{

// nhập 2 số A.B là đầu cuối của một mạng
	float A,B,C;
	 printf("nhap so A\n");
	 fflush(stdout);
	 scanf("%f",&A);
	 printf("nhap so B\n");
	 fflush(stdout);
	 scanf("%f",&B);
	 printf("nhap so C\n");
	 fflush(stdout);
	 scanf("%f",&C);

	 float array[3]={A,B,C};
	 float largest,smallest;
	  smallest = array[0];
	  largest = array[0];
	 for (int i=1; i<3; i++) {
	     if (array[i] < smallest)
	         smallest = array[i];
	     if (array[i] > largest)
	         largest= array[i];
	 }

	 printf(" so largest = %f\n",largest);
	 fflush(stdout);
	 printf(" so smallest = %f\n",smallest);
	 fflush(stdout);

	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
     getchar();
}
