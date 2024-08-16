#include <stdio.h>

int main() {
    float lado, area, dobro_da_area;



// digitar o lado do quadrado

printf("Digite o tamanho do lado do quadrado: ");
    
scanf("%f", &lado);




 // calculando a área

area = lado * lado;




 // calculando o dobro da área

 dobro_da_area = 2 * area;

 

// costrar o resultado da conta na tela

 printf("O dobro da area do quadrado e: %.2f\n", dobro_da_area);

return 0;
}
