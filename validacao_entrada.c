#include <stdio.h>

int main(){

    float nota = -1;
    while (nota < 0 || nota > 10){
        printf("Digite a nota (0 a 10): ");
        scanf("%f", &nota); 
        printf("A nota digitada %.2f é válida.\n", nota);
    }

    return 0;
}