//==============Libs==============
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//==============Headers==============
#include "utils/utils.h"
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
	int opcao = 1;

	WaitForEnter();

	while(opcao!=0){
		switch(opcao = ReadOption()){
			case 1:
				ClearScreen();
				ShowSectionMessage(1);
				section1();
				continue;

			case 2:
				ClearScreen();
				ShowSectionMessage(2);
				section2();
				continue;

			case 3:
				ClearScreen();
				ShowSectionMessage(3);
				section3();
				continue;

			case 4:
				ClearScreen();
				ShowSectionMessage(4);
				section4();
				continue;
			
			case 5:
				ClearScreen();
				ShowSectionMessage(5);
				section5();
				continue;
			
			case 0:
				ClearScreen();
				ShowExitMessage();
				break;
			default://caso o usuario digite uma seccao invalida
				ClearScreen();
				ShowInvalidOptionMessage();
				continue;
		}

	}
	return (0);
}