
/* Procesando algoritmos
Author: Curso Programación 2023 
date: 7-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
*/

#include <stdio.h>
#include <stdlib.h>

int printMenu(char message[],char **options){
    /* printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    */
    int row = sizeof(options) / sizeof(options[0]);
    int column = sizeof(options[0])/row;
    int option;
    printf("%s\n",message);
    system("clear");
    fflush( stdin );
    for (size_t i = 1; i <= column; i++){
            printf("\t%d) %s\n",i,options[i]);
    }
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}
void suma(int x, int y){
    if((x%2==0 && y%2==0) || (x>10 && y >10) )
        printf("%d",x+y);
    else
        printf("Error");
}

int main(){
    char inutil, opciones = {"mensaje1","mensaje2","mensaje3","mensaje4"};
    int flag = 0;
    while(flag!=4){
        flag = printMenu("Mensaje de prueba",opciones);
        switch (flag){
            case 1:
                printf("\n1");
                break;
            
            case 2:
                printf("\n2");
                break;
            
            case 3:
                printf("\n3");
                break;
            
            case 0:
                printf("\nNo valido");
                break;
            default:
                printf("\nNo valido");
                break;
        }
        printf("\nOprima enter tecla cualquiera para continuar ");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("excelente");
}

