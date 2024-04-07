#include <cstdio>

int main() {
    float numero1, numero2;
    char operacao;

    // Solicitar ao usuário para inserir dois números e a operação
    printf("Insira o primeiro número: ");
    scanf("%f", &numero1);
    printf("Insira o segundo número: ");
    scanf("%f", &numero2);
    printf("Insira a operação (+, -, *, /): ");
    scanf(" %c", &operacao); // Note o espaço antes de %c para consumir possíveis caracteres de espaço em branco

    // Executar a operação e imprimir o resultado
    float resultado;
    if (operacao == '+') {
        resultado = numero1 + numero2;
    } else if (operacao == '-') {
        resultado = numero1 - numero2;
    } else if (operacao == '*') {
        resultado = numero1 * numero2;
    } else if (operacao == '/') {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            printf("Erro: Divisão por zero.\n");
            return 1; // Encerrar o programa com código de erro
        }
    } else {
        printf("Erro: Operação inválida.\n");
        return 1; // Encerrar o programa com código de erro
    }

    printf("O resultado da operação é: %.2f\n", resultado);

    return 0;
}
