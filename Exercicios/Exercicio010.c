// conta a quantidade de caracteres de uma palavra
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comprimento_string(char str[]) {
    int tamanho = 0;
    while(str[tamanho] != '\0') {
        tamanho++;
    }
    printf("Essa palavra tem %d caracteres.", tamanho);
}

int main() {
    char str[100];
    printf("Digite algo: ");
    scanf("%s", str);
    comprimento_string(str);
    return 0;
}