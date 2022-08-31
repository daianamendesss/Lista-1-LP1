#include <stdio.h>
#include "vetlib.h"

void main(){
	
	int qtd;
	
	
	printf("Insira a qtd de elemntos: ");
	scanf("%d", &qtd);
	int vet[qtd];
	
	leiaVetor(vet, qtd);
	printf("\nO menor valor dos elementos: %d\n\n", menorValor(vet, qtd));
	printaVetor(vet, qtd);
		
}
