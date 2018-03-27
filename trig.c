#include "lib.h"

#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]){


  double x, resultado;
  int y;

    x = atoi (argv[1]);
    y = atoi (argv[2]);

resultado = seno(x, y);

printf ("Resultado = %lf\n", resultado);




    return 0;
}