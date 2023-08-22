// mostra as casas do número
#include <stdio.h>
#include <stdlib.h>

void aux(int a, int *milhar, int *centena, int *dezena, int *unidade) {
    *milhar = a / 1000;
    *centena = (a / 100) % 10;
    *dezena = (a / 10) % 10;
    *unidade = a % 10;
}

int main() {
    int a, milhar, centena, dezena, unidade;
    printf("Digite um número inteiro de quatro dígitos: ");
    scanf("%d", &a);
    aux(a, &milhar, &centena, &dezena, &unidade);
    printf("Milhar: %d\nCentena: %d\nDezena: %d\nUnidade: %d\n", milhar, centena, dezena, unidade);
    return 0;
}