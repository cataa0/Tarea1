#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "list.h"


int main()
{
    FILE *archivo = fopen("Canciones.csv", "r");
    char cadena[70];
    int i;
    int k=0;
    while(fgets (linea, 1, fp) != NULL){
        for(i=0;i<6;i++){
            char *aux = get_csv_field(cadena, i);
            print(cadena);
        }
        printf("\n");
        k++; if(k==10) break;
    }
}
    
  	
  	