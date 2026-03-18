#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* esq;
    struct No* dir;
} No;

// Criar nó
No* criarNo(int vlr) {
    No* novo = (No*) malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro de alocacao\n");
        exit(1);
    }

    novo->valor = vlr;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

// Inserção ABB
No* inserir(No* raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }

    if (valor < raiz->valor) {
        raiz->esq = inserir(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = inserir(raiz->dir, valor);
    } else {
        printf("Valor %d ja existe!\n", valor);
    }

    return raiz;
}

// Percursos
void preOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void emOrdem(No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->valor);
        emOrdem(raiz->dir);
    }
}

void posOrdem(No* raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->valor);
    }
}

// Impressão visual melhorada
void imprimirArvoreBonita(No* raiz, int nivel, char lado) {
    if (raiz == NULL) return;

    imprimirArvoreBonita(raiz->dir, nivel + 1, 'D');

    for (int i = 0; i < nivel; i++) {
        printf("    ");
    }

    printf("%d", raiz->valor);

    if (lado == 'R') printf(" (R)");
    else if (lado == 'E') printf(" (E)");
    else if (lado == 'D') printf(" (D)");

    printf("\n"); // uma quebra por nó

    imprimirArvoreBonita(raiz->esq, nivel + 1, 'E');
}

// Liberar memória
void liberarArvore(No* raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esq);
        liberarArvore(raiz->dir);
        free(raiz);
    }
}

// MAIN
int main() {

    No* raiz = NULL;

    int valores[] = {40, 20, 60, 10, 30, 25, 50, 70, 5, 35, 65, 80};
    int n = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < n; i++) {
        raiz = inserir(raiz, valores[i]);
    }

    printf("\nPre-ordem:\n");
    preOrdem(raiz);

    printf("\n\nEm-ordem:\n");
    emOrdem(raiz);

    printf("\n\nPos-ordem:\n");
    posOrdem(raiz);

    printf("\n\nArvore:\n");
    imprimirArvoreBonita(raiz, 0, 'R');

    liberarArvore(raiz);

    return 0;
}