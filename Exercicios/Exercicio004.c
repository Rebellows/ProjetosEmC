// repete uma letra n vezes
#include <stdio.h> 
#include <stdlib.h>

int aux(char s, int n) {
    int contador;
    for (contador = 1; contador <= n; contador++) {
        printf("%c", s);
    }
}
int main() {
    int n;
    char s;
    printf("Digite uma letra: ");
    scanf(" %c", &s);
    printf("Valor da repetição: ");
    scanf("%d", &n);
    aux(s, n);
    return 0;
}