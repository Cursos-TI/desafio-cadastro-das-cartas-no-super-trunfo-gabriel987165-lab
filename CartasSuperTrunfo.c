#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
   

int main() {
    
    
    
    char cidade1[50];
    char estado1[3];
    int populacao1;
    int pontos_turisticos1;
    float pib1; 
    int area1;
    
    printf("Carta 1 \n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a sigla do estado: \n");
    scanf("%s", &estado1);

    printf("Digite a populacao: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    
    printf("Digite a área: \n");
    scanf("%d", &area1);


    char cidade2[50];
    char estado2[3];
    int populacao2;
    int pontos_turisticos2;
    float pib2; 
    int area2;
    printf("Carta 2");

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a sigla do estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite a populacao 2: \n");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turisticos 2: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);
    
    printf("Digite a área 2: \n");
    scanf("%d", &area2);



} 




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return0;

