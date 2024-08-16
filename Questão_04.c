#include <stdio.h>

int main() {
    float peso, excesso, multa;


// Solicitar os kilos de peixes para a pessoa
    printf("Informe quantos quilogramas(kg) foram pescados: ");
    
        scanf("%f", &peso);
    
    
    

// Verificando se excedeu o limite (alfandega da taxaçao)
    if (peso > 50) {
        excesso = peso - 50;
        multa = excesso * 4;

        printf("Voce excedeu em %.2f kg o limite permitido.\n", excesso);
        
            printf("O valor da multa é de R$ %.2f\n", multa);
        
                printf("Você pode realizar o pagamento no pix 033997092401\n");
        
        
    } else {
        
        
        printf("Voce este dentro do limite permitido, boa pesca guerreiro.\n");
    }

    return 0;
}

