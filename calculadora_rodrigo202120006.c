




#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
#include <math.h>
#include<string.h>

main(void) {
	system ("chcp 1252 > nul");
	fflush(stdin);
	
	int fnumber=0, snumber=0, op=0, res=0;
	//Calculadora simples de ad��o, subtra��o, divis�o, e multiplica��o. (+ - / *)

	printf("_________________________________________________________________________\n");
	printf("\nRodrigo Lima Bandeira, n�mero da matricula: 202120006.");
	printf("\n_________________________________________________________________________\n");
	system("pause");
	system("cls");
	printf("\n_________________________________________________________________________");
	printf("\n-------------------------------------------------------------------------\n");
	while(op != 99){
		system("cls");
		printf("\n_________________________________________________________________________");
		printf("\nCALCULADORA DE NUMEROS INTEIROS...\n");
		printf("-------------------------------------------------------------------------\n");
		printf("Escolha uma op��o abaixo:\n");
		printf("\n 1 - Somar:\n 2 - Subtrair:\n 3 - Dividir:\n 4 - Multiplicar\n 99 - Sair: ");
		printf("\n_________________________________________________________________________\n");
		printf("Digite um dos n�meros: ");
		scanf("%i", &op);
		
		
		
		switch (op){
			
			case 1:{
				system("cls");
				printf("\n_________________________________________________________________________");
				printf("\nAD��O\n");
				printf("-------------------------------------------------------------------------\n");
				printf("Digite o primeiro n�mero:\n");
				scanf("%i", &fnumber);
				printf("Digite o segundo n�mero:\n");
				scanf("%i", &snumber);
				res = fnumber+snumber;
				printf("A soma entre %i e %i � igual a %i.\n", fnumber, snumber, res);
				printf("-------------------------------------------------------------------------\n");
				printf("_________________________________________________________________________\n");						
				system("pause"); 
				break;
			}
			
			case 2:{
				system("cls");
				printf("\n_________________________________________________________________________");
				printf("\nSUBTRA��O\n");
				printf("-------------------------------------------------------------------------\n");
				printf("Digite o primeiro n�mero:\n");
				scanf("%i", &fnumber);
				printf("Digite o segundo n�mero:\n");
				scanf("%i", &snumber);
				res = fnumber-snumber;
				printf("A subtra��o entre %i e %i � igual a %i.\n", fnumber, snumber, res);
				printf("-------------------------------------------------------------------------\n");
				printf("_________________________________________________________________________\n");						
				system("pause"); 
				break;
			}
			
			case 3:{
				system("cls");
				printf("\n_________________________________________________________________________");
				printf("\nDIVIS�O\n");
				printf("-------------------------------------------------------------------------\n");
				printf("Digite o primeiro n�mero:\n");
				scanf("%i", &fnumber);
				printf("Digite o segundo n�mero:\n");
				scanf("%i", &snumber);
					while(snumber==0){
						printf("-------------------------------------------------------------------------\n");
						printf("                               _ERROR_");
						printf("\n-------------------------------------------------------------------------\n");
						printf("\n");
						printf("\nN�o existe divis�o por zero...\nDigite outro n�mero: ");
						scanf("%i", &snumber);
					}
				  		res = fnumber/snumber;
						printf("A divis�o de %i e %i � igual a %i.\n", fnumber, snumber, res);
						printf("-------------------------------------------------------------------------\n");
						printf("_________________________________________________________________________\n");
						system("pause"); 
				break;
			}
			case 4:{
				system("cls");
				printf("\n_________________________________________________________________________");
				printf("\nMULTIPLICA��O\n");
				printf("-------------------------------------------------------------------------\n");
				printf("Digite o primeiro n�mero:\n");
				scanf("%i", &fnumber);
				printf("Digite o segundo n�mero:\n");
				scanf("%i", &snumber);
				res = fnumber*snumber;
				printf("A multiplica��o de %i e %i � igual a %i .\n", fnumber, snumber, res);
				printf("-------------------------------------------------------------------------\n");
				printf("_________________________________________________________________________\n");
				system("pause"); 
				break;
				
			}
			
			default:{
				op != 99;
				break;
			}
			
		} 
				
	}
	system("cls");
	printf("_________________________________________________________________________\n");
	printf(" \n                        _PROGRAMA_ENCERRADO_\n");
	printf("_________________________________________________________________________\n");	
getch();
}
