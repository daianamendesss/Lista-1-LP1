#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

void main(){
	
	int num;
	
	printf("Insira a qtd de elementos a serem multiplicados: ");
	scanf("%d", &num);
	int vet1[num], vet2[num], vetres[num];
	
	geraVetor(vet1, num, 20);
	geraVetor(vet2, num, 20);
	
	for(int i = 0; i < num; i++){
		vetres[i] = vet1[i] * vet2[i];
	}
	
	printf("Elementos do vetor 1: ");
	printaVetor(vet1, num);
	printf("\n\nElementos do vetor 2: ");
	printaVetor(vet2, num);
	printf("\n\nElementos multiplicados: ");
	printaVetor(vetres, num);
	
}
