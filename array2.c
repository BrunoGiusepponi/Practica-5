#include <stdlib.h>
#include <stdio.h>

void main(){

    int array[5] = {1,2,3,4,5};
    int suma = 0;
    int promedio = 0;
    for(int i = 0; i <= 4; i++){
        suma = suma + array[i];
    }
    promedio = suma / 5;
    printf("La suma de los elementos es igual a: %i\n", suma);
    printf("El promedio de los elementos es igual a: %i\n", promedio);
}