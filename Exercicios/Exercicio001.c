// troca variaveis de lugar
#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    printf("Valor a = %d, valor b = %d\n", a, b);
    troca(&a, &b);
    printf("Valor a trocado = %d, valor b trocado = %d", a, b);
}