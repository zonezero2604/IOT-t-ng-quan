/*
 * main.c
 *
 *  Created on: Feb 11, 2022
 *      Author: chau
 */


#include<stdio.h>
int main()
{
 	int i, j, rows;
 	printf("Enter Diamond Rows =  ");
 	scanf("%d", &rows);

    printf("Diamond Star Pattern\n");
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}

    for(i = rows - 1; i > 0; i--)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}
    getchar();
    getchar();
 	return 0;
}
