#include <stdio.h>
#include "cartas.h"

int main() {
    int n;
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &n);

    Carta cartas[n];

    for(int i=0; i<n; i++) {
        printf("\nCadastro da carta %d:\n", i+1);
        cadastrarCarta(&cartas[i]);
    }

    printf("\n--- Cartas cadastradas ---\n");
    for(int i=0; i<n; i++) {
        exibirCarta(cartas[i]);
    }

    return 0;
}
