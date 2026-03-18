#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* esq;
    struct No* dir;
}

No* criarNo(int vlr) {
    No* novo = 
        (No*) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocacao \n");
        exit(1);
    }
    novo->valor = vlr;
    novo->esq = NULL;
    novo->dir = NULL;
}

