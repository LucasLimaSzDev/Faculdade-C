#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float distancia, consumoMedio, precoGasolina, custoTotal;

    printf("Digite a dist�ncia da viagem (em km): ");
    	scanf("%f", &distancia);

    printf("Digite o consumo m�dio do ve�culo (km por litro): ");
    	scanf("%f", &consumoMedio);

    printf("Digite o pre�o da gasolina (R$ por litro): ");
    	scanf("%f", &precoGasolina);

    custoTotal = (distancia / consumoMedio) * precoGasolina;

    printf("O custo total da viagem ser�: R$ %.2f\n", custoTotal);

    return 0;
}
