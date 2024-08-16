#include <stdio.h>

int main() {
    float fab, distri, impost, prc_final;
    
// custo de fabricação
        printf("Digite o custo de fábrica do carro: ");
            scanf("%f", &fab);
    
    
    
// conta valor adicional
    distri = fab * 0.28;
    impost = fab * 0.45;
    
    
    
// preço final
    prc_final = fab + distri + impost;
    
    
 //mostrar o resultado no cmd que o cara vai pagar
    printf("O preço final do carro é: R$ %.2f\n", prc_final);

    return 0;
}