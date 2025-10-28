/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
27/10/2025
Ponteiros
*/

#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int *p;
    int *p2;

    p=&x;
    p2=&y;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor aemazenado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    printf("Valor de y: %d\n", y);
    printf("Endereco de y: %p\n", &y);
    printf("Valor aemazenado em p2: %p\n", p2);
    printf("Valor apontado por p2: %d\n", *p2);

    return 0;
}
