# Exercício condicionais em C++

## Verificação de Número Par:
 Escreva um programa em C++ que solicite ao usuário para digitar um número inteiro. Em seguida, o programa deve verificar se o número é par e imprimir "Par" se for verdadeiro, e "Ímpar" se for falso. Dica: Um número é par se o resto da divisão por 2 for igual a zero.
## Verificação de Número Positivo:
 Escreva um programa que peça ao usuário para inserir um número inteiro. Se o número for positivo, imprima "Positivo"; caso contrário, imprima "Negativo". Dica: Um número é positivo se for maior que zero.
## Verificação de Número Múltiplo de 3 e 5:
 Crie um programa que solicite ao usuário para inserir um número inteiro. Se o número for múltiplo de 3 e 5 ao mesmo tempo, imprima "É múltiplo de 3 e 5"; caso contrário, imprima "Não é múltiplo de 3 e 5". Dica: Um número é múltiplo de 3 e 5 se for divisível por ambos.
## Classificação de Triângulos: 
Escreva um programa que solicite ao usuário para inserir três números inteiros representando os lados de um triângulo. O programa deve classificar o triângulo como "Equilátero" se todos os lados forem iguais, "Isósceles" se dois lados forem iguais, ou "Escaleno" se todos os lados forem diferentes. Dica: Um triângulo é equilátero se todos os lados forem iguais.
## Calculadora Simples:
Crie um programa que solicite ao usuário para inserir dois números e uma operação matemática (+, -, *, /). O programa deve executar a operação e imprimir o resultado. Dica: Você pode usar uma instrução switch para realizar a operação selecionada.
## Verificação de Ano Bissexto:
Escreva um programa que solicite ao usuário para inserir um ano e verifique se é um ano bissexto ou não. Imprima "Ano bissexto" se for verdadeiro e "Não é ano bissexto" caso contrário. Dica: Um ano é bissexto se for divisível por 4 e não for divisível por 100, exceto se também for divisível por 400.
## Conversão de Temperatura: 
Crie um programa que pergunte ao usuário se deseja converter Celsius para Fahrenheit ou Fahrenheit para Celsius. Em seguida, solicite a temperatura e faça a conversão, imprimindo o resultado. Dica: Use fórmulas de conversão apropriadas: C = (F - 32) / 1.8 e F = (C * 1.8) + 32.
## Calculadora de IMC (Índice de Massa Corporal): 
Escreva um programa em C++ que solicite ao usuário inserir sua altura em metros e seu peso em quilogramas. O programa calculará o IMC (Índice de Massa Corporal) com base nessas informações e imprimirá o resultado, juntamente com a categoria correspondente de acordo com a tabela de classificação padrão.
## Instruções de Saída:
Se o IMC for menor que 18.5, imprima "Categoria: Abaixo do peso".
Se o IMC estiver entre 18.5 e menor que 25, imprima "Categoria: Peso normal".
Se o IMC estiver entre 25 e menor que 30, imprima "Categoria: Sobrepeso".
Se o IMC for 30 ou maior, imprima "Categoria: Obeso".

### Exemplo de Saída:
        ```
        Insira sua altura em metros: 1.75 \n
        Insira seu peso em quilogramas: 70 \n
        Seu IMC é: 22.86 \n
        Categoria: Peso normal \n
        ```

## Identificação de Quadrante de um Ponto no Plano Cartesiano: 
Escreva um programa que solicite ao usuário para inserir as coordenadas (x, y) de um ponto no plano cartesiano. O programa deve determinar e imprimir em qual quadrante o ponto está localizado. Dica: Use condicionais if e operadores lógicos para verificar em qual quadrante o ponto está. 
## Verificação de Saldo Bancário: 
Escreva um programa em C++ que serve como verificação de saldo em um banco. Defina uma variável para ser o saldo do cliente e peça que ele digite a quantia que quer retirar no caixa. O algoritmo deve verificar se o cliente possui esse saldo. Se sim, escreva na tela que pode fazer uma retirada, se não avise que o saldo é menor que o valor solicitado.
## Classificação de Quantidade de Leads: 
Escreva um programa em C++ que recebe do usuário um número de leads que a empresa recebeu nesse dia e verifica se a quantidade é baixa (5 ou menos), esperada (6 a 10) ou alta (11+) e escreve na tela essa indicação.

## Verificação de Situação Acadêmica: 
Crie um algoritmo em C++ que recebe 3 notas de um aluno, junto com a sua porcentagem de presença na cadeira, e deve fazer a média das notas do aluno. Se for acima de 7 o aluno está aprovado, se for abaixo de 7 mas acima de 5 o aluno está em recuperação, se for abaixo de 5 o aluno reprovou. E se o aluno tiver 100% de presença e nota para aprovação deve imprimir "Aprovado" e um parabéns. Se o aluno tiver 75% de presença e nota para aprovação deve imprimir "Aprovado". Se o aluno tiver menos de 75% de presença, mesmo que tenha nota para aprovação, deve retornar "Reprovado".


## Cálculo de Recuperação: 
Escreva um programa para cálculo de recuperação em C++. Para estar em recuperação, o aluno precisou tirar menos de 7 e mais que 5 na cadeira. A nota para aprovação do aluno é a sua nota atual + o que falta para 10. Se o aluno tirou 5, deve tirar 5 na recuperação, se o aluno tirou 6, deve tirar 4 na recuperação. Escreva um programa que recebe a nota do aluno na cadeira, a nota da recuperação e sua porcentagem de presença. Se o aluno tiver 75% ou mais de presença, ele pode ser aprovado. Se a soma da nota do aluno na disciplina com a recuperação for 10 ou mais, e o aluno tiver porcentagem de presença para aprovação, deve retornar "Aprovado". Se a soma da nota do aluno na disciplina com a recuperação for menor que 10, mesmo que tenha porcentagem de presença para aprovação, deve retornar "Reprovado".
