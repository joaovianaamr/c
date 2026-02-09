#ifndef SECTION2_H
#define SECTION2_H

#include <stdbool.h>

// ===== STRING FUNCTIONS =====

/**
 * Aloca e lê uma string do usuário
 * @param tamString Tamanho máximo da string
 * @return Ponteiro para a string alocada (deve usar free() após uso)
 */
char* GetString(int tamString);

/**
 * Inverte e exibe uma string para trás para frente
 */
void InverseString(void);

/**
 * Exibe uma frase
 * @param str Ponteiro para a string
 */
void ShowPharse(char *str);

/**
 * Exibe o comprimento de uma string
 * @param str Ponteiro para a string
 */
void ShowLength(char *str);

/**
 * Exibe uma frase e seu comprimento
 */
void ShowPhraseAndLength(void);

/**
 * Conta e exibe o número de espaços em uma string
 * @param str Ponteiro para a string
 */
void CountSpaces(char *str);

/**
 * Conta e exibe o número de 'a' (maiúsculas e minúsculas) em uma string
 * @param str Ponteiro para a string
 */
void CountAces(char *str);

// ===== MAIN MENU =====
// ===== LOGICAL OPS =====
/**
 * Lê dois inteiros e exibe comparações lógicas (AND, OR, NOT, XOR).
 * Nome mais descritivo: imprime as comparações e seus resultados.
 */
void PrintLogicalComparisons(void);

// Funções que imprimem comparações separadas por categoria
void PrintAndComparisons(int num1, int num2);
void PrintOrComparisons(int num1, int num2);
void PrintNotComparisons(int num1, int num2);
void PrintXorComparisons(int num1, int num2);

/**
 * Menu principal para exercícios 13-24
 */
void MenuSection2(void);

// ===== I/O & UTIL =====
/**
 * Lê um inteiro do usuário
 */
int ReadNum(void);

/**
 * Lê os 3 lados do triângulo (aloca e retorna int[3])
 * O chamador deve liberar com free()
 */
int* ReadTriangleSides(void);

/**
 * Verifica se três lados formam um triângulo
 */
bool CanFormTriangle(int a, int b, int c);

/**
 * Utilitários de verificação e conversão
 */
void DivisibilityCheck(int num1, int num2);
void MultiplyCheck(int num1, int num2);
void Base16ToBase10(int num16);
void isEven(int num);
void numeroPositivoNegativoZero(int num);

#endif
