

/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: chau
 */


#include <stdio.h>

void inSoNgay(int ngay,int nam)
{

    switch (ngay) {
    // Truong hop 31 ngay
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang %d 31 Ngay.\n",ngay);
        fflush(stdout);
        break;

    // Truong hop 30 ngay
    case 4:
    case 6:
    case 9:
    case 11:
    	 printf("Thang %d 30 Ngay.\n",ngay);
        fflush(stdout);
        break;

    // Case for 28/29 Days
    case 2:
    	if(nam%4 == 0)
    	{
    		 printf("Thang %d 28 Ngay.\n",ngay);
    		 fflush(stdout);
    	}
    	else
    	{
    		 printf("Thang %d 29 Ngay.\n",ngay);
    		fflush(stdout);
    	}
        break;

    default:
        printf("Thang khong hop le.\n");
        fflush(stdout);
        break;
    }
}

int main ()
{

// nhập 2 số A.B là đầu cuối của một mạng
	 int nam;
	 printf("nhap nam \n");
	 fflush(stdout);
	 scanf("%d",&nam);

	 for(int i=1;i<=12;i++)
	 {
		 inSoNgay(i,nam);
	 }


	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
     getchar();
}
