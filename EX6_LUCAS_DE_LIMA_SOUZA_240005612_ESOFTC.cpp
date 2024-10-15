#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int numItens;
    float preco, qtd, subtotal = 0, desconto, total = 0;

    printf("Digite o número de itens que deseja comprar: ");
    scanf("%d", &numItens);

    for (int i = 1; i <= numItens; i++) {
        printf("\nProduto %d:\n", i);

        printf("Digite o preço do produto: R$ ");
        scanf("%f", &preco);

        printf("Digite a quantidade: ");
        scanf("%f", &qtd);

        subtotal = preco * qtd;

        if (qtd >= 10 && qtd < 20) {
            desconto = subtotal * 0.10; 
        } else if (qtd >= 20) {
            desconto = subtotal * 0.20;
        } else {
            desconto = 0;
        }

        total += subtotal - desconto;

        printf("Subtotal: R$ %.2f, Desconto aplicado: R$ %.2f\n", subtotal, desconto);
    }

    printf("\nValor total da compra: R$ %.2f\n", total);

    return 0;
}

