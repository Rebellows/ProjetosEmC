// inverte um nome
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nome[99];
    int i;
    printf("Digite um nome: ");
    scanf("%s", nome);
    printf("O nome ao contrário é");
    for (i = strlen (nome) - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    printf("\n");
    return 0;
}