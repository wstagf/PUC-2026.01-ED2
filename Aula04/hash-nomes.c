#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 7
// tabela ASCII...
// A = 65, B, 66, Z = 90
// a = 97, b, 98, z = 122

// - 65666567658469 // ABACATE

// - 333084104105097103111 // Thiago

long long nomes[] = {
    7765827365,          // MARIA
    74798369,            // JOSE
    657865,              // ANA
    74796579,            // JOAO
    8069688279,          // PEDRO
    676582767983,        // CARLOS
    7685676583         // LUCAS
};

// void numeroParaTexto(long long numero) {



//     int tamanho = strlen(str);



//     printf("\n");
// }

int main() {
    for (int i = 0; i < TAM; i++)
    {
        long long numeroAtual = nomes[i];
        printf(
            "O valor de x eh: %lld\n",
            numeroAtual
        );

        char str[50];
        sprintf(str, "%lld", numeroAtual);

        printf(str);
        printf("\n");

        for (int j = 0; j < strlen(str); j += 2) {

        char asciiStr[3];
        asciiStr[0] = str[j];
        asciiStr[1] = str[j+1];
        asciiStr[2] = '\0';

        int ascii = atoi(asciiStr);

        printf("%c", ascii);
    }
        
    }
    
}