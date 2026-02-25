int main() {
    // Declaracao de um vetor 
    // de inteiros com 10 posicoes
    // o nome do vetor é 'v'
    // ele ainda nao tem nenhum valor atribuido, 
    // ou seja, ele tem lixo de memoria


    int v1[10]; 





    // Decararamos o vetor v2, 
    // com a previa atibuição de valores,
    // nao acontecendo o probelma 
    // de lixo de memoria

    int v2[5] = {100, 200, 300, 400, 500 }; 



    // Declaracao de um vetor v3,
    // com a previa atibuição de valores,
    // e sem a necessidade de informar
    // o numero de posicoes
    int v3[] = {1, 2, 3, 4, 5, 6, 7};

    

    // Podemos acessar os elementos do vetor
    // usando o indice, que começa em 0
    // e vai até o numero de posicoes - 1

    // o C não verifica se o indice é valido, 
    // se o indice é maior ou igual a 0 
    // e menor que o numero de posicoes
    // caso tentemos acessar um indice fora 
    // do limite pode causar problemas,
    // como acessar lixo de memoria

    printf("Posicao v3[6]: %d\n", v3[6]);
    printf("Posicao v3[7]: %d\n", v3[7]);
    printf("Posicao v3[8]: %d\n", v3[8]);
    printf("Posicao v3[9]: %d\n", v3[10]);
    printf("Posicao v3[10]: %d\n", v3[10]);
    printf("Posicao v3[11]: %d\n", v3[11]);
    printf("Posicao v3[12]: %d\n", v3[12]);
                                                printf("Posicao v3[13]: %d\n", v3[13]);
                                                        printf("Posicao v3[14]: %d\n", v3[14]);


    v3[12] = 1000;


    printf("Posicao v3[12]: %d\n", v3[12]);

    



    return 0;
}