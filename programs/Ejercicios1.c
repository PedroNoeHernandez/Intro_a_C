#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
// Crea un programa que pida al usuario dos números enteros y muestre por pantalla su suma, resta, multiplicación y división.

void operaciones (int operando1, int operando2){

    printf("\nSuma: %d", operando1 + operando2);
    printf("\nResta: %d",operando1 - operando2);
    printf("\nMultiplicacion: %d",operando1 * operando2);
    printf("\nDivisión: %.2f",((float)operando1 / (float)operando2));

}

// Crea un programa que pida al usuario dos números enteros y calcule el resultado de elevar el primero al segundo.

double potencia (int operando1, int operando2){
    //printf("\nPotencia: %f", pow(operando1,operando2));
    double resultado = operando1;
    for (int i = 1; i < operando2; i++){
        resultado = resultado * operando1;
    }
    return resultado;
}

// Crea un programa que pida al usuario la longitud y el ancho de un rectángulo y calcule su área y perímetro.

void rectangulo (int ancho, int largo){
    printf("\nArea: %.2f", ancho * largo);
    printf("\nPerimetro: %.2f", ancho * 2 + largo * 2 );
}

// Crea un programa que pida al usuario una temperatura en grados Celsius y la convierta a grados Fahrenheit. La fórmula para la conversión es F = (C * 1.8) + 32.

float fahrenheit (float celsius){
    return (celsius * 1.8) + 32;
}

// Crea un programa que pida al usuario el radio de un círculo y calcule su área y circunferencia. La fórmula para el área es A = pi * r^2 y para la circunferencia es C = 2 * pi * r.

void circulo (float radio){
    double PI = 3.14159265358979323846;
    printf("\nArea: %f", PI * radio*radio);
    printf("\nPerimetro: %f", 2 * PI * radio);
}

// Crea un programa que pida al usuario su edad y calcule la edad que tendrá en 10, 20, 30 y 40 años.

void pruebaDeCarbono(int edad){

    printf("\nEdad en 10: %d",edad+10);
    printf("\nEdad en 20: %d",edad+20);
    printf("\nEdad en 30: %d",edad+30);
    printf("\nEdad en 40: %d",edad+40);

}

// Crea un programa que pida al usuario una hora en formato 24 horas (por ejemplo, 13:45) y la convierta a formato de 12 horas (por ejemplo, 1:45 PM).

// Crea un programa que pida al usuario un número real y lo redondee al entero más cercano.

// Crea un programa que pida al usuario dos números enteros y determine si el segundo es divisible por el primero.

// Crea un programa que pida al usuario su peso en kilogramos y su estatura en metros y calcule su índice de masa corporal (IMC). La fórmula para el IMC es IMC = peso / (estatura^2).