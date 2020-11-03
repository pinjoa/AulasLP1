/**
 * @file operadores.c
 * @author João Pinto (joao@bitminho.com)
 * @brief 
 * @version 0.1
 * @date 2020-10-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[]){

    int x;
    int y;

    x=7;
    y=x*2;
    printf("0: x=%d y=%d\n", x, y);

    x=y++; // x=14; y=15
    printf("1: x=%d y=%d\n", x, y);

    x=++y; // x=16; y=16
    printf("2: x=%d y=%d\n", x, y);

    x+=1;  // x=17;
    printf("3: x=%d y=%d\n", x, y);

    x-=y;  // x=x-y -> x=1
    printf("4: x=%d y=%d\n", x, y);

    printf("5: %d\n", x>y);  // 

    printf("6: x=%d x=%d\n(verificar se o compilador produziu os valores corretos nesta linha!\nO resultado certo deveria ser: x=1 x=0)\n\n", x++, --x);
    printf("7: x=%d y=%d\n", x, y);

}