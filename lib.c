#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

#define PI = 3.14159


//Funcao que calcula o fatorial
double fatorial (int termos){

    int fat = 1;

    for (fat = 1; termos > 1; termos = (termos - 1)){
            fat *= termos; 
    }
        return (fat);
}

//Funcao que calcula as exponenciais
double exponencial (int base, int expoente){

    int resultado = 1;
    int i;

    if (expoente == 0) return (1);
    for (i=0; i < expoente; i++) resultado *= base;
    return (resultado);
}



double seno (double rad, int termos){

    int i;
    double resultado = 1;

        for (i=0; i<termos; i++){
            resultado += exponencial(-1, i) * exponencial(rad, 2*i + 1) / fatorial (2*i + 1);
        }

        
return (resultado);

}