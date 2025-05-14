#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Declaração de funções auxiliares
double densidade_populacional(int populacao, float area_em_km2);
double pib_per_capita(int populacao, float pib);

int main() {

    // Variáveis da carta 1
    char estado1, codigo_da_carta1[10], nome_da_cidade1[20];
    int populacao1, numero_de_pontos_turisticos1;
    float area1_em_km2, pib1;

    // Variáveis da carta 2
    char estado2, codigo_da_carta2[10], nome_da_cidade2[20];
    int populacao2, numero_de_pontos_turisticos2;
    float area2_em_km2, pib2;


    printf("Cadastro de cartas do super trunfo\n");
    printf("------------------------------\n");
    printf("Teremos oito estados no jogo, que serão representados pelas letras de A até H.\n");
    printf("Para cada estado, você deverá informar o nome da cidade, a população, a área, o número de pontos turísticos e o PIB.\n");
    printf("O jogo será composto por 32 cartas, quatro para cada estado.\n");
    printf("O código das cartas será composto pela letra do estado e um número de 01 a 04.\n");
    printf("------------------------------\n");
    
    printf("\nCadastro da primeira carta\n");
    printf("------------------------------\n");
    printf("Informe o estado (letra de A até H): ");
    scanf("%c", &estado1);
    getchar(); // Limpa o buffer de leitura do caractere
    printf("Informe o código da carta: ");
    scanf("%s", codigo_da_carta1);
    getchar(); // Limpa o buffer de leitura da string
    printf("Informe o nome da cidade: ");
    fgets(nome_da_cidade1, 20, stdin);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    getchar(); // Limpa o buffer de leitura do inteiro
    printf("Informe a área em km2: ");
    scanf("%f", &area1_em_km2);
    getchar(); // Limpa o buffer de leitura do float
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar(); // Limpa o buffer de leitura do inteiro
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);
    getchar(); // Limpa o buffer de leitura do float

    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0'; // Remove o caractere de nova linha do final da string
    printf("------------------------------\n");

    // Cálculo da densidade populacional e do pib per capita
    double densidade_populacional1 = densidade_populacional(populacao1, area1_em_km2);
    double pib_per_capta1 = pib_per_capita(populacao1, pib1);

    printf("\nCadastro da segunda carta\n");
    printf("------------------------------\n");
    printf("Informe o estado (letra de A até H): ");
    scanf("%c", &estado2);
    getchar(); // Limpa o buffer de leitura do caractere
    printf("Informe o código da carta: ");
    scanf("%s", codigo_da_carta2);
    getchar(); // Limpa o buffer de leitura da string
    printf("Informe o nome da cidade: ");
    fgets(nome_da_cidade2, 20, stdin);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    getchar(); // Limpa o buffer de leitura do inteiro
    printf("Informe a área em km2: ");
    scanf("%f", &area2_em_km2);
    getchar(); // Limpa o buffer de leitura do float
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar(); // Limpa o buffer de leitura do inteiro
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);
    getchar(); // Limpa o buffer de leitura do float
    
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // Remove o caractere de nova linha do final da string
    printf("------------------------------\n");

    // Cálculo da densidade populacional e do pib per capita
    double densidade_populacional2 = densidade_populacional(populacao2, area2_em_km2);
    double pib_per_capta2 = pib_per_capita(populacao2, pib2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1_em_km2);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2_em_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta2);
    printf("\n");

    return 0;

}

// Funções auxiliares para calcular a densidade populacional e o pib per capita
double densidade_populacional(int populacao, float area_em_km2) {

    return (double) populacao / area_em_km2;
}

double pib_per_capita(int populacao,  float pib) {

    // PIB em reais
    double pib_em_reais = pib * 1000000000;

    return (double) (pib_em_reais / populacao);
}
