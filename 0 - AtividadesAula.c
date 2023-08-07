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
        printf("Isso não é um triângulo.");
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
///// verifica se a palavra recebida é palindromo
#include <stdio.h>
#include <string.h>
#define MAX 100
int palindromo(char *palavra);

int palindromo(char *palavra) {
    char invpalavra[MAX];
    int i, j;
    for (i = strlen (palavra) - 1, j = 0; i >= 0; i--, j++) {
      invpalavra[j] = palavra[i];
    }
    invpalavra[j] = '\0';
    if (strcmp(palavra, invpalavra) == 0){
      return 1;
    }
    else {
      return 0;
    }
    
}
int main() {
    char palavra[MAX+1];
    fgets(palavra, MAX, stdin);
    int tam = 0;
    while ( palavra[tam] != '\0' ) ++tam;
    if ( tam > 0 && palavra[tam-1] == '\n' ) --tam;
    palavra[tam] = '\0';
    if ( palindromo(palavra) == 1) printf("PALINDROMO\n");
    else printf("-\n");
    return 0;
}
///// conta a quantidade de casas com peao ou dama dos dois jogadores
#include <stdio.h>
#define CASAS 64

struct casa {
    int cor;
    int jogador;
    char peca;
};

int conta_casas(struct casa *tab, int num_casas, int jogador, char peca);

int conta_casas(struct casa *tab, int num_casas, int jogador, char peca) {
    int contador = 0;
    for (int i = 0; i < num_casas; i++) {
        if (tab[i].jogador == jogador && tab[i].peca == peca) {
                contador++;
        }
    }
    return contador;
}

int main() {
    int i;
    struct casa damas[CASAS];
    for (i=0; i<CASAS; ++i)
        scanf("%d %d %c", &(damas[i].cor), &(damas[i].jogador), &(damas[i].peca) );
    int p1 = conta_casas((struct casa *)damas,CASAS,1,'P');
    int d1 = conta_casas((struct casa *)damas,CASAS,1,'D');
    int p2 = conta_casas((struct casa *)damas,CASAS,2,'P');
    int d2 = conta_casas((struct casa *)damas,CASAS,2,'D');
    printf("%d %d %d %d\n", p1, d1, p2, d2);
    return 0;
}
///// cria um triangulo indo de 1 até o numero recebido
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
///// diz a qual seculo o ano recebido pertence
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
///// recebe 30 numeros e verifica se a soma de dois proximos resulta no seguinte
#include <stdio.h>
#define n 30

int reverso(int vetor[n]) {
    int cont = 0;
    for (int i = 0; i < n - 2; i++) {
        if (vetor[i] + vetor[i+1] == vetor[i+2]) {
            cont++;
        }
    }
    printf("%d", cont);
}

int main() {
    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    reverso(vetor);
}
