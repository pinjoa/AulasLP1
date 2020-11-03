/**
 * @file hoje.c
 * @author Joao Carlos Pinto (@pinjoa)
 * @brief 
 * @version 0.1
 * @date 2020-10-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

/* declaracao de funcoes (prototipos ou assinaturas) */
int calculaSoma(int x, int y);
double calculaMedia(int x, int y);

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[]){

    int a, b, soma;

    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    soma = calculaSoma(a,b);
    printf("a soma de %d com %d = %d", a, b, soma2);

    return 0;
}

/**
 * @brief calcular a soma de dois valores
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int calculaSoma(int x, int y){
    return (x+y);
}

/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @return double 
 */
double calculaMedia(int x, int y){
    return ((x+y)/2.0);
}

/**
 * @brief Procedimento
 * 
 */
void incrementaValor(){

}
