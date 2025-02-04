#include <stdio.h>
#include <string.h>

int main() {
    char codigo_cidade[4];  
    char estado[3];         
    char nome_cidade[50];   
    int populacao;
    float area_cidade;
    float pib;
    int pontos_turisticos;

    
    printf("Digite o código da cidade (3 caracteres): ");
    scanf("%3s", codigo_cidade);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);  

    printf("Digite a sigla do estado (ex: SP): ");
    scanf("%2s", estado);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area_cidade);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    
    printf("\n=== Dados da Cidade ===\n");
    printf("Código: %s\n", codigo_cidade);
    printf("Nome: %s\n", nome_cidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_cidade);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}