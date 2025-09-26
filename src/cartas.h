#ifndef CARTAS_H
#define CARTAS_H

typedef struct {
    char estado[30];
    int codigo;
    char nomeCidade[30];
    long populacao;
    double pib;
    double area;
    int pontosTuristicos;
    double densidade;    // calculado
    double pibPerCapita; // calculado
} Carta;

void cadastrarCarta(Carta *c);
void exibirCarta(Carta c);

#endif
