
/* Laboratorio4
Author: Curso Programación 2023 
date: 7-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
*/

//---------------------INSTRUCCIONES-----------------------
//Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
//Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
//Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
//Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10

#include <stdio.h>
#include <stdlib.h>

int printMenu(){
    /* printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    */
    int option;
    system("clear");
    fflush( stdin );
    printf("Bienvenido al men%c seleccione una opci%cn \n\n",163,162);
    printf("\t1)Opcion1\n"); printf("\t2)Opcion2\n"); printf("\t3)Opcion3\n"); printf("\t4)Opcion4\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int main(){
    char inutil;
    int flag = 0;
    while(flag!=4){
        flag = printMenu();
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


//---------------------INSTRUCCIONES-----------------------
//explique: 
//      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
//      2. ¿Para qué sirve la función fflush?
//      3. ¿Cuál es la sintaxis de un while?
//      4. ¿Cuál es la sintaxis de un switch?
//Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
//Guarde y suba su código a un repositorio.
