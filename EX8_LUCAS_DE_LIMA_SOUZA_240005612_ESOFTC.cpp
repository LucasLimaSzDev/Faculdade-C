#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float distancia, consumoMedio, precoGasolina, custoTotal;

    printf("Digite a distância da viagem (em km): ");
    	scanf("%f", &distancia);

    printf("Digite o consumo médio do veículo (km por litro): ");
    	scanf("%f", &consumoMedio);

    printf("Digite o preço da gasolina (R$ por litro): ");
    	scanf("%f", &precoGasolina);

    custoTotal = (distancia / consumoMedio) * precoGasolina;

    printf("O custo total da viagem será: R$ %.2f\n", custoTotal);

    return 0;
}
