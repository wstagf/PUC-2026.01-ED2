// ter 18 anos
// ter um carro


#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Voce digitou: \n");
    printf("%d", idade);

    // estrutura de decisao, condicao, 
    if(idade >= 18) {
        printf("\nPode dirigir \n");
    } else {
        printf("\nVai de uber \n");
    }


    

    return 0;
}