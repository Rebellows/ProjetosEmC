// calculadora com aux
#include <stdio.h>
#include <stdlib.h>

int aux(int a, int b, char op) {
    int temp;
    if (op == 'A' || op == 'a') {
        temp = a + b;
    }
    if (op == 'S' || op == 's') {
        temp = a - b;
    }
    if (op == 'M' || op == 'm') {
        temp = a * b;
    }
    if (op == 'D' || op == 'd') {
        temp = a / b;
    }
    return temp;
}
int main () {
    char op;
    int a, b, c;
    printf("Digite o primeiro valor a ser usado: ");
    scanf("%d", &a);
    printf("Digite o segundo valor a ser usado: ");
    scanf("%d", &b);
    printf("O que você deseja fazer?\n[A] Adição\n[S] Subtração\n[M] Multiplicação\n[D] Divisão\nDigite aqui: ");
    scanf(" %c", &op);
    c = aux(a, b, op);
    printf("\nO resultado é: %d", c);
    return 0;
}