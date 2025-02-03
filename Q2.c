#include <stdio.h>
#include "momiq.h"
int main() {
    int n1;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    int result = verifNum(n1);
    if (result == 1)
    {
        printf("O numero e positivo.");
    }
    else if (result == -1)
    {
        printf("O numero e negativo.");
    }
    else
    {
        printf("O numero e zero.");
    }

    return 0;
}