#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>

char nome[99];
char c;
int valor, num, v = 0, produto = 1, soma = 0, sub = 0, divi = 0;

int main() {
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Olá %s, o que deseja fazer?\n [1] Calculadora\n [2] Benção\nDigite aqui: ", nome);
    scanf("%d", &valor);
    if (valor == 1) {
        printf("Certo, você deseja usar a calculadora. Qual das opções deseja fazer?\n [1] Adição        | [7] Equação de segundo grau\n [2] Subtração     | [8] Fatorial\n [3] Divisão       | [9] Geometria plana\n [4] Multiplicação | [10]\n [5] Potenciação   | [11]\n [6] Radiciação    | [12]\nDigite aqui: ");
        scanf("%d", &num);
        if (num == 4) {
            printf("Entendido, vamos multiplicar.\n");
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
            produto *= v;          
            }
            printf("O resultado obtido ao efetuar a multiplicação é: %d", produto); 
            return 0; 
        }
        if (num == 1) {
            printf("Entendido, vamos somar. \n");
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
            soma += v;          
            }
            printf("O resultado obtido ao efetuar a soma é: %d", soma); 
            return 0; 
        }
        if (num == 2) {
            printf("Entendido, vamos subtrair.\n");
            printf("Primeiro, digite o valor inicial: ");
            scanf("%d", &sub);
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
            sub -= v;          
            }
            printf("O resultado obtido ao efetuar a subtração é: %d", sub); 
            return 0; 
        }
        if (num == 3) {
            printf("Entendido, vamos dividir.\n");
            printf("Primeiro, digite o valor inicial: ");
            scanf("%d", &divi);
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
                if (v == 0) {
                    printf("Divisão por 0 não existe.\n");
                    break;
                }
            divi /= v;          
            }
            printf("O resultado obtido ao efetuar a divisão é: %d", divi); 
            return 0;
        }
        if (num == 5) {
            printf("Entendido, faremos potenciação!\n");
            float a, b, c;
            printf("Digite um número a ser elevado: ");
            scanf("%f", &a);
            printf("Digite o seu expoente: ");
            scanf("%f", &b);
            c = pow(a, b);
            printf("O resultado de %.1f^%.1f é aproximadamente: %.1f", a, b, c);
        }
        if (num == 6) {
            float b, i, r;
            printf("Certo, vamos calcular raízes!\n");
            printf("Digite o valor a aplicar a raiz: ");
            scanf("%f", &b);
            printf("Digite o índice da raiz: ");
            scanf("%f", &i);
            r = pow(b, 1/i);
            printf("O valor de %.1f em uma raíz de índice %.1f é aproximadamente: %.1f", b, i, r);
            return 0;
        }
        if (num == 7) {
            float a, b, c, d, x1, x2;
            printf("Calculadora de equações do segundo grau!\n");
            printf("Valor de a: ");
            scanf("%f", &a);
            printf("Valor de b: ");
            scanf("%f", &b);
            printf("Valor de c: ");
            scanf("%f", &c);
            d = (pow(b, 2)-4*a*c);
            x1 = (-b+sqrt(d))/(2*a);
            x2 = (-b-sqrt(d))/(2*a);
            if (d < 0) {
                printf("A equação não possui raízes reais.");
                return 0;
            }
            if (d == 0) {
                printf("A equação possui duas raízes de mesmo valor, sendo ele aproximadamente %.1f", x1);
                return 0;
            }
            if (d > 0) {
                printf("A equação possui duas raízes distintas, sendo elas aproximadamente %.1f e %.1f", x1, x2);
                return 0;
            }
        }
        if (num == 8) {
            int fat, n;
            printf("Calculadora de fatorial!\n");
            printf("Insira um valor para o qual deseja calcular seu fatorial: ");
            scanf("%d", &n);
            for(fat = 1; n > 1; n = n - 1)
            fat = fat * n;
            printf("Fatorial calculado: %d", fat);
            return 0;
        }
        if (num == 9) {
            float e, l, a, p, b, h, dg, dp, d, bg, bp, pi, la, c, r;
            printf("Geometria plana, então.\n");
            printf("Escolha a forma:\n [1] Quadrado\n [2] Retângulo\n [3] Losango\n [4] Triângulo\n [5] Trapézio\n [6] Círculo\nDigite aqui: ");
            scanf("%f", &e);
            if (e == 1) {
                printf("Certo, quadrados.\n");
                printf("Valor do lado: ");
                scanf("%f", &l);
                a = l * l;
                p = l * 4;
                printf("A área do quadrado é %.1f e o perímetro é %.1f.", a, p);
                return 0;
            }
            if (e == 2) {
                printf("Certo, retângulos.\n");
                printf("Valor da base: ");
                scanf("%f", &b);
                printf("Valor da altura: ");
                scanf("%f", &h);
                a = b * h;
                p = (b + h) * 2;
                printf("A área do retângulo é %.1f e o perímetro é %.1f.", a, p);
                return 0;
            }
            if (e == 3) {
                printf("Certo, losangos.\n");
                printf("Valor da diagonal maior: ");
                scanf("%f", &dg);
                printf("Valor da diagonal menor: ");
                scanf("%f", &dp);
                printf("Valor do lado: ");
                scanf("%f", &l);
                a = (dg * dp) / 2;
                p = l * 4;
                printf("A área do losango é %.1f e o perímetro é %.1f.", a, p);
                return 0;
            }
            if (e == 4) {
                printf("Certo, triângulos.\n");
                printf("Valor da base: ");
                scanf("%f", &b);
                printf("Valor da altura: ");
                scanf("%f", &h);
                a = (b * h) / 2;
                printf("A área do triângulo é %.1f e o perímetro é a soma dos três lados.", a);
                return 0;
            }
            if (e == 5) {
                printf("Certo, trapézios.\n");
                printf("Valor da base maior: ");
                scanf("%f", &bg);
                printf("Valor da base menor: ");
                scanf("%f", &bp);
                printf("Valor da altura: ");
                scanf("%f", &h);
                a = (bg + bp) * h / 2;
                pi = bg - bp;
                la = sqrt(pi * pi + h * h);
                p = la * 2 + bg + bp;
                printf("A área do trapézio é %.1f e o perímetro é %.1f.", a, p);
                return 0;
            }
            if (e == 6) {
                printf("Certo, círculos.\n");
                printf("Valor do diâmetro: ");
                scanf("%f", &d);
                r = d / 2;
                c = 2 * 3.14 * r;
                a = 3.14 * (r * r);
                printf("A área do círculo é %.1f e a circunferência é %.1f.", a, c);
                return 0;
            }
            else {
                printf("Valor digitado é inválido.");
                return 0;
            }
        }
        else {
            printf("O valor digitado não é válido.");
        }
    }
    if (valor == 2) {
        printf("%s, Deus te abençoe.\n", nome);
            srand(time(NULL));
        int ale = rand() % 5;
        if (ale == 0) {
            printf("'Não fui eu que ordenei a você? Seja forte e corajoso! Não se apavore nem desanime, pois o Senhor, o seu Deus, estará com você por onde você andar.'\n- Josué 1:9");
            return 0;
        }
        if (ale == 1) {
            printf("'Eu disse essas coisas para que em mim vocês tenham paz. Neste mundo vocês terão aflições; contudo, tenham ânimo! Eu venci o mundo.'\n- João 16:33");
            return 0;
        }
        if (ale == 2) {
            printf("'Sabemos que Deus age em todas as coisas para o bem daqueles que o amam, dos que foram chamados de acordo com o seu propósito.'\n- Romanos 8:28");
            return 0;
        }
        if (ale == 3) {
            printf("'Honra teu pai e tua mãe, a fim de que tenhas vida longa na terra que o Senhor,o teu Deus, te dá.'\n- Êxodo 20:12");
            return 0;
        }
        if (ale == 4) {
            printf("'Venham a mim, todos os que estão cansados e sobrecarregados, e eu darei descanso a vocês.'\n- Matheus 11:28");
            return 0;
        }
    }
    else if (valor != 1 && valor != 2) {
        printf("O valor digitado não é válido.");
    }
}
