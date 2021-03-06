

/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: chau
 */


#include <stdio.h>

void tinhToan(int toanTu,float a, float b)
{

    switch (toanTu) {
    // Truong hop 31 ngay
    case '+':
	printf("so thu nhat + so thu hai <=> %.2f + %.2f = %.2f",a,b,a+b);
    fflush(stdout);
    break;

    case '-':
    	printf("so thu nhat - so thu hai <=> %.2f - %.2f = %.2f",a,b,a-b);
        fflush(stdout);
        break;

    case '*':
    	printf("so thu nhat * so thu hai <=> %.2f * %.2f = %.2f",a,b,a*b);
        fflush(stdout);
        break;

    case '/':
    	printf("so thu nhat / so thu hai <=> %.2f / %.2f = %.2f",a,b,a/b);
        fflush(stdout);
        break;

    default:
        printf("khong hop le.\n");
        fflush(stdout);
        break;
    }
}

int main ()
{
	float soThuNhat,soThuHai;
	char toanTu;
	//Hiển thị thông tin cho người dùng: nhập số và toán tử
	do{
		printf("moi ban nhap so va toan tu \n");
		fflush(stdout);
		printf("nhap soThuNhat \n");
		fflush(stdout);
		scanf("%f",&soThuNhat);
		printf("nhap soThuHai \n");
	    fflush(stdout);
		scanf("%f",&soThuHai);
		getchar(); // khử \n
		printf("nhap toanTu \n");
	    fflush(stdout);
	    scanf("%c",&toanTu);
	}
	while((toanTu != '+') && (toanTu != '-') && (toanTu != '*') && (toanTu != '/'));
	tinhToan(toanTu,soThuNhat,soThuHai);


	 printf("Press enter key to exit this application");
	 fflush(stdout);
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
     getchar();
}
