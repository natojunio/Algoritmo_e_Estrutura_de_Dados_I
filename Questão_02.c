#include <stdio.h>

int main() {
    
    float celsius, fahrenheit;



//temperatura em Celsius

    printf("Digite a temperatura em graus Celsius: ");


        scanf("%f", &celsius);


//conta da conversao para Fahrenheit

    fahrenheit = (celsius * 9/5) + 32;



// Mostrando a conversão na tela do cmd

        printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
