#include <stdio.h>
#include "momiq.h"
int main() {
    int n1, n2, n3;
    char opc;
    printf("Digite 3 notas.\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    menu();
    scanf("%c", &opc);
    if (opc == "A")
    {
        printf("\n%f", mAritmetica(n1, n2, n3));
    }
    
    return 0;
}