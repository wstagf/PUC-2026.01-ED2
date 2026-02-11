// faca uma soma de dois numeros
#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}
