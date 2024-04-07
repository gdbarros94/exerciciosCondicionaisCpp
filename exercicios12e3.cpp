#include <cstdio>

int main() {
    int numero;

    // Exercício 1: Verificação de Número Par
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }

    // Exercício 2: Verificação de Número Positivo
    if (numero > 0) {
        printf("Positivo\n");
    } else {
        printf("Negativo\n");
    }

    // Exercício 3: Verificação de Número Múltiplo de 3 e 5
    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("É múltiplo de 3 e 5\n");
    } else {
        printf("Não é múltiplo de 3 e 5\n");
    }

    return 0;
}
