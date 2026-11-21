 #include <stdio.h> 
 int main() {
    int guess, low = 1, high = 100;
    char response;
    printf("Piensa en un numero entre el 1 y el 100 y lo adivino ez pa.\n");
    printf("reponde con 'M' si es mayor, o con 'm' si es menor, con 'c' si es incorrecto y con 'C' si es correcto pa.\n");

    do {  
        guess = (low + high) / 2;
        printf("tu numnero es %d? ", guess);
        scanf (" %c" , &response);

        if (response == 'M') {
            low = guess + 1;
        }
        else if (response == 'm') {
            high = guess - 1;
        } 
        else if (response == 'c') {
            printf ("ya casi lo tengo es para darte chance!.\n");
        }
    
    } while (response != 'C');
            printf("Listo facilito zzzzzzz\n");
    
    return 0;
}
