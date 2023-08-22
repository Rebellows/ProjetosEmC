// verifica se tal numero é primo
#include <stdio.h>
#include <stdlib.h>

int aux(int n) {
    int c, r;
    for (c = 1; c <= n; c++) {
        if (n % c == 0) {
            r++;
        }
    }
    if (r == 2) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num, a;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Número inválido.");
        return 0;
    }
    else {
        a = aux(num);
        if (a == 1) {
            printf("É primo.");
            return 0;
        }
        else {
            printf("Não é primo.");
            return 0;
        }
    }
}