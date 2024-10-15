#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char usuario[50], senha[50];
    char usuarioCorreto[] = "admin";
    char senhaCorreta[] = "12345";

    printf("Digite o nome de usuário: ");
	scanf("%s", usuario);

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, usuarioCorreto) == 0 && strcmp(senha, senhaCorreta) == 0) {
    		system("color 02");
        printf("\nAcesso concedido.\n");
    } else {
    		system("color 04");
        printf("\nAcesso negado.\n");
    }

    return 0;
}

