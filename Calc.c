#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	int A=0, B=0, Resultado=0;
	int op=0;
	
	printf ("\tESCOLHA UMA DAS OPCOES ABAIXO: \n");
	do{
		printf ("\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO \n");
		scanf("%i", &op);
		printf("\n Digite o primeiro numero: ");
		scanf ("%i", &A);
		printf ("\n Digite o segundo numero: ");
		scanf ("%i", &B);
		switch(op){
			case 1:
				Resultado = A + B;
				break;
			case 2:
				Resultado = A - B;
				break;
			case 3:
				Resultado = A * B;
				break;
			case 4:
				Resultado = A / B;
				break;
			default:
				printf ("\n Erro na operaca,Por Favor! Digite uma das quatro acima!");
				break;
				
		}
	
		printf ("\n O resultado e: %i", Resultado);
		printf ("\n\n\tDigite 1 para continuar ou 0 para sair: \n");
		scanf ("%i", &op);
		
	}while(op==1);
	
	printf ("\n Fim do Algoritmo, Aperte qualquer tecla para encerrar o programa!\n\n\n\n");
	
	return 0;
}
