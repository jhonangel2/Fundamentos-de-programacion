#include <stdio.h>

int main() {

char nombre [50];
int edad; 

printf("porfavor Ingrese su nombre;");
scanf("%s" , nombre);

printf("porfavor escriba su edad:");
scanf("%d" , &edad);

if (edad >= 18){
    printf("eres mayor de edad puedes continuar");
    }
    else{
         printf("eres menor de edad no puedes continuar");
    }
}    
 