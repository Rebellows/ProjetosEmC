// Exercicio014, Gabriel Dorneles Rebello (T011), diz a qual seculo o ano recebido pertence, 06/08/23
#include <stdio.h>

int seculo(int ano) {
    if (ano > 0) {
        int sec;
        sec = ano / 100;
        if (ano % 100 == 0) {
            printf("%d", sec);
        }
        else {
            printf("%d", sec+1);
        }
    }
    else {
        return 0;
    }
}

int main() {
    int ano;
    scanf("%d", &ano);
    seculo(ano);
}