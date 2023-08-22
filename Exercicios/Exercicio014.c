// Exercicio013, Gabriel Dorneles Rebello (T011), cria um triangulo indo de 1 até o numero recebido, 06/08/23
#include <stdio.h>

int piramide(int n){
    if (n >= 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    else {
        return 0;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
}