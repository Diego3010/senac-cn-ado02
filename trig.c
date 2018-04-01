#include "lib.h"

#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]){

        if (argc != 2){

            return 1;
        }else {

            double x, resultado;
            x = atoi (argv[1]);
            resultado = (seno(x)-1);
            printf ("Resultado = %lf\n", resultado);


    return 0;
        }
}