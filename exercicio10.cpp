#include <cstdio>

int main() {
    float saldo;
    float quantia_retirada;
    saldo = 1000.0; // Exemplo: saldo inicial de 1000 reais

    printf("Digite a quantia que deseja retirar: ");
    scanf("%f", &quantia_retirada);

    if (saldo >= quantia_retirada) {
        printf("Você pode fazer a retirada.\n");
    } else {
        printf("Saldo insuficiente. Seu saldo atual é de %.2f reais.\n", saldo);
    }

    return 0;
}
