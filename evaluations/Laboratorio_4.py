
''' Laboratorio4
Author: Curso Programación 2023 
date: 7-03-2023
Description: Laboratorio para repasar condiciones, funciones e investigar "while" en C
'''

#---------------------INSTRUCCIONES-----------------------
#Cree una funcion "suma" que imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
#Cree una funcion "resta" que imprima la resta de dos valores solo si son múltiplos de 5, de lo conrario imprimirá que no son impares
#Cree una funcion "division" que imprima la división de dos valores solo si el resultado no tiene reciduo, de lo conrario imprimirá que no es una división exacta
#Cree una funcion "multiplicacion" que imprima la multiplicación de dos valores solo si son mayores a 10, de lo conrario imprimirá que no son mayores a 10
import os
def printMenu():
    ''' printMenu
    Author: <nombre del autor>
    Date: <fecha>
    Description: Descripción de los tipos de datos en python
    [Param: [nombre] [tipo] ]
    '''
    os.system('cls')
    print("Bienvenido al menú seleccione una opciónn \n\n")
    print("\t1)Opcion1\n")
    print("\t2)Opcion2\n")
    print("\t3)Opcion3\n")
    print("\t4)Opcion4\n")
    option = input()
    if(option):
        return int (option)
    else:
        return 0


def main():
    flag = 0
    inutil =''
    while(flag!=4):
        flag = printMenu()
        
        if (flag==1):
            print("\n1")
        elif (flag==2):
            print("\n2")
        elif (flag==3):
            print("\n3")
        elif (flag==0):
            print("\nNo valido")
        else:
            print("\nNo valido")

        print("\nOprima enter tecla cualquiera para continuar ")
        input(inutil)
    print("excelente")

if __name__ == "__main__":
    main()
#---------------------INSTRUCCIONES-----------------------
#explique: 
#      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
#      2. ¿Cuál es la sintaxis de un while?
#      3. ¿Exite swhitch en python?
#      4. ¿Qué es un elif?
#      5. ¿Qué función de se ejecuta al correr el script?
#Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
#Guarde y suba su código a un repositorio.
