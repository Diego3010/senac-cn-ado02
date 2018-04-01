#define PI 3.14159

#include <stdio.h>
#include <stdlib.h>

#include "lib.h"


//Funcao que calcula o fatorial
double fatorial (int termos){

    int fat = 1;

    for (fat = 1; termos > 1; termos = (termos - 1)){
            fat *= termos; 
    }
        return (fat);
}

//Funcao que calcula as exponenciais
double exponencial (double base, int expoente){

    int resultado = 1;
    int i;

    if (expoente == 0) return (1);
    for (i=0; i < expoente; i++) resultado *= base;
    return (resultado);
}

//Funcao que aproxima o valor do seno por serie de Taylor
double seno(double rad){


        int soma = 1;
        double expo, aux_expo, fat, sen = 1, aux_sen; 

            while (rad  > (2 * PI)){
                rad -= 2 * PI;
            }

                for (expo = 1; expo <= 20; expo = expo + 2){

                    aux_expo = exponencial (rad, expo);
                    fat = fatorial (expo);
                    if ((soma % 2) == 1){

                        sen += (aux_expo / fat);
                    }else {

                        sen -= (aux_expo / fat);
                    }

                        soma++;
                }


	return (sen);
}