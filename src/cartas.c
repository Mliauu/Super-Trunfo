#include <stdio.h>
#include "cartas.h"

void cadastrarCarta(Carta *c) {
    printf("Estado: ");
    scanf(" %[^\n]", c->estado);
    printf("Código: ");
    scanf("%d", &c->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", c->nomeCidade);
    printf("População: ");
    scanf("%ld", &c->populacao);
    printf("PIB: ");
    scanf("%lf", &c->pib);
    printf("Área: ");
    scanf("%lf", &c->area);
    printf("Número de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);

    // Cálculo de atributos derivados
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
}

void exibirCarta(Carta c) {
    printf("\n---- Carta ----\n");
    printf("Estado: %s\n", c.estado);
    printf("Código: %d\n", c.codigo);
    printf("Cidade: %s\n", c.nomeCidade);
    printf("População: %ld\n", c.populacao);
    printf("PIB: %.2lf\n", c.pib);
    printf("Área: %.2lf\n", c.area);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade populacional: %.2lf\n", c.densidade);
    printf("PIB per capita: %.2lf\n", c.pibPerCapita);
}
