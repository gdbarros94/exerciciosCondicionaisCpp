#include <cstdio>

int main() {
    float nota1, nota2, nota3, media, presenca;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    printf("Digite a porcentagem de presença do aluno: ");
    scanf("%f", &presenca);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7 && presenca == 100) {
        printf("Aprovado. Parabéns!\n");
    } else if (media >= 7 || (media >= 5 && media < 7 && presenca >= 75)) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
