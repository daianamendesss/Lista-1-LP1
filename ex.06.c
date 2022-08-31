#include <stdio.h>
#include "vetlib.h"

int advinha(int v[], int n, int x){
	int certo = 0;
	for(int i = 0; i < n; i++){
		if(x == v[i]){
			certo = 1;
			return certo;
		}
	}
	return certo;
}

void main(){
	int num, adv;
	printf("Insira a qtd de numeros para sorteio: ");
	
	scanf("%d", &num);
	int vet[num];
	geraVetor(vet, num, 50);
	
	printf("\n\nEscolha um numero para o sorteio: ");
	scanf("%d", &adv);
	if(advinha(vet, num, adv) == 1){
		printf("O numero %d foi sorteado! Parabens!\n\n", adv);
		printaVetor(vet, num);
	}else{
		printf("O numero %d nao foi sorteado!\n\n", adv);
		printaVetor(vet, num);
	}

}
