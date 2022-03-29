/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{

	int x=5;
	 int const * ptr = &x;

	 ++(*ptr);
	 //  increment of read-only location '*ptr'  ==>
	 //ở trên khai báo biên con trỏ trỏ đến giá trị hằng int ở dưới thay đổi giá trị 
	 //=> lỗi
	 // => sửa giống bài exercise 5.2
	 printf("%d",x);
	 fflush(stdout);

	printf("Press enter key to exit this application");

	while(getchar() != '\n')
	{
	//just read the input buffer and do nothing
	 }
     getchar();
}
