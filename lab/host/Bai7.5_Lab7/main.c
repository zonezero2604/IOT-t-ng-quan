/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>


int main ()
{
	int input;
	printf("Nhap gia tri input");
	fflush(stdout);
	scanf("0x%x",&input);


	switch(input){

	case 0x01:
			printf("ten thiet bi: Board STM32F4 NUCLEO\n");
			fflush(stdout);
			printf("ma thiet bi: BSTM32F4 NUCLEO\n");
			fflush(stdout);
			printf("Kit mo rong bao gom\n");
			fflush(stdout);
			printf("- 5 nut nhan\n");
			fflush(stdout);
		    printf("- 6 led RGB\n");
		    fflush(stdout);
		    printf("- 1 coi buzzer\n");
		    fflush(stdout);
		    printf("- 1 cam bien nhiet do va do am\n");
		    fflush(stdout);
		    printf("- 1 cam bien anh sang\n");
		    fflush(stdout);
		    printf("- 1 man hinh hien thi LCD\n");
			fflush(stdout);
			break;

	case 0x02:
			printf("Led 1 da duoc bat \n");
			fflush(stdout);
			break;
	case 0x03:
			printf("Led 1 da duoc tat \n");
			fflush(stdout);
			break;
	case 0x04:
			printf("coi da duoc bat \n");
			fflush(stdout);
			break;
	case 0x05:
			printf("coi da duoc tat \n");
			fflush(stdout);
			break;
	case 0x06:
				printf("do am cua cam bien la 89 %% \n");
				fflush(stdout);
				break;
		case 0x07:
				printf("nhiet do cua cam bien la 25 do C \n");
				fflush(stdout);
				break;

		case 0x08:
				printf("do sang cua cam bien la 26lux \n");
				fflush(stdout);
				break;
		case 0x09:
					printf("chuong trinh quan ly thong tin thiet bi\n");
					fflush(stdout);
					break;

	default:
		printf("ban tin khong ho tro \n");
							fflush(stdout);
		break;


	}
	 while(getchar() != '\n')
	 {
	//just read the input buffer and do nothing
	 }
   getchar();
}
