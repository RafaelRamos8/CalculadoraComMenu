#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){  
    //Para usar acentos
    setlocale(LC_ALL, "");
 
 //Programa Criado por Rafael Ramos, Taubat�, 20/01/2023.
 
    /*Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
    de 4 op��es:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
    Depois que o usu�rio escolher uma op��o, mostre o resultado da opera��o escolhida
    com os dois valores lidos.*/
    

    	//Definindo variaveis
    	float numA, numB, result1, result2, result3, result4;
    	int a;
    	
    	//Coletando dados do usu�rio
    	printf("\nDigite os valores das opera��es: ");
    	printf("\nPrimeiro valor: ");
    	scanf("%f", &numA);
    	printf("\nSegundo valor: ");
    	scanf("%f", &numB);
    	printf("\nOs valores s�o %.2f e %.2f! Qual opera��o deseja fazer?\n", numA, numB);
    	printf("Digite 1 para Somar \nDigite 2 para Subtrair \nDigite 3 para Dividir \nDigite 4 para Multriplicar  \ndigite 5 para sair! \n\n");
    	scanf("%d", &a);
    	
    	//Menu da calculadora e opera��es
    	switch(a){
    		case 1:
    			printf("\nResultado da Soma �: %.2f\n\n", numA + numB);
    			break;
    		case 2:
    			printf("\nResultado da Subtra��o �: %.2f\n\n", numA - numB);
    			break;
    		case 3:
    			printf("\nResultado da Divis�o �: %.2f\n\n", numA / numB);
    			break;
    		case 4:
    			printf("\nResultado da Multiplica��o �: %.2f\n\n", numA * numB);
    			break;
    		default:
    			printf("\nOpera��o Cancelada!\n\n");
    			break;
	}
	//Fim do programa
	system("pause");
 }
 
