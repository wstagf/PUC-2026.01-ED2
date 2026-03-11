#include <stdio.h>
#define TAM 10

int tabela[TAM];

// funcao HASH 
int hash(int chave) {
    return chave % TAM;
}
// se CHAVE = 47, TAM = 10.... 
// hash = ???? 


void inserir( int chave ) {
    int indice = hash(chave);
    tabela[indice] = chave;
}

void mostrar() {
    for (int i = 0; i < TAM; i++)
    {
        printf(
            "%d -> %d\n", 
            i, 
            tabela[i]
        );
    }
}

int main() {
    inserir(25);
    inserir(32);
    inserir(47);
    inserir(37);
    mostrar();
}