#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
   

int main() {

//                                 CARTA 1
    
    
    char cidade1[50];
    char estado1[3];
    int populacao1;
    int pontos_turisticos1;
    float pib1; 
    int area1;
    
    printf("Carta 1 \n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a sigla do estado: ");
    scanf("%s", estado1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Digite a área: ");
    scanf("%d", &area1);

//                                 CARTA 2

    char cidade2[50];
    char estado2[3];
    int populacao2;
    int pontos_turisticos2;
    float pib2; 
    int area2;
    
    printf("Carta 2 \n");

    printf("Digite o nome da cidade : ");
    scanf("%s", cidade2);

    printf("Digite a sigla do estado : ");
    scanf("%s", estado2);

    printf("Digite a populacao : ");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turisticos : ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB : ");
    scanf("%f", &pib2);
    
    printf("Digite a área : ");
    scanf("%d", &area2);

    //                             MOSTRAR INFORMAÇÕES

    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("PIB: %.2f\n", pib1);
    printf("Área: %d km²\n", area1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %d km²\n", area2);

    return 0;



} 




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.




