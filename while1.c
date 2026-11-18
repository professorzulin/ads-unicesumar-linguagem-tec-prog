#include <stdio.h>

int main(){

    int i, maximo;
    printf("Digite o número para verificação do While: "); 
    scanf("%d", &i);
    printf("Digite o número máximo para o While: ");
    scanf("%d", &maximo);

    while (i <= maximo){
        printf("%d ", i);
        i++;
    }

    return 0;
}