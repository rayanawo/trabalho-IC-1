#include<stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>

int main ()
{
	
setlocale(LC_ALL, "Portuguese");

	int a; //número a ser adivinhado
	int k; //palpite do jogador
	
	printf("O objetivo é tentar adivinhar o número, entre zero e 100, que foi sorteado pelo computador.\n\n");
	
	printf("\nDigite seu palpite:\n");
	scanf("%d", &k);

	srand(time(NULL));
	a=rand() % 100;

	do
	{	
		if(k>a)
		{
			printf("O número procurado é menor que o palpite.");
			printf("\nDigite outro número:\n");
			scanf("%d",&k);
		}
	
		else if(k<a)
		{
			printf("O número procurado é maior que o palpite");
			printf("\nDigite outro número: \n");
			scanf("%d",&k);
		}
	}while(a!=k);
		
		if(k==a)
		{
			printf("Parabéns, o número foi encontrado!!");
		}
}
