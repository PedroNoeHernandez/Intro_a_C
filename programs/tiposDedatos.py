#Tipos de datos simples
"""Documentación
        Author: <nombre del autor>
        date: <fecha>
        Description: Descripción de los tipos de datos en python
        Param: [nombre] [tipo]

"""
type = input("Ingresa el tipo de dato del que quieras saber la descripción:\t") #esto es una variable llamada type

#numéricos

if(type == 'int'):#int
    print('Int es un tipo de dato numérico que abarca el conjunto de números enteros\t')
    print('por ejemplo: 1,2,3,4,5')
if(type == 'float'):#float
    print('Float es un tipo de dato numérico que abarca el conjunto de números flotantes\t')
    print('por ejemplo: 1.2, 2.5, 3.9, 4.8, 5.0')
    #complex
if(type == 'complex'):
    print('Un número con parte real y uno con parte imaginaria')
    print('por ejempli 1j')


#no numéricos

    #strings
if(type=='string'):
    print('Es un conjunto de caracteres')
    print('por ejemplo: "ejemplo"')
    #bool

    #bytes
if(type=='bytes'):
    print('Cadenas de tecto codificadas como pata de bits inmutable')
    print("por ejemplo" + b'\xcf\x84o\xcf\x81\xce\xbdo\xcf\x82'.decode('utf-16'))

    #bytearray (same as byte but mutable) (que puede cambiar)
    #print(por ejemplo b'\xcf\x84o\xcf\x81\xce\xbdo\xcf\x82'.decode('utf-16'))

    #NoneType


#tipos de datos compuestos

#colecciones

    #list 
    #tuple 
    #range
    
    
    #set
    #frozenset
