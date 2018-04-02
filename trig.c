#include "lib.h"

#define _POSIX_C_SOURCE 2

#include <stdio.h>
#include <stdlib.h>



int main (void){


           FILE *fp = popen("gnuplot","w");

            fprintf (fp, "set terminal png\n");
            fprintf (fp, "set output \"figura.png\"\n");

            fprintf(fp, "plot '-' with lines\n");

                for (int i = 0; i < 30; i++){

                    fprintf (fp, "%lf \n", seno(90)-1);
                }
            
            fprintf (fp, "e\n");
            pclose(fp);

    return 0;
        
}