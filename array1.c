#include <stdlib.h>
#include <stdio.h>

void main(){
int array[5] = {1,2,3,4,5};
int i;

for(int i = 4; i >= 0; i--){
    printf("Indice: %i, Valor: %i\n", i, array[i]);
}
system("pause");
}