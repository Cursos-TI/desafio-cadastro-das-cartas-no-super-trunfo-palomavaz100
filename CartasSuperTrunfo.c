#include <stdio.h>

int main() {

    char estado, codigo, cidade;
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf ("Nome do Estado: \n");
    scanf ("%s", &estado);

    printf ("Código da Carta: \n");
    scanf (" %s", &codigo);


    printf ("Nome da Cidade: \n");
    scanf (" %s", &cidade);

    printf ("População: \n");
    scanf (" %d", &populacao);

    printf ("Área em Km²: \n");
    scanf (" %f", &area);

    printf ("PIB: \n");
    scanf (" %f", &PIB);

    printf ("Número de Pontos Turísticos: \n");
    scanf (" %d \n", &pontosturisticos);

    printf ("Estado: %s", estado);
    printf ("Código da Carta: %s", codigo);
    printf ("Nome da Cidade: %s", cidade);
    printf ("População: %d \n", populacao);
    printf ("Área em Km²: %f \n",area);
    printf ("PIB: %f \n", PIB);
    printf ("Número de Pontos Turísticos: %d \n", pontosturisticos);
    return 0;
}
