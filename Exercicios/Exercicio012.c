// Exercicio011, Gabriel Dorneles Rebello (T011), verifica se a palavra recebida é palindromo, 06/08/23
#include <stdio.h>
#include <string.h>
#define MAX 100
int palindromo(char *palavra);

int palindromo(char *palavra) {
    char invpalavra[MAX], i, j;
    for (i = strlen (palavra) - 1, j = 0; i >= 0; i--, j++) {
      invpalavra[j] = palavra[i];
    }
    invpalavra[i] = '\0';
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
