/**
 * @file printYscnaf.c
 * @author Mathías Fabricio Medina Aponte
 * @brief 
 * @version 0.1
 * @date 2024-05-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include  <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    system("@cls||clear");
    /*
    Para poder ejecutar la funcion "system" requerimos importar la librería "stdlib.h".
    Esta función nos permite limpiar la terminal yu que nuestro ejecutable se vea más limpio y agradable para el usuario
    */

     int edad;
     float resultado;
     char nombre[100];
    do{
        /*
        las funciones printf nos permiten interactuar con el usiario
        */
        printf("Ingresa tu primer nombre: \n");
        scanf("%s", &nombre);
        getchar();
        //Tambien podemos utilizar la función "fgets", ya que esta nos permite ingresar espacios y leer un cadena de caracteres de forma mas precisa"
       
       
        /*la función "getchar();", nos sirve para que nosotros demos la instruccion de continuar a la siguiente línea de código,
          mediante el caracter o tecla "ENTER" de lo contrtario se saltará la siguiente instruccion en código evitando que podamos 
          ingresar todo lo que el programa nos pide
        */

        printf("Ingrese su edad: \n");
        scanf("%d", &edad);
        getchar();
       
        //la funcion "fgets" solo nos sirve para cadenas de caracteres

        printf("Bienvenido\t%s",nombre);

        if (edad < 18)
        {
            printf("\nTu edad es de %d anios\nNuestro programa esta destinado a mayores de 18 anios, lo lamentamos :(", edad);

        }else
        {
            printf("\nTu edad es de %d esperamos y te guste nuestro programa :)", edad);
        
        }

        printf("\nIngresa un numero para continuar pero '0' para finalizar la ejecución del programa: "), scanf("%f", resultado);
        getchar();
    } while (resultado != 0); 
    
    return 0;
}
