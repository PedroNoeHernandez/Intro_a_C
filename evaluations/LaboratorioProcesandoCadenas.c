// Laboratorio Procesado de cadenas

// ejecute y analice el siguiente código
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct Person {
    char name[50];
    int age;
    float height;
    };
    char personStr[] = "John Doe, 30, 6.2";

    struct Person john;

    sscanf(personStr, "%49[^,], %d, %f", john.name, &john.age, &john.height);

    printf("Name: %s \n",john.name);
    printf("age: %d \n",john.age);
    printf("height: %f \n",john.height);

}

//responda:
// ¿Para qué sirve la función sscanf?
// ¿qué significa el %49[^,]?
// Investigue el concepto "expreción regular" y ahora explique nuevamente qué significa %49[^,]

// ejecute el siguiente código

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// //parte1
// typedef struct  {
//     char name[50];
//     int age;
//     float height;
//     }Person;
// //fin parte1

// //parte2
// void makeStruct(Person *persona, char *csvString){
//     sscanf(csvString, "%49[^,], %d, %f", persona->name, &persona->age, &persona->height);
// }
// //fin parte2

// //main
// int main() {
    
    
//     char personStr[] = "John Doe, 30, 6.2";

//     Person john;

//     makeStruct(&john, personStr);

//     printf("Name: %s \n",john.name);
//     printf("age: %d \n",john.age);
//     printf("height: %f \n",john.height);

// }
//fin main

//cambie el orden del código delimitado por las partes de la siguiente manera: PARTE3, PARTE2, PARTE1, compile y responda las siguientes preguntas

// La compilación marca varios errores debido al orden de las declaraciones ¿Por qué sucede esto? (la consola tiene la respuesta)
// ¿Cuál sería el orden de declaracion de componentes de un código fuente? (ordene con los incisos a a d)
//     a)Importacion de biblioteca
//     b)Tipos de datos
//     c)Función principal
//     d)Funciones


//cree una función que lea un archivo csv y asignae a un arreglo de cadenas cada linea de archivo como elemento de archivo

// ejemplo:
//         // prototipo de la función y forma de llamarla
//           void generarArray(char *nombreArchivo, char **arregloDeCadenas);
            
//           char nombreArchivo[20]= "archivo.csv";       
//           char arregloDeCadenas[100][50]
//           generarArray(nombreArchivo, arregloDeCadenas)

//         //ejemplo de contenido del archivo:

//         // 1,Boycey,Kurt,bkurt0@sciencedaily.com,Male,160.126.195.115
//         // 2,Aimee,Glasbey,aglasbey1@php.net,Genderqueer,20.10.49.119
//         // 3,Yuma,Gopsill,ygopsill2@reference.com,Male,22.166.84.250
//         // 4,Hobart,Benedek,hbenedek3@senate.gov,Male,204.90.122.176

          //ejemplo valor final de arregloDeCadenas

        // ["1,Boycey,Kurt,bkurt0@sciencedaily.com,Male,160.126.195.115",
        // "2,Aimee,Glasbey,aglasbey1@php.net,Genderqueer,20.10.49.119",
        // "3,Yuma,Gopsill,ygopsill2@reference.com,Male,22.166.84.250",
        // "4,Hobart,Benedek,hbenedek3@senate.gov,Male,204.90.122.176"]

//¿como integraríaestas funciones a su proyecto?
