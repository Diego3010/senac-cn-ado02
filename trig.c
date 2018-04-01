#include "lib.h"

#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]){


  double x, y, resultado;

    x = atoi (argv[1]);
    y = atoi (argv[2]);

resultado = exponencial (x, y);

printf ("Resultado = %.lf\n", resultado);




    return 0;
}