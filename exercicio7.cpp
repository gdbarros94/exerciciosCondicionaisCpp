#include <cstdio>

int main() {
    char escolha;
    float temperatura, resultado;

    // Perguntar ao usuário qual conversão deseja realizar
    printf("Escolha a conversão:\n");
    printf("C para Celsius para Fahrenheit\n");
    printf("F para Fahrenheit para Celsius\n");
    printf("Escolha: ");
    scanf(" %c", &escolha);

    // Solicitar a temperatura ao usuário
    printf("Insira a temperatura: ");
    scanf("%f", &temperatura);

    // Realizar a conversão de acordo com a escolha do usuário
    if (escolha == 'C' || escolha == 'c') {
        resultado = (temperatura * 1.8) + 32;
        printf("%.2f Celsius é equivalente a %.2f Fahrenheit.\n", temperatura, resultado);
    } else if (escolha == 'F' || escolha == 'f') {
        resultado = (temperatura - 32) / 1.8;
        printf("%.2f Fahrenheit é equivalente a %.2f Celsius.\n", temperatura, resultado);
    } else {
        printf("Escolha inválida.\n");
        return 1; // Encerrar o programa com código de erro
    }

    return 0;
}
