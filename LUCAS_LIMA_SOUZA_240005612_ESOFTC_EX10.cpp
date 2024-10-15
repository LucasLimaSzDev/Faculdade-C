#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i;
    float nota1, nota2, soma1 = 0, soma2 = 0, media1, media2;

    printf("Digite o número de alunos: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        printf("\nDigite a nota do aluno %d na disciplina 1: ", i);
        scanf("%f", &nota1);
        
        printf("Digite a nota do aluno %d na disciplina 2: ", i);
        scanf("%f", &nota2);


        soma1 += nota1;
        soma2 += nota2;
    }

    media1 = soma1 / num;
    media2 = soma2 / num;

    printf("\nMédia da disciplina 1: %.2f\n", media1);
    printf("Média da disciplina 2: %.2f\n", media2);

    return 0;
}


