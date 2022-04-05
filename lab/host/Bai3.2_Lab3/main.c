/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>



int main ()
{
    float chieuDai,chieuRong,chuVi,dienTich;
    printf("Nhap vao lan luot chieu dai va chieu rong:");
    fflush(stdout);
    scanf("%f %f",&chieuDai,&chieuRong);
    chuVi=chieuDai+chieuRong;
    dienTich=chieuDai*chieuRong;
    printf("dien tich= %f chuvi = %f",dienTich,chuVi);
    fflush(stdout);

//  getchar(); // đọc ký tự '\n'
    getchar();
}
