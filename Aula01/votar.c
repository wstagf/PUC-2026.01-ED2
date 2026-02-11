// < 16 nao vota 
// 16 <= X < 18 opcicional
// 18 <= X < 65 obrigatorio
// 65 <= X opcioinal  


#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Voce digitou: \n");
    printf("%d", idade);

    if(idade < 16) {
        printf("\nVai estudar \n");
    } else if(idade >= 16 && idade < 18) {
        printf("\nopcional \n");
    } else if(idade >= 18 && idade < 65) {
        printf("\nObrigatorio \n");
    } else {
        printf("\nOpcional\n");
    } 

    

    return 0;
}