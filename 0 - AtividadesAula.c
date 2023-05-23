///// troca variaveis de lugar
#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    printf("Valor a = %d, valor b = %d\n", a, b);
    troca(&a, &b);
    printf("Valor a trocado = %d, valor b trocado = %d", a, b);
}
///// faz algo se o número for par ou impar
#include <stdio.h>
#include <stdlib.h>

int auxa(int n) {
    return n / 2;
}
int auxb(int n) {
    return n * 3 + 1;
}
int main() {
    int n, a, b;
    printf("Escreva um número inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        a = auxa(n);
        printf("Valor novo: %d", a);
    }
    if (n % 2 != 0) {
        b = auxb(n);
        printf("Valor novo: %d", b);
    }
    return 0;
}
///// calcula o horário com base em minutos
#include <stdio.h>
#include <stdlib.h>

int hm(int minutos, int *h, int *m) {
    *m = minutos % 60;
    int temp = minutos - *m;
    *h = temp / 60;
}

int main() {
    int minutos, h, m, a;
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    a = hm(minutos, &h, &m);
    printf("%dh%dm", h, m);
}
///// repete uma letra n vezes
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
///// calculadora com aux
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
///// mostra as casas do número
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
///// verifica se tal numero é primo
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
///// calcula a área de um triangulo se houver
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
        printf("Essa porra não é um triângulo.");
        return 0;
    }
    else {
        b = aux(lado_um, lado_dois, lado_tres);
        printf("A área é %d", b);
        return 0;
    }
}
///// inverte um nome
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
///// conta a quantidade de caracteres de uma palavra
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
///// conta a quantidade de vogais de uma palavra
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
