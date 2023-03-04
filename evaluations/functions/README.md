# Laboratorio 3

1) ejecute el siguiente código, analice y responda las preguntas 2, 3, 4, 5 y 6
```C
#include <stdio.h>
#include <stdlib.h>

int SumatoriaPares(int limiteSuperior, int n, int res){
    if (n<limiteSuperior)
       return res+= SumatoriaPares(limiteSuperior,n+1,res);
    else
       return res+= n*(n+1);
    
}
int main(){
    printf("%d",SumatoriaPares(5,1,0));
}
```

2) ¿Cuántos parámetros recibe la función "SumatoriaPares"?
3) ¿Cuál es el objetivo de la variable "res"?
4) ¿Cuántas veces se manda a llamar la función en la ejecución del programa?
5) ¿Por qué el "if else" funciona si no tienen ```{}````?
6) Explique cómo es que funciona el código para devolver la sumatoria
