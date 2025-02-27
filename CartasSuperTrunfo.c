#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int main(){
        char estado[50];
        char cidade[50];
        int codigo[50];
        int populacao;
        float area;
        float pib;
        int pontosturisticos;
        float densidade, pibpercapta;
 
        char estado2[50];
        char cidade2[50];
        int codigo2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;
        float densidade2, pibpercapta2;
 
        printf("Bem vindo ao Super Trunfo: \n");
        printf("Insira corretamente cada dado necessario para suas cartas: \n");
 
        printf("Digite o nome do estado: \n");
        scanf("%s", &estado);
 
        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade);
 
        printf("Digite o codigo: \n");
        scanf("%d", &codigo);
 
        printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao);
 
        printf("Digite a area: \n");
        scanf("%f", &area);
 
        printf("Digite o pib: \n");
        scanf("%f", &pib);
 
        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosturisticos);
 
        printf("nome do estado: %s - cidade: %s - codigo: %d - populacao %d:", estado, cidade, codigo, populacao);
        printf("area: %f - pib: %f - pontosturisticos: %d: \n", area, pib, pontosturisticos);
 
        
       densidade=populacao/area;
       printf("o quociente de populacao/area: %f\n,:densidade");
       pibpercapta=pib/populacao;
       printf("o quociente de pib/area: %f\n,:pibpercapta");

       //iniciante em programção, o desafio era criar duas cartas,perdão pelo código feio kkkk
 
        printf("Digite o nome do estado: \n");
        scanf("%s", &estado2);
 
        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade2);
 
        printf("Digite o codigo: \n");
        scanf("%d", &codigo2);
 
        printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao2);
 
        printf("Digite a area: \n");
        scanf("%f", &area2);
 
        printf("Digite o pib: \n");
        scanf("%f", &pib2);
 
        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosturisticos2);
 
 
        printf("nome do estado: %s - cidade: %s - codigo: %d - populacao %d", estado2, cidade2, codigo2, populacao2);
        printf("area: %f - pib: %f - pontosturisticos: %d", area2, pib2, pontosturisticos2);

          
       densidade2=populacao/area;
       printf("o quociente de populacao/area: %f\n,:densidade2");
       pibpercapta2=pib/populacao;
       printf("o quociente de pib/area: %f\n,:pibpercapta2");

 
        return 0;
 
     }
     
}
