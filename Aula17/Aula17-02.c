/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
02/10/2025
Função Média
*/

#include <stdio.h>
#include <string.h>

float calculoMedia(float v1, float v2, float v3){
    return(v1+v2+v3)/3;
}

int main(){
    float a,b,c;
    float media;

    printf("Digite o valor a: ");
    scanf("%f",&a);
    printf("Digite o valor b: ");
    scanf("%f",&b);
    printf("Digite o valor c: ");
    scanf("%f",&c);

    media = calculoMedia(a,b,c);

    printf("A media e: %f",media);
    printf("\nA media e: %f",calculoMedia(a,b,c));
    

    return 0;
}