#include <cstdio>

int main() {
    int ano;

    // Solicitar ao usuário para inserir o ano
    printf("Insira um ano: ");
    scanf("%d", &ano);

    // Verificar se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Ano bissexto\n");
    } else {
        printf("Não é ano bissexto\n");
    }

    return 0;
}
