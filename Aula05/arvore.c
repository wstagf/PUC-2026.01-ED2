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


No* inserir(No* raiz, int valor) {
    if( raiz == NULL ) {
        return criarNo(valor);
    }

    if( valor < raiz->valor) {
        raiz -> esq = 
            inserir(raiz->esq, valor);
    } else {
        raiz->dir = inserir(raiz->dir, valor);
    }
    return raiz;
}

void imprimirArvore(No* raiz, int nivel) {
    if(raiz == NULL) return;
    // imprimimos primeiro o lado da direita
    imprimirArvore(raiz -> dir, nivel + 1);
    for (int i = 0; i < nivel; i++) {
        printf("    ");
    }
    printf("%d\n", raiz-> valor);
    imprimirArvore(raiz -> esq, nivel + 1);
}

void imprimirArvore2(No* raiz, int nivel, char lado) {
    if(raiz == NULL) return;
    // imprimimos primeiro o lado da direita
    imprimirArvore2(raiz -> dir, nivel + 1, 'D');
    for (int i = 0; i < nivel; i++) {
        printf("    ");
    }
    printf("%d", raiz-> valor);
    if(lado == "R") printf(" (R)");
    else if( lado == "E") printf(" (E)");
    else if( lado == "D") printf(" (D)");

    printf("\n");
    imprimirArvore2(raiz -> esq, nivel + 1, 'E');
}


int main() {
    No* raiz = criarNo(40);
    raiz->esq = criarNo(20);
    raiz->dir = criarNo(60);

    raiz->esq->esq = criarNo(10);
    raiz->esq->dir = criarNo(30);

    // preOrdem(raiz);

    // Inserir os itens 
    // 25, 50, 70, 5, 35, 65, 80

    raiz = inserir(raiz, 25);
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 70);

    // preOrdem(raiz);

    // inserir
    // 40  20  10  30  60  40  20  
    // 10  30  25  60  50  75
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 35);
    raiz = inserir(raiz, 65);
    raiz = inserir(raiz, 80);

    //preOrdem(raiz);
    printf("AAA\n");
    imprimirArvore2(raiz, 0, 'R');
    printf("BBB\n");
    return 0;
}

