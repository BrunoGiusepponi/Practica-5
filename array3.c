#include <stdlib.h>
#include <stdio.h>

void main(){

    int array[5] = {};
    int cincoRepe = 0;
    for(int i = 0; i <= 4; i++){
        printf("Ingrese un valor para el indice %i en el arreglo.", i);
        scanf("%i", &array[i]);
        if(array[i] == 5 && cincoRepe > 0){
            cincoRepe = cincoRepe + 1;
        }
    }
    printf("La cantidad de 5 repetidos es: %i\n", cincoRepe);
}
    
