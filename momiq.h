/* 1. Faça uma função que recebe um valor inteiro e verifica se o valor é par. A função deve
retornar 1 se o número for par e 0 se for ímpar. */

int parImpar(int num) {
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* 2. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo
ou zero. A função deve retornar 1 para valores positivos, -1 para negativos e 0 para o
valor 0. */

int verifNum (int num) {
    if (num == 0)
    {
        return 0;
    }
    else if (num > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

/* 3. Escreva uma Função que receba dois números inteiros retorne o menor número. */
int menorNum (int n1, int n2) {
    if (n1 < n2)
    {
        return  n1;
    }
    else
    {
        return n2;
    }
}

/* 4. Escreva uma função potência (base, expoente) que, quando chamada, retorna
baseexpoente. Por exemplo, potencia (3,4) deve retornar 81. Assuma que expoente é 
Um inteiro maior ou igual a 1. (Basta escrever o código da função potencia) */

int potencia (int base, int expoente) {
    int resultado;
    resultado = base;
    for (int i = 1; i < expoente; i++)
    {
       resultado *= base;
    }

    return resultado;
    
}

/* 5. Escreva um programa em C que leia 5 valores inteiros e imprima para cada um deles o
seu correspondente valor absoluto. (Valor absoluto é o valor de um número
independente do seu sinal positivo ou negativo. Ex.: Valor absoluto de 1 é 1; Valor
absoluto de -50 é 50). Pra obter o valor absoluto crie a função Absoluto com as
seguintes especificações:
a. Nome: Absoluto
b. Descrição: Recebe um número e retorna seu valor absoluto
c. Entrada: int n
d. Saída: (int) O valor absoluto de n */
#include <stdio.h>

int absoluto (int n) {
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

/* 6. */
void menu () {
    printf("\nA - Calcular Media Aritmetica\nP - Calcular Média Ponderada\n");
}
float mAritmetica (float n1, float n2, float n3) {
    int mediaA = (n1+n2+n3)/(float)3;
    return mediaA;
} 