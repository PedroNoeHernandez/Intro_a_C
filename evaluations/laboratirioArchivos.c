// 1.- analice y ejecute el siguiente código:
#include <stdio.h>

int main() {
    FILE *archivo;
    char linea[100];

    archivo = fopen("archivo.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    while (fgets(linea, 100, archivo)) {
        printf("%s", linea);
    }

    fclose(archivo);

    return 0;
}

//Responda:
// 2.- ¿Por qué muestra el mensaje no se pudo abrir el archivo?

//3.- Cree un archivo en la misma ruta del archivo .c llamado "archivo.txt" y escriba su nombre en el

//Responda:
//4.- El código ahora imprime el contenido del archivo que significa la "r" en la función fopen en la línea 8
//5.- ¿Cómo generaría un mecanismo para crear un archivo o leerlo en caso de que ya exista?

//6.- Analice y ejecute el siguiente código

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     FILE *archivo;
//     char linea[100];

//     archivo = fopen("archivo.txt", "r");

//     if (archivo == NULL) {
//         system("touch archivo.txt");//linux
//         //system("echo.> archivo.txt");//windows
//         archivo = fopen("archivo.txt", "w");
//         for (size_t i = 0; i < 10; i++)
//         {
//             linea[i]=i+'0';
//         }
        
//         fputs(linea,archivo);
//     }
//     archivo = fopen("archivo.txt", "r");

//     while (fgets(linea, 100, archivo)) {
//         printf("%s", linea);
//     }

//     fclose(archivo);

//     return 0;
// }


//Responda:
//7.- ¿Cómo implementaría este código en su proyecto?
//8.- Cree una función que guarde un archivo csv apartir de una estructura
