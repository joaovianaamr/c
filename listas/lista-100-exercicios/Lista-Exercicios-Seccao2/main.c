//==============Libs==============
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//==============Headers==============
#include "sections/section2.h"


//==============Constants==============
#define pi 3.14159265359

/** 
 * @author joao vitor viana 204
 * @author nicolas 204
 * @author vitor 204
 * @author pedro arthur 205
 * @brief Exercícios seccao 2 a 5 lista 00
 */

int main (){
	int opcao = 2;

	while(opcao!=0){
		switch(ReadOption()){
			case 2:  //faz a seccao 2
				printf("iniciando a seccao 2...\n\n"); 
				section2();
				continue;

			default://caso o usuario digite uma seccao invalida
				printf("digite uma opcao valida \n\n");
		}

	}
	return (0);
}

void ShowMenuMessage(void){
	printf("digite qual a seccao desejada (2 a 5), digite para sair 0 \n");
}

int ReadOption(void){
	int option;
	ShowMenuMessage();
	scanf("%d", &option);
	return option;
}