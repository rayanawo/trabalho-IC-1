#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main()
{
		system("color 8F");
		setlocale(LC_ALL,"Portuguese");
	
	
	int m=0; //determina qual op��o do menu principal foi escolhida pelo usu�rio


	int op; //determina qual op��o do menu secund�rio foi escolhida pelo usu�rio
	int i; //contador
	int menu = 1; //serve para manter o menu aberto 
	double mediaArit = 0; //representa a m�dia aritm�tica simples
	double mediaPond = 0; //representa a m�dia ponderada
	double desvio = 0; //representa o desvio pad�o
	double variancia = 0; //representa a vari�ncia
	double valorMa; //representa o maior valor entre os n�meros
	double valorMe; //representa o menor valor entre os n�meros
    double numeros[5]; //vetor que armazena os num�ros que ser�o usados
	double pesos[5]; //vetor que armazena os pesos da m�dia aritm�tica
	double sub[5]; //vetor que armazena dados para o c�lculo da vari�ncia
    double somaNum = 0, somaPeso = 0; 
    
    
    int a; //n�mero a ser adivinhado
	int k; //palpite do jogador
	int j=0; //contador de vezes que o jogador tentou adivinhar
	int o; //determina qual op��o foi escolhida
 
	while(1)
	{
		{	
			system("color 8F");
			printf("Esse programa est� dividido em duas partes. Voc� pode selecionar uma delas ou fechar o programa.\n");
			printf("\nSelecione a op��o desejada:\n");
			printf("\n\t1 - C�lculo das m�dias\n");
			printf("\n\t2 - Jogo descubra o n�mero\n");
			printf("\n\t3 - Fechar o programa\n");
			printf("\nSua escolha �:\t");
			scanf("%d", &m);
			//system("cls");
		}

		if(m==1) //abre programa 1
		{
			while (menu != 0)
    		{	
    			system("color 5F");
				printf("\n\nEsse programa tem como objetivo fazer o c�lculo de diversos tipos de m�dia.\n");
        		printf("\nSelecione a op��o desejada:\n");
        		printf("\n\t1 - Digitar n�meros\n");
        		printf("\n\t2 - M�dia aritm�tica simples\n");
        		printf("\n\t3 - M�dia ponderada\n");
        		printf("\n\t4 - Desvio padr�o\n");
        		printf("\n\t5 - Maior n�mero\n");
        		printf("\n\t6 - Menor n�mero\n");
        		printf("\n\t7 - Voltar ao menu principal\n");
        		printf("\n\t8 - Fechar o programa\n");
        		printf("\nSua escolha �:\t");
        		scanf("%d", &op);

        
        		if(op==1) //apenas para inserir os n�meros que ser�o usados nos c�lculos das m�dias
				{
            		printf("\n\tdigite 5 n�meros em sequ�ncia:\n");

            		for (i = 0; i < 5; i++)
            		{
                		printf("\t");
                		scanf("%lf", &numeros[i]);
            		}
				}
        	
				else if(op==2) //faz o c�lculo da m�dia aritm�tica
				{
            		somaNum = 0;

            		for(i = 0; i < 5; i++)
                		somaNum = somaNum + numeros[i]; //somando todos os n�meros que foram inseridos
            		

            		mediaArit = somaNum/5;
	
            		printf("\n\tm�dia aritm�tica simples = %.2lf", mediaArit);
            		printf("\n");
            	}


        		else if(op==3) //faz o c�lculo da m�dia ponderada
				{
            		printf("\n\tinsira o peso de cada n�mero:\n");

            		for(i = 0; i < 5; i++)
                	{
						printf("\tpeso de %.2lf:    ", numeros[i]);
                		scanf("%lf", &pesos[i]);
            		}

            		somaNum = 0; 

            		for (i = 0; i < 5; i++)
                    	somaNum = somaNum + (numeros[i] * pesos[i]); // somat�ria da multiplica��o de todos os n�meros por seus pesos

            		somaPeso = 0;

            		for (i = 0; i < 5; i++)
                		somaPeso = somaPeso + pesos[i]; // somat�ria de todos os pesos

            		mediaPond = (somaNum)/(somaPeso);

            		printf("\n\tmedia ponderada = %.2lf", mediaPond);
            		printf("\n");
            	}

        		else if(op==4) //calcula o desvio padr�o
        		{
            		somaNum = 0;

            		for (i = 0; i < 5; i++)
                		somaNum = somaNum + numeros[i]; //somando todos os n�meros que foram inseridos
            	

            		mediaArit = somaNum / 5;

            		for(i = 0; i < 5; i++)
                		sub[i] = ((numeros[i] - mediaArit) * (numeros[i] - mediaArit)); /* calcula o quadrado da diferen�a entre o n�mero
                                                                                    e a m�dia aritm�tica */
            

            		variancia = (sub[0] + sub[1] + sub[2] + sub[3] + sub[4])/5;

            		desvio = sqrt(variancia); // desvio padr�o � definido como a raiz quadrada da vari�ncia

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
            		valorMe = numeros[0]; // primeiro valor � armazenado como o menor

            		for (i = 1; i < 5; i++)
            		{
                		if (numeros[i] < valorMe) // compara��o entre todos os valores para descobrir qual o menor
                    		valorMe = numeros[i]; // o menor n�mero � sempre armazenado como novo valor da vari�vel
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
            		break; //quebra a condi��o do while
        			 
			}
			
			if(op==8)
                {
           			printf("Fim do programa.");//fecha o programa todo
           			break;
        		}	
		}
	
	
	
		else if(m==2) //abre programa 2
		{
			
			printf("O seu objetivo nesse jogo � tentar adivinhar o n�mero, entre zero e 100, que foi sorteado pelo computador. Boa sorte.\n\n");
	
	
			printf("\nDigite seu palpite:\t");
			scanf("%d", &k);
				j++;
	
			
			srand(time(NULL)); //d� a possibilidade do n�mero sorteado ser qualquer um entre 0 e 100 
			a=rand() % 100; //sorteia um n�mero entre 0 e 100

			do
			{	
				if(k>a)
				{
					j++;
					
					system("color 4F");
					
					printf("Voc� errou. :(\n");
					printf("\nO n�mero procurado � menor que o palpite.\n");
					printf("\nDigite outro palpite: \t");
					scanf("%d",&k);
				}
	
				else if(k<a)
				{
					j++;
					
					system("color 4F");
					
					printf("Voc� errou. :(\n");
					printf("\nO n�mero procurado � maior que o palpite\n");
					printf("\nDigite outro palpite: \t");
					scanf("%d",&k);
				}
			}while(a!=k);
		
		
			if(k==a)
			{
				system("color 2F");
				
				printf("Parab�ns, o n�mero foi encontrado!!");
				printf("\n O n�mero de tentativas foi %d", j);	
			}
			
				printf("\n\n\tAgora que voc� ganhou o jogo, selecione a op��o desejada:");
				printf("\n\t\t1 - Voltar ao menu principal");
				printf("\n\t\t2 - Fechar o programa");
				printf("\nSua escolha �:\t");
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
