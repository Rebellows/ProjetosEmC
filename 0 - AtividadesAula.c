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
/////
#include <stdio.h>
#include <stdlib.h>

int auxa(int n) {
    return n / 2;
}
int auxb(int n) {
    return n * 3 + 1;
}
int main() {
    int n, a, b;
    printf("Escreva um número inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        a = auxa(n);
        printf("Valor novo: %d", a);
    }
    if (n % 2 != 0) {
        b = auxb(n);
        printf("Valor novo: %d", b);
    }
    return 0;
}
