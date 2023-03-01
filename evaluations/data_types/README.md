# Laboratorio 2 (tipos de datos)

1) Abre un nuevo archivo .c y escribe el siguiente código:
```C
#include <stdio.h>
int main()
{
    int entero=5;
    printf("%d", entero *30);
    return 0;
}
```
2) Responda: ¿por qué la salida del código es 150?

3) Modifique la línea 4: ```printf("%d", entero *30);``` a ```printf("%d", entero / 2);```
4) Responda: ¿Por qué el resultado no tiene decimales?


5) Modifique la línea 4: ```printf("%d", entero /2);``` a ```printf("%f", (float)entero / 2);```
6) Responda: ¿Por qué ahora si imprime decimales?


7) Actualice su código al siguiente:
```C
#include <stdio.h>
int main()
{
    int entero=5;
    float flotante;
    char carácter;
    flotante = 8.8;
    entero = flotante;

    printf("%f", entero);
    return 0;
}
```
8) Responda: El código marca un Warning  de formato e imprime 0.00000 ¿a qué se debe?


9) Actualice el código al siguiente:
```C
#include <stdio.h>
int main()
{
    int entero=5;
    float flotante;
    char caracter;
 
    flotante = 8.8;
    entero = flotante;
    caracter = entero;
    printf("%c", caracter);
    return 0;
}
```
10) Responda: ¿Por qué no se imprime nada?

11) Modifique la asignación ```caracter = entero;``` a ```caracter = entero + ‘0’```

12) Ahora imprime 8 ¿qué está haciendo el 0 y por qué va entre ''?


13) Modifique la asignación ```caracter = entero;``` a ```carácter = NULL;```

14) Explique el warning que devuelve el programa

15) Responda: ¿NULL es de tipo void?

16) ¿NULL es una constante?

17) ¿Qué es una constante?

18) Analice la siguiente función y responda las preguntas 19, 20 y 21
```C
#include <stdio.h>
#include <stdlib.h>

void formatearFecha(char *cadena){
    char horas[2];
    char minutos[2];
    char tmp;
    int h,m,j=0,separador = -1;
    for(int i =0; i< sizeof(cadena) ;i++){
        if(cadena[i]==58){
            separador=i;
            continue;
        }
        if(separador==-1){
            horas[i]=cadena[i];
        }
    }
    separador=-1;
    fflush(stdout);
    h= atoi(horas);
    for(int i =0; i< sizeof(cadena) ;i++){
        if(cadena[i]==58){
            separador=i;
            continue;
        }
        if(separador!=-1){
            minutos[j]=cadena[i];
            j++;
        }
    }
    m= atoi(minutos);
    
    if(h>=13){
        printf("%d:%d PM",h-12,m);
    }
    if(h==12){
        printf("%d:%d PM",12,m);
    }
    if(h==0){
        printf("%d:%d PM",12,m);
    }
    if(h<12){
        printf("%d:%d AM",h,m);
    }
    
}
int main (){
    formatearFecha("15:19");
    return 0;
}
``` 
19) ¿Qué hace la función a rasgoz generales?

20) ¿Qué pasa si modificamos el código utilizando solo un for para llenar los arreglos horas y minutos?

21) ¿Para qué se usa la variable tmp en el programa?
