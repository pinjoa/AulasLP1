/**
 * @file exercicio.c
 * @author Joao Pinto (joao@bitminho.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020, Joao Carlos Pinto
 * 
 */
#include <stdio.h>

int main(int argc, char *argv[]){

    int a, b;
    
    a=9;
    b=5;
    printf("(%d+%d)= %d\n", a, b, a+b);
    printf("(%d-%d)= %d\n", a, b, a-b);
    printf("(%d*%d)= %d\n", a, b, a*b);
    printf("(%d/%d)= %f\n", a, b, (float)a/b);

    return 0;
}
