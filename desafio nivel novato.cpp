#include <stdio.h>
#define texto "Insira seus dados."

float calcularDensidadePopulacional(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per Capita
float calcularPibPerCapita(unsigned long int populacao, float PIB) {
    return PIB / populacao;
}

// Função para calcular Super Poder
float calcularSuperPoder(unsigned long int populacao, float area, float PIB, int pontosturisticos, float pibPerCapita, float densidadePopulacional) {
    return (float)(populacao + area + PIB + pontosturisticos + pibPerCapita + (1 / densidadePopulacional));
}


int main() {
	printf("%s\n",texto);
	
	
char carta[02]="";
char estado,A,B;
char nomedacidade[50]="";
unsigned long int populacao;
float area= 0.0;
float PIB=0.0;
int pontosturisticos=0;
float superpoder;
float densidadePopulacional;
float pibPerCapita;


printf("Estado \n");
scanf("%c", &estado);

printf("Nome Da cidade \n");
scanf(" %[^\n]", nomedacidade);

printf("Area \n");
scanf("%f", &area);


printf("PIB \n");
scanf("%f",&PIB);

printf("Populacao \n");
scanf("%lu", &populacao);

printf("Numero de Pontos Turisticos \n");
scanf("%d",&pontosturisticos);

densidadePopulacional = calcularDensidadePopulacional(populacao, area);
pibPerCapita = calcularPibPerCapita(PIB, populacao);
superpoder = calcularSuperPoder(populacao, area, PIB, pontosturisticos, pibPerCapita, densidadePopulacional);


printf("Dados Inseridos... \n");
printf("Carta 1: \n");
printf("Codigo:A01 \n");
printf("Estado: %s.\n", &estado);
printf("Nome Da Cidade: %s. \n", &nomedacidade);
printf("Area: %.2f Km \n", area);
printf("PIB: %.2f bilhoes de reais\n", PIB);
printf("Populacao: %lu\n", populacao);
printf("Numero De Pontos Turisticos: %d. \n", pontosturisticos);
printf("Densidade Populacional: %.2f hab/km\n", densidadePopulacional);
printf("PIB per Capita: %.2f reais\n", pibPerCapita);

printf("Proximos Dados: \n");

printf("Estado \n");
scanf("%s", &estado);

printf("Nome Da cidade \n");
scanf(" %[^\n]", nomedacidade);

printf("Area \n");
scanf("%f", &area);

printf("PIB \n");
scanf("%f",&PIB);

printf("Populacao \n");
scanf("%lu", &populacao);

printf("Numero de Pontos Turisticos \n");
scanf("%d",&pontosturisticos);

densidadePopulacional = calcularDensidadePopulacional(populacao, area);
pibPerCapita = calcularPibPerCapita(PIB, populacao);
superpoder = calcularSuperPoder(populacao, area, PIB, pontosturisticos, pibPerCapita, densidadePopulacional);


printf("Dados Inseridos... \n");
printf("Carta 2: \n");
printf("Codigo:B02 \n");
printf("Estado: %s.\n", &estado);
printf("Nome Da Cidade: %s. \n", &nomedacidade);
printf("Area: %.2fKm \n", area);
printf("PIB: %.2f bilhoes de reais\n", PIB);
printf("Populacao: %lu\n", populacao);
printf("Numero De Pontos Turisticos: %d. \n", pontosturisticos);
printf("Densidade Populacional: %.2f hab/km \n", densidadePopulacional);
printf("PIB per Capita: %.2f reais\n", pibPerCapita);

printf("\nComparação entre as Cartas:\n");

printf("Comparando Populacao: ");
printf("%d\n", (populacao > 0) ? 1 : 0);

printf("Comparando PIB: ");
printf("%d\n", (PIB > 0) ? 1 : 0);

printf("Comparando Densidade Populacional: ");
printf("%d\n", (densidadePopulacional < 0) ? 1 : 0);

printf("Comparando Super Poder: ");
printf("%d\n", (superpoder > 0) ? 1 : 0);

printf("Comparando Area: ");
printf("%d\n", (area > 0) ? 1 : 0);

printf("Comparando Pontos Turisticos: ");
printf("%d\n", (pontosturisticos > 0) ? 1 : 0);

printf("Comparando PIB per Capita: ");
printf("%d\n", (pibPerCapita > 0) ? 1 : 0);
	
	
	
	
}
