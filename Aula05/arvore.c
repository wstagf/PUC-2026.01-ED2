#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* esq;
    struct No* dir;
} No;

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
    return novo;
}

void preOrdem(No* raiz) {
    if(raiz !=NULL) {
        printf(" %d ", raiz->valor);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void posOrdem(No* raiz) {
    if(raiz !=NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf(" %d ", raiz->valor);
    }
}

void emOrdem(No* raiz) {
    if(raiz !=NULL) {
        emOrdem(raiz->esq);
        printf(" %d ", raiz->valor);
        emOrdem(raiz->dir);
    }
}


int main() {
    No* raiz = criarNo(40);
    raiz->esq = criarNo(20);
    raiz->dir = criarNo(60);

    raiz->esq->esq = criarNo(10);
    raiz->esq->dir = criarNo(30);

    preOrdem(raiz);

    return 0;
}

