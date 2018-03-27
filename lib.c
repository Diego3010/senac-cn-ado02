#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

#define PI = 3.14

double fatorial (int termos){

    double aux;
    aux = termos;
    while (termos > 1){

        aux = aux * (termos - 1);
        termos--;
    }

    return (aux);
}


double power(double base, int exp){

    double resultado = 1;
    int i;

    if (exp == 0) return 1;
    for (i=0; i < exp; i++) resultado = resultado * base;
    return (resultado);
}



double seno (double rad, int termos){

    int i;
    double resultado = 1;

        for (i=0; i<termos; i++){
            resultado += power(-1, i) * power(rad, 2*i + 1) / fatorial (2*i + 1);
        }

        
return (resultado);

}