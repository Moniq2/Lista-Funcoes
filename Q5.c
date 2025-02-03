#include <stdio.h>
#include "momiq.h"
int main() {
    int num;
    printf("Digite 5 valores \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        printf("%d\n\n", absoluto(num));

    }
    
    return 0;
}