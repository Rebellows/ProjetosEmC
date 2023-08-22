// conta a quantidade de vogais de uma palavra
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int quantidade_vogais(char str[]) {
    int i, tamanho = 0;
    int total = strlen(str);
    char vogais[] = "aeiouAEIOU";
    for (i = 0; i < total; i++) {
        if (strchr(vogais, str[i]) != NULL) {
            tamanho++;
        }
    }
    printf("Essa palavra tem %d vogais.", tamanho);
}

int main() {
    char str[100];
    printf("Digite algo: ");
    scanf("%s", str);
    quantidade_vogais(str);
    return 0;
}
