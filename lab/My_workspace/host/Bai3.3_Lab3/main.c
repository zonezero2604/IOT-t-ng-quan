/*
 * main.c
 *
 *  Created on: Mar 20, 2022
 *      Author: chau
 */


#include <stdio.h>
#define RELAY_SET_ON(relay_id, relay_state)    (relay_state |= (1 << relay_id))
										//   Đặt bit thứ relay_id của relay_state lên 1
#define RELAY_SET_OFF(relay_id, relay_state)  (relay_state &= ~(1 << relay_id))

int main ()
{
    int a=0;
    RELAY_SET_ON(3, a);  // 1000 = 8
    printf("so a = %d",a);
    fflush(stdout);
    RELAY_SET_OFF(3, a);
    printf("\nso a = %d",a);
    fflush(stdout);

    getchar();
}
