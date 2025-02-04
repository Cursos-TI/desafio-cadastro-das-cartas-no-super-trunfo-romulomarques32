#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    setlocale(LC_ALL, "portuguese");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_cidade;
    char estado;
    char nome_cidade;
    int populacao;
    float area_cidade;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o códgo da cidade: ");
    scanf("&s", &codigo_cidade);
    printf("Digite o nome da cidade: ");
    scanf("&s", &nome_cidade);
    printf("Digite a qual estado a cidade pertence: ");
    scanf("&s", &estado);
    printf("Digite a população da cidade: ");
    scanf("&d", &populacao);
    printf("Digite a área da cidade: ");
    scanf("&f", &area_cidade);
    printf("Digite o PIB da cidade: ");
    scanf("&f", &pib);
    printf(!"Digite o número de pontos turísticos existentes na cidade: ");
    scanf("&d", &pontos_turisticos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf(" \n O código da cidade é: %s", codigo_cidade);
    printf(" \n O nome da cidade é: %s", nome_cidade);
    printf(" \n O estado a qual a cidade pertence é: %s", estado);
    printf(" \n A população da cidade é: %d", populacao);
    printf(" \n O PIB da cidade é: %f", pib)
    printf(" \n A cidade possui %d pontos turísticos", pontos_turisticos);

    return 0;
}
