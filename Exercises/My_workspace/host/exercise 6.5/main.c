

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
	int A,B,soLuong,result;
	 printf("nhap so A\n");
	 fflush(stdout);
	 scanf("%d",&A);
	 printf("nhap so B\n");
	 fflush(stdout);
	 scanf("%d",&B);
	 soLuong = (B-A)+1;
	 int arr[soLuong];

	 // tạo mảng
	 for(int i=0;i<soLuong;i++)
	 {
		 arr[i] = A +i;
		 printf("arr[%d] = %d\n",i,arr[i]);
		 fflush(stdout);
	 }
	 // XOR các phần tử
	 result = arr[0];
	 for(int i=0;i<(soLuong-1);i++)
	 	 {
		 	 result = result^arr[i+1];
	 	 }
	 printf("result = %d\n",result);
	 fflush(stdout);


	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
     getchar();
}
