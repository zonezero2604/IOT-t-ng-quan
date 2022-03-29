/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const  int local = 10;
    volatile int *ptr = (int*)&local;
    printf("Initial value of local: %d \n", local);
    *ptr = 100;
    // tuy là constant nhưng biến này lưu ở local nên có thể
    //thay đổi giá trị bằng địa chỉ
    printf("Modified value of local: %d \n", local);


    // Initial value of local: 10
    // Modified value of local: 100


}
