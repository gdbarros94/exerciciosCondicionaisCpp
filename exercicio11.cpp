#include <cstdio>

int main() {
    int num_leads;

    printf("Digite o número de leads recebidos hoje: ");
    scanf("%d", &num_leads);

    if (num_leads <= 5) {
        printf("Quantidade de leads: Baixa\n");
    } else if (num_leads >= 6 && num_leads <= 10) {
        printf("Quantidade de leads: Esperada\n");
    } else {
        printf("Quantidade de leads: Alta\n");
    }

    return 0;
}
