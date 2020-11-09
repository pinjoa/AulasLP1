/**
 * @file main.c
 * @author Joao Pinto (joao@bitminho.com)
 * @brief Escreva um programa C para imprimir seu nome, data de nascimento e número de telefone móvel
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020, Joao Carlos Pinto
 * 
 */
#include <stdio.h>
//#include <locale.h>

int main(){
    
    char vNome[] = "Passos Dias Aguiar Mota";
    char vData[] = "14 julho 14 1935";
    int vTelm = 969999999;
    //setlocale(LC_ALL, "Portuguese");
    printf("Nome  :  %s\n", vNome);
    printf("Nasc  :  %s\n", vData);
    printf("Telm  :  %d\n", vTelm);

    return 0;
}