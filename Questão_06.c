#include <stdio.h>

int main() {
    float tmp, velox, dist, litros;

// tempo e velocidade
    printf("Informe o tempo da viagem em horas: ");
    
         scanf("%f", &tmp);

    printf("Digite a velocidade média em km/h que voce fez na viagem: ");
    
         scanf("%f", &velox);



// distância
    dist = tmp * velox;
    

//consumo de combustível (o carro faz 12km por litro)
    
    litros = dist / 12;
    

// Resultado do consumo no cmd

    printf("Você consumiu %.2f litros de gasosa.\n", litros);

    return 0;
}