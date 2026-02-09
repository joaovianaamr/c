#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ShowMenuMessage(void){
	printf("digite qual a seccao desejada (2 a 5), digite para sair 0 \n");
}

int ReadOption(void){
	int option;
	ShowMenuMessage();
	scanf("%d", &option);
	return option;
}

void ShowExitMessage(void){
	printf("saindo do programa... \n");
}

void ShowInvalidOptionMessage(void){
	printf("digite uma opcao valida \n");
}

void ClearScreen(void){
	system("clear");
}

void WaitForEnter(void){
	printf("pressione enter para continuar... \n");
	while(getchar() != '\n');
}

void ShowSectionMessage(int section){
	printf("iniciando a seccao %d...\n\n", section);
}