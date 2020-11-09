/**
 * @file main.c
 * @author Joao Pinto (joao@bitminho.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020, Joao Carlos Pinto
 * 
 */
#include <stdio.h>

int main(){
    
    const float vPi = 3.141592654F;
    float vRaio, vArea;

    puts("Algoritmo para calcular a area de um circulo.");
    printf("Introduzir o valor do raio (cm): ");
    scanf("%f", &vRaio);

    vArea = (float)(vPi * (float)(vRaio * vRaio));
    printf("a area do circulo = %.2f cm2", vArea);
    
    return 0;
}
