#include <stdio.h>

int main() {

//Declarei as variaveis separadamente em carta 1 e carta 2, seguindos os respectivos nomes: 

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
    float densidadepopulacional1;
    float densidadepopulacional2;
    float PIBcapita1;
    float PIBcapita2;

    //Primeiro declarei as variaveis levando em consideração duas cartas, sendo assim determinei variaveis 1 e 2 
    //seguindo para printf, mostrando a mensagem ao usuário com qual informação o mesmo deve fornecer
    //scanf para entrada da resposta do usuário

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

// Calculo da Densidade e PIB per capita, conhecimentos adquiridos no nivel aventureiro

    densidadepopulacional1 = populacao1 / area1;

    PIBcapita1 = PIB1 / populacao1;

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

    // Calculo da Densidade e PIB per capita, conhecimentos adquiridos no nivel aventureiro

    densidadepopulacional2 = populacao2 / area2;

    PIBcapita2 = PIB2 / populacao2;

    // Em seguida o sistema deve mostrar ao usuario os dados das duas cartas, assim como requerido no desafio.//

    printf ("Carta 1 \n");
    printf ("Estado: %c \n", estado1);
    printf ("Código da Carta: %s \n", codigo1);
    printf ("Nome da Cidade: %s \n", cidade1);
    printf ("População: %d \n", populacao1);
    printf ("Área em Km²: %f \n",area1);
    printf ("PIB: %f \n", PIB1);
    printf ("Número de Pontos Turísticos: %d \n", pontosturisticos1);
    printf ("Densidade Populacional: %.2f \n", densidadepopulacional1);
    printf ("PIB per capita: %.2f \n", PIBcapita1);
    
//Foram adicionado o printf com as informações de Densidade Populacional e PIB per capita, no Nivel Aventureiro;


    printf ("Carta 2 \n");
    printf ("Estado: %c \n", estado2);
    printf ("Código da Carta: %s \n", codigo2);
    printf ("Nome da Cidade: %s \n", cidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área em Km²: %f \n",area2);
    printf ("PIB: %f \n", PIB2);
    printf ("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf ("Densidade Populacional: %.2f \n", densidadepopulacional2);
    printf ("PIB per capita: %.2f \n", PIBcapita2);
   
   //Segue os dados utilizados em cada carta: (Dados os quais o usuario deve inserir, os quais eu mesma criei para teste do programa)

   //Carta 1                     
   //Bahia (Estado A)            
  //Código da Carta: A01         
  //Nome da Cidade: Salvador     
  //População: 2.418.000        
  //Área em Km²: 693 km²         
  //PIB: 62.954.487          
  //Pontos Turísticos: 13        
    
  //Carta 2
  //São Paulo (Estado B)
  //Código da Carta: B01
  //Nome da Cidade: SP
  //População: 11.450.000
  //Área em Km²: 1521 Km²
  //PIB: 829.000.000.000
  //Pontos Turísticos: 36

  return 0;
}
