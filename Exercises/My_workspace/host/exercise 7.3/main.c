

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
	float luongDienTieuThu,tienDienChoPhep,tongTienThanhToan;
	 printf("nhap luongDienTieuThu \n");
	 fflush(stdout);
	 scanf("%f",&luongDienTieuThu);
	 printf("nhap tienDienChoPhep\n");
	 fflush(stdout);
	 scanf("%f",&tienDienChoPhep);

	 // tính tiền điện
	 if(luongDienTieuThu<100)
	 {
		 tongTienThanhToan = luongDienTieuThu*600;
	 }
	 else if(luongDienTieuThu>=101 && luongDienTieuThu<=150)
	 {
		 tongTienThanhToan = 100*600 + (luongDienTieuThu-100)*700;
	 }
	 else if(luongDienTieuThu>=151 && luongDienTieuThu<=200)
	 {
	      tongTienThanhToan = 100*600 + 50*700 + (luongDienTieuThu-150)*900;
	 }
	 else
	 {
	      tongTienThanhToan = 100*600 + 50*700 + 50*900 + (luongDienTieuThu-200)*1100;
	 }

	 printf("tongTienThanhToan = %f\n",tongTienThanhToan);
	fflush(stdout);

	if(tongTienThanhToan<tienDienChoPhep)
	{
		printf("so tien thanh toan trong pham vi cho phep\n");
			 fflush(stdout);
	}
	else
	{
		printf("so tien thanh toan KHONG trong pham vi cho phep\n");
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
