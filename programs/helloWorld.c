
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("hello world\n");
    int x; //declaración d euna variable
    printf("Escribe un numero:\t");
    scanf("%d",&x);//lectura y asignación por apuntador
    
    if(x>0){//control de flujo IF ELSE
        printf("\nx es mayor a 0"); 
    }else{
        printf("\nx no es mayor que 0");
    }
    return 0;
}