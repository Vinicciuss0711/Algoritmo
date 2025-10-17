/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
02/10/2025
Função Média
*/

#include <stdio.h>
#include <math.h>

float pitagoras(float v1, float v2){
    return sqrt(pow(v1,2) + pow(v2,2));
}

int main(){
    float a,b,c;

    printf("Digite o valor do lado a: ");
    scanf("%f",&a);
    printf("Digite o valor do lado b: ");
    scanf("%f",&b);

    c = pitagoras(a,b);

    printf("A media e: %f",c);

    return 0;
}