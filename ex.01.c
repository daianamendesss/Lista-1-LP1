#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tamanho = 0,escolha=0,k, numAleatorio, soma=0;
	printf("Qual o tamanho do vetor?\n");
	do{
		if(tamanho>=100){
			printf("Qual o tamanho do vetor?\n");
			scanf("%i",&tamanho);
		}else{
			scanf("%i",&tamanho);
		}
	
	}while(tamanho>100);
	
	int vetor[tamanho];
	
	printf("Escolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
	
	
	do{
		if(escolha == 0){
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2){
			printf("\nOp��o Invalida!\n");
			printf("\nEscolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\n\nDigite os valores do vetor:\n\n");
		for(k=0;k<tamanho;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor[k]);
		}
	}else if(escolha == 2){
		printf("Gerando os valores do vetor.\n\n");
		for(k=0;k<tamanho;k++){
			numAleatorio = rand() % 10;
			printf("[%d] = %d\n",k,numAleatorio);
			vetor[k] = numAleatorio;
		}
	}
	
	printf("Os valores  contidos nos vetores sao: \n\n");
	
		for(k=0;k<tamanho;k++){
			printf("[%d] = %d\n",k,vetor[k]);
			soma+=vetor[k];
		}
		
	printf("Resultado da soma dos valores:: %d",soma);
	
	
	
    return 0;
}
