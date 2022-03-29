/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>



int main ()
{
    char ho[10];
    char ten[10];
    printf("Nhap vao ho:");
    fflush(stdout);
    scanf("%s",ho);
    printf("Nhap vao ten:");
    fflush(stdout);
    scanf("%s",ten);

    printf("\nHo Ten: %s %s",ho,ten);
    fflush(stdout);
//  getchar(); // đọc ký tự '\n'
    getchar();
}
