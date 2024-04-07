#include <cstdio>

int main() {
    float altura, peso, imc;

    // Solicitar ao usuário para inserir sua altura e peso
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);
    printf("Insira seu peso em quilogramas: ");
    scanf("%f", &peso);

    // Calcular o IMC
    imc = peso / (altura * altura);

    // Imprimir o IMC
    printf("Seu IMC é: %.2f\n", imc);

    // Determinar a categoria do IMC
    if (imc < 18.5) {
        printf("Categoria: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Categoria: Peso normal\n");
    } else if (imc < 30) {
        printf("Categoria: Sobrepeso\n");
    } else {
        printf("Categoria: Obeso\n");
    }

    return 0;
}
