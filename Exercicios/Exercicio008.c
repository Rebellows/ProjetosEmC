// calcula a área de um triangulo se houver
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valor(int lado_um, int lado_dois, int lado_tres) {
    if (lado_um >= lado_dois + lado_tres || lado_dois >= lado_um + lado_tres || lado_tres >= lado_um + lado_dois) {
        return 0;
    }
    else {
        return 1;
    }
}

int aux(int lado_um, int lado_dois, int lado_tres) {    
    int sp = ((lado_um + lado_dois + lado_tres)/2);
    int area = sqrt(sp * (sp - lado_um) * (sp - lado_dois) * (sp - lado_tres));
    return area;
}

int main() {
    int lado_um, lado_dois, lado_tres, a, b;
    printf("Digite o primeiro lado: ");
    scanf("%d", &lado_um);
    printf("Digite o segundo lado: ");
    scanf("%d", &lado_dois);
    printf("Digite o terceiro lado: ");
    scanf("%d", &lado_tres);
    a = valor(lado_um, lado_dois, lado_tres);
    if (a == 0) {
        printf("Isso não é um triângulo.");
        return 0;
    }
    else {
        b = aux(lado_um, lado_dois, lado_tres);
        printf("A área é %d", b);
        return 0;
    }
}