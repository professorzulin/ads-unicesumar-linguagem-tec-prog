#include <stdio.h>

int main(){

    int n, minimo, maximo;
    printf("Digite o número da tabuada: ");
    scanf("%d", &n);
    printf("Digite o valor mínimo: ");
    scanf("%d", &minimo);
    printf("Digite o valor máximo: ");
    scanf("%d", &maximo);
    for (int i = minimo; i <= maximo; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}