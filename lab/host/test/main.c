/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>

int i;

int main ()
{
	extern int i;
	if(i==0)
		printf("ssss");




	fflush(stdout);

//	if(sizeof(int)>-1)
//		{printf("yes");
//	    fflush(stdout);}
//	    else
//	    	{printf("no");
//	    		    fflush(stdout);
//	    		    printf("%d",(sizeof(int)>-1));
//	    		    fflush(stdout);
//	    	}

    /*RELAY_SET_ON(3, a);  // 1000 = 8
    printf("so a = %d",a);
    fflush(stdout);
    RELAY_SET_OFF(3, a);
    printf("\nso a = %d",a);
    fflush(stdout);
*/
    getchar();
}
