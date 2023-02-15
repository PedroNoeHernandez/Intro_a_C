#include <stdio.h>
#include <stdlib.h>

int main (){


    char cadenas [3][20];  
    
    for(int i = 0; i < 3; i++){
        printf("\nIngresa una poderosa cadena (max 20): ");
        scanf("%s",&cadenas[i]);
    }
    
    printf("\nlos elementos de tu arreglo son: ");
    
    for(int i = 0; i < 3; i++){

        printf("\n %s ",cadenas[i]);
    }


return 0;
}