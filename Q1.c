#include <stdio.h>
#include "momiq.h"
int main() {
    int n1;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    int result = parImpar(n1);
    if (result == 1)
    {
        printf("O numero e par.");
    }
    else 
    {
        printf("O numero e impar.");
    }
    
    return 0;
}