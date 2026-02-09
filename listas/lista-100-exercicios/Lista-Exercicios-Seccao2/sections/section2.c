#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void MenuSection2(void){
	int option=1;

	while(option!=0){
		switch(option=MenuOptions()){
			case 13:
                InverseString();
				continue;

			case 14:
				ShowPhraseAndLength();
				continue;

			case 15:
                char *phrase = GetString(80);

                if ( phrase == NULL) {
                    continue;
                }

				ShowPharse(phrase);
                CountSpaces(phrase);
                CountAces(phrase);

				continue;

			case 16:
				int inteiro;

				printf("Digite um inteiro que direi se ele eh par ou impar. ");
				printf(">> ");
				scanf("%d",&inteiro);
				
				isEven(inteiro);

				continue;

			case 17:
				printf("Digite um numero e direi se ele eh positivo, negativo ou zero. >> ");
				scanf("%d",&inteiro);
				numeroPositivoNegativoZero(inteiro);
				continue;

			case 18:
				int num1 = ReadNum();
				int num2 = ReadNum();		

				int rem = num1 % num2;

				DivisibilityCheck(num1, num2);

				continue;

			case 19:
				int num1 = ReadNum();
				int num2 = ReadNum();
				
				MultiplyCheck(num1, num2);
			
				continue;

			case 20:
				printf("Conversão de numero inteiro da base 16 para a base 10\n");
				int num16 = ReadNum();
				Base16ToBase10(num16);
				continue;

			case 21:
				PrintLogicalComparisons();
				continue;

			case 22:
			
				continue;

			case 23:

				continue;

			case 24:
				printf("condicao de existencia de um triangulo...\n");

				int *sides = ReadTriangleSides();
				if (sides == NULL) {
					printf("Erro de alocacao de memoria\n");
					continue;
				}
				if (CanFormTriangle(sides[0], sides[1], sides[2])) {
					printf("Os lados podem formar um triangulo.\n");
				} else {
					printf("Os lados nao podem formar um triangulo.\n");
				}

			case 0:
				ShowMessageComeBackMenu();
				break;
			default:
				ShowMessageInvalidOption();
				continue;


		}
	}
	ShowTraces();
 }

int MenuOptions(void){
	int option;
	printf("escolha qual programa voce quer :(13 a 24)\n");
	printf("digite 0 para sair\n");
	scanf("%d",&option);
	return option;
}

char* GetString(int tamString){
    char *str = malloc(tamString * sizeof(char));

    if ( str == NULL) {
        printf("Erro de alocacao de memoria\n");
        return NULL;
    }

    printf("Insira uma frase: ");
    setbuf(stdin,NULL);
    fgets(str,tamString,stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    char *temp = realloc(str, (len + 1) * sizeof(char));
    if (temp != NULL) {
        str = temp;
    }

    return str;
}

void InverseString(void){
    char *str = GetString(30); 

    if ( str == NULL) {
        return;
    }

    int len = strlen(str);
    printf("Sua string de tras pra frente: ");


    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    free(str);
}


void ShowPharse(char *str){
    printf("Sua frase: %s\n", str);
}

void ShowLength(char *str){
    int len = strlen(str);
    printf("Qntd de caracteres: %d\n", len-1);
}

void ShowPhraseAndLength(void){
    char *str = GetString(80);

    if ( str == NULL) {
        return;
    }

    ShowPharse(str);
    ShowLength(str);

    free(str);
}

void CountSpaces(char *str){
    int spaceCount = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ') {
            spaceCount++;
        }
    }

    printf("Numero de espacos: %d\n", spaceCount);
}

void CountAces(char *str){
    int aCount = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A') {
            aCount++;
        }
    }

    printf("Numero de 'a's: %d\n", aCount);
}

void isEven(int num) {
	if (num % 2 == 0) {
		printf("O numero eh par.\n");
	} else {
		printf("O numero eh impar.\n");
	}
}

void numeroPositivoNegativoZero(int num) {
	if (num < 0) {
		printf("O numero eh negativo.\n");
	} else if (num > 0) {
		printf("O numero eh positivo.\n");
	} else {
		printf("O numero eh zero.\n");
	}
}

int ReadNum(void){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	return num;
}

void DivisibilityCheck(int num1, int num2) {
	int rem = num1 % num2;

	if (rem == 0) {
		printf("%d eh divisivel por %d.\n", num1, num2);
	} else {
		printf("%d nao eh divisivel por %d.\n", num1, num2);
	}
}

void MultiplyCheck(int num1, int num2) {
	if (num2 % num1 == 0) {
		printf("%d e multiplo de %d.\n", num2, num1);
	} else {
		printf("%d nao e multiplo de %d.\n", num2, num1);
	}
}

void Base16ToBase10(int num16) {
	printf("O numero %d em hexadecimal eh %X em decimal.\n", num16, num16);
}

void PrintLogicalComparisons(void) {
	int num1, num2;
	printf("Digite dois numeros: ");
	if (scanf("%d %d", &num1, &num2) != 2) {
		int c;
		while ((c = getchar()) != '\n' && c != EOF) {}
		printf("Entrada invalida.\n");
		return;
	}

	PrintAndComparisons(num1, num2);
	PrintOrComparisons(num1, num2);
	PrintNotComparisons(num1, num2);
	PrintXorComparisons(num1, num2);
}

void PrintAndComparisons(int num1, int num2) {
	bool res1 = (num1 <= num2 && num1 == num2);
	bool res2 = (num1 != num2 && num1 < num2);

	printf("\n--- AND Comparisons ---\n");
	printf("(%d <= %d && %d == %d) -> %s\n", num1, num2, num1, num2, res1 ? "true" : "false");
	printf("(%d != %d && %d < %d) -> %s\n\n", num1, num2, num1, num2, res2 ? "true" : "false");
}

void PrintOrComparisons(int num1, int num2) {
	bool res1 = (num1 <= num2 || num1 == num2);
	bool res2 = (num1 != num2 || num1 < num2);

	printf("--- OR Comparisons ---\n");
	printf("(%d <= %d || %d == %d) -> %s\n", num1, num2, num1, num2, res1 ? "true" : "false");
	printf("(%d != %d || %d < %d) -> %s\n\n", num1, num2, num1, num2, res2 ? "true" : "false");
}

void PrintNotComparisons(int num1, int num2) {
	bool res1 = !(num1 <= num2);
	bool res2 = !(num1 != num2);

	printf("--- NOT Comparisons ---\n");
	printf("!(%d <= %d) -> %s\n", num1, num2, res1 ? "true" : "false");
	printf("!(%d != %d) -> %s\n\n", num1, num2, res2 ? "true" : "false");
}

void PrintXorComparisons(int num1, int num2) {
	bool res1 = ((num1 <= num2) ^ (num1 == num2));
	bool res2 = ((num1 != num2) ^ (num1 < num2));

	printf("--- XOR Comparisons ---\n");
	printf("((%d <= %d) ^ (%d == %d)) -> %s\n", num1, num2, num1, num2, res1 ? "true" : "false");
	printf("((%d != %d) ^ (%d < %d)) -> %s\n\n", num1, num2, num1, num2, res2 ? "true" : "false");
}

int* ReadTriangleSides(void) {
	int *sides = malloc(3 * sizeof(int));
	if (sides == NULL) {
		return NULL;
	}
	for (int i = 1; i <=3; i++){
		printf("Digite o lado %d: ", i);	
		scanf("%d", &sides[i-1]);
		printf("\n");
	}

	return sides;
}	

bool CanFormTriangle(int a, int b, int c) {
	int s1 = abs(a - b);
	int s2 = abs(a - c);
	int s3 = abs(b - c);

	return (c > s1 && c < a + b) &&
		   (b > s2 && b < a + c) &&
		   (a > s3 && a < b + c);
}

void ShowTraces(void){
	const int TAM = 5;
	for(int i = 0; i < TAM; i++) {
		printf("-=-");
	}
}

void ShowMessageComeBackMenu(void){
	printf("voltando ao menu principal....\n\n");
}

void ShowMessageInvalidOption(void){
	printf("Questao invalida  \n");
}