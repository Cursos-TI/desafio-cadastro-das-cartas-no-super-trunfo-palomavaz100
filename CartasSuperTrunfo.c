#include <stdio.h>

int main() {

    char estado1 = 'A';
    char estado2 = 'A';
    char codigo1 [5];
    char codigo2 [5];
    char cidade1 [25];
    char cidade2 [25];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    int pontosturisticos1;
    int pontosturisticos2;

    //Primeiro declarei as variaveis levando em consideração duas cartas, sendo assim determinei variaveis 1 e 2 //

    printf ("Adicione os dados da Carta 1 \n Nome do Estado: \n");
    scanf (" %c", &estado1);

    printf ("Código da Carta: \n");
    scanf (" %s", codigo1);

    printf ("Nome da Cidade: \n");
    scanf (" %s", cidade1);

    printf ("População: \n");
    scanf (" %d", &populacao1);

    printf ("Área em Km²: \n");
    scanf (" %f", &area1);

    printf ("PIB: \n");
    scanf (" %f", &PIB1);

    printf ("Número de Pontos Turísticos: \n");
    scanf (" %d", &pontosturisticos1);
// Após determinar os valores das variaveis 1 peço ao usuario as informações da segunda carta, sendo as variaveis 2//

    printf ("Adicione os dados da Carta 2 \n Nome do Estado: \n");
    scanf (" %c", &estado2);

    printf ("Código da Carta: \n");
    scanf (" %s", codigo2);


    printf ("Nome da Cidade: \n");
    scanf (" %s", cidade2);

    printf ("População: \n");
    scanf (" %d", &populacao2);

    printf ("Área em Km²: \n");
    scanf (" %f", &area2);

    printf ("PIB: \n");
    scanf (" %f", &PIB2);

    printf ("Número de Pontos Turísticos: \n");
    scanf (" %d", &pontosturisticos2);

    // Em seguida o sistema deve mostrar ao usuario os dados das duas cartas, assim como requerido no desafio.//

    printf ("Carta 1 \n");
    printf ("Estado: %c \n", estado1);
    printf ("Código da Carta: %s \n", codigo1);
    printf ("Nome da Cidade: %s \n", cidade1);
    printf ("População: %d \n", populacao1);
    printf ("Área em Km²: %f \n",area1);
    printf ("PIB: %f \n", PIB1);
    printf ("Número de Pontos Turísticos: %d \n", pontosturisticos1);
    
    printf ("Carta 2 \n");
    printf ("Estado: %c \n", estado2);
    printf ("Código da Carta: %s \n", codigo2);
    printf ("Nome da Cidade: %s \n", cidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área em Km²: %f \n",area2);
    printf ("PIB: %f \n", PIB2);
    printf ("Número de Pontos Turísticos: %d \n", pontosturisticos2);
   
   //Segue os dados utilizados em cada carta:
   //carta 1                     carta 2
   //Bahia (Estado A)            São Paulo (Estado B)
  //Código da Carta: A01         Código da Carta: B01
  //Nome da Cidade: Salvador     Nome da Cidade: SP
  //População: 2.418.000         População: 11.450.000
  //Área em Km²: 693 km²         Área em Km²: 1521 km²
  //PIB: 62.954.487,49           PIB: 829.000.000.000
  //Pontos Turísticos: 13        Pontos Turísticos: 36   
    return 0;
}
