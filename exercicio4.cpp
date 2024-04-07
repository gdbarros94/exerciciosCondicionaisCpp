#include <cstdio>

int main() {
    int lado1, lado2, lado3;

    // Solicitar ao usuário para inserir os lados do triângulo
    printf("Insira os três lados do triângulo:\n");
    printf("Lado 1: ");
    scanf("%d", &lado1);
    printf("Lado 2: ");
    scanf("%d", &lado2);
    printf("Lado 3: ");
    scanf("%d", &lado3);

    // Verificar o tipo de triângulo
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é Equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é Isósceles.\n");
    } else {
        printf("O triângulo é Escaleno.\n");
    }

    return 0;
}
