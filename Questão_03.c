#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    
//solicitar os numeros
                printf("Digite dois numeros, ai chefe: ");
                    scanf("%f %f", &num1, &num2);
                    
                                
// Resultado das contas
            printf("Resultado da primeira conta: %.2f\n", num1 * 2 * num2);
        printf("Resultado da segunda conta: %.2f\n", 3 * num1 + num2 / 2);
    printf("Resultado da terceira conta: %.2f\n", sqrt(num1 + num2));

    return 0;
}
