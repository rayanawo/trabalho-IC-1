#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main()
{
		system("color 8F");
		setlocale(LC_ALL,"Portuguese");
	
	
	int m=0; //determina qual opção do menu principal foi escolhida pelo usuário


	int op; //determina qual opção do menu secundário foi escolhida pelo usuário
	int i; //contador
	int menu = 1; //serve para manter o menu aberto 
	double mediaArit = 0; //representa a média aritmética simples
	double mediaPond = 0; //representa a média ponderada
	double desvio = 0; //representa o desvio padão
	double variancia = 0; //representa a variância
	double valorMa; //representa o maior valor entre os números
	double valorMe; //representa o menor valor entre os números
    double numeros[5]; //vetor que armazena os numéros que serão usados
	double pesos[5]; //vetor que armazena os pesos da média aritmética
	double sub[5]; //vetor que armazena dados para o cálculo da variância
    double somaNum = 0, somaPeso = 0; 
    
    
    int a; //número a ser adivinhado
	int k; //palpite do jogador
	int j=0; //contador de vezes que o jogador tentou adivinhar
	int o; //determina qual opção foi escolhida
 
	while(1)
	{
		{	
			system("color 8F");
			printf("Esse programa está dividido em duas partes. Você pode selecionar uma delas ou fechar o programa.\n");
			printf("\nSelecione a opção desejada:\n");
			printf("\n\t1 - Cálculo das médias\n");
			printf("\n\t2 - Jogo descubra o número\n");
			printf("\n\t3 - Fechar o programa\n");
			printf("\nSua escolha é:\t");
			scanf("%d", &m);
			//system("cls");
		}

		if(m==1) //abre programa 1
		{
			while (menu != 0)
    		{	
    			system("color 5F");
				printf("\n\nEsse programa tem como objetivo fazer o cálculo de diversos tipos de média.\n");
        		printf("\nSelecione a opção desejada:\n");
        		printf("\n\t1 - Digitar números\n");
        		printf("\n\t2 - Média aritmética simples\n");
        		printf("\n\t3 - Média ponderada\n");
        		printf("\n\t4 - Desvio padrão\n");
        		printf("\n\t5 - Maior número\n");
        		printf("\n\t6 - Menor número\n");
        		printf("\n\t7 - Voltar ao menu principal\n");
        		printf("\n\t8 - Fechar o programa\n");
        		printf("\nSua escolha é:\t");
        		scanf("%d", &op);

        
        		if(op==1) //apenas para inserir os números que serão usados nos cálculos das médias
				{
            		printf("\n\tdigite 5 números em sequência:\n");

            		for (i = 0; i < 5; i++)
            		{
                		printf("\t");
                		scanf("%lf", &numeros[i]);
            		}
				}
        	
				else if(op==2) //faz o cálculo da média aritmética
				{
            		somaNum = 0;

            		for(i = 0; i < 5; i++)
                		somaNum = somaNum + numeros[i]; //somando todos os números que foram inseridos
            		

            		mediaArit = somaNum/5;
	
            		printf("\n\tmédia aritmética simples = %.2lf", mediaArit);
            		printf("\n");
            	}


        		else if(op==3) //faz o cálculo da média ponderada
				{
            		printf("\n\tinsira o peso de cada número:\n");

            		for(i = 0; i < 5; i++)
                	{
						printf("\tpeso de %.2lf:    ", numeros[i]);
                		scanf("%lf", &pesos[i]);
            		}

            		somaNum = 0; 

            		for (i = 0; i < 5; i++)
                    	somaNum = somaNum + (numeros[i] * pesos[i]); // somatória da multiplicação de todos os números por seus pesos

            		somaPeso = 0;

            		for (i = 0; i < 5; i++)
                		somaPeso = somaPeso + pesos[i]; // somatória de todos os pesos

            		mediaPond = (somaNum)/(somaPeso);

            		printf("\n\tmedia ponderada = %.2lf", mediaPond);
            		printf("\n");
            	}

        		else if(op==4) //calcula o desvio padrão
        		{
            		somaNum = 0;

            		for (i = 0; i < 5; i++)
                		somaNum = somaNum + numeros[i]; //somando todos os números que foram inseridos
            	

            		mediaArit = somaNum / 5;

            		for(i = 0; i < 5; i++)
                		sub[i] = ((numeros[i] - mediaArit) * (numeros[i] - mediaArit)); /* calcula o quadrado da diferença entre o número
                                                                                    e a média aritmética */
            

            		variancia = (sub[0] + sub[1] + sub[2] + sub[3] + sub[4])/5;

            		desvio = sqrt(variancia); // desvio padrão é definido como a raiz quadrada da variância

            		printf("\n\tdesvio padrao = %.2lf", desvio);
            		printf("\n");
            	}

        		else if(op==5)//calcula o maior valor
				{
        			valorMa = numeros[0]; // guardando o primeiro valor do vetor como maior

        			for(i = 1; i < 5; i++)
        			{
            			if(numeros[i] > valorMa) // comparando um por um os valores dos outros vetores e obtendo o maior de dois a dois
                			valorMa = numeros[i];
            		
        			}

        		printf("\n\tmaior valor = %.2lf", valorMa);
        		printf("\n");
        		}

        		else if(op==6)//calcula o menor valor
				{
            		valorMe = numeros[0]; // primeiro valor é armazenado como o menor

            		for (i = 1; i < 5; i++)
            		{
                		if (numeros[i] < valorMe) // comparação entre todos os valores para descobrir qual o menor
                    		valorMe = numeros[i]; // o menor número é sempre armazenado como novo valor da variável
            		}

            		printf("\n\tmenor valor = %.2lf", valorMe);
            		printf("\n");
        		}

        		else if(op == 7)
                {
                
                    system("cls"); //retorna ao menu principal
					break;
                }
                
                else if(op==8)
            		break; //quebra a condição do while
        			 
			}
			
			if(op==8)
                {
           			printf("Fim do programa.");//fecha o programa todo
           			break;
        		}	
		}
	
	
	
		else if(m==2) //abre programa 2
		{
			
			printf("O seu objetivo nesse jogo é tentar adivinhar o número, entre zero e 100, que foi sorteado pelo computador. Boa sorte.\n\n");
	
	
			printf("\nDigite seu palpite:\t");
			scanf("%d", &k);
				j++;
	
			
			srand(time(NULL)); //dá a possibilidade do número sorteado ser qualquer um entre 0 e 100 
			a=rand() % 100; //sorteia um número entre 0 e 100

			do
			{	
				if(k>a)
				{
					j++;
					
					system("color 4F");
					
					printf("Você errou. :(\n");
					printf("\nO número procurado é menor que o palpite.\n");
					printf("\nDigite outro palpite: \t");
					scanf("%d",&k);
				}
	
				else if(k<a)
				{
					j++;
					
					system("color 4F");
					
					printf("Você errou. :(\n");
					printf("\nO número procurado é maior que o palpite\n");
					printf("\nDigite outro palpite: \t");
					scanf("%d",&k);
				}
			}while(a!=k);
		
		
			if(k==a)
			{
				system("color 2F");
				
				printf("Parabéns, o número foi encontrado!!");
				printf("\n O número de tentativas foi %d", j);	
			}
			
				printf("\n\n\tAgora que você ganhou o jogo, selecione a opção desejada:");
				printf("\n\t\t1 - Voltar ao menu principal");
				printf("\n\t\t2 - Fechar o programa");
				printf("\nSua escolha é:\t");
				scanf("%d", &o);
				
				if(o==1)
				system("cls");
				
				if(o==2)
				{
            		printf("Fim do programa.");//fecha o programa todo
            		break;
        		} 
		
				
		}
		
			
		else if(m == 3)
        {
            printf("Fim do programa.");
            break;
        } //fecha o programa todo
	}
}	
