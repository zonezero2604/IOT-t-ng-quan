/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>

int main ()
{
    printf("%I64u\n", sizeof(unsigned short));
    fflush(stdout);
    printf("%I64u\n", sizeof(short));
    fflush(stdout);
    printf("%I64u\n", sizeof(float));
    fflush(stdout);
    printf("%I64u\n", sizeof(double));
	fflush(stdout);
    printf("%I64u\n", sizeof(long double));
	fflush(stdout);
//	getchar(); // đọc ký tự '\n'
	getchar();
}
