/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
18/09/2025
Vetores e Notas
*/

#include <stdio.h>
#define TAM 5 // TAM = Tamanho

int main(){
    float nota[TAM], total, soma, media;

    for (int i = 0; i < TAM; i++){
        printf("\nInsira um valor: ");
        scanf("%f",&nota[i]);
    }
    
    printf("\nAs notas armazenadas sao: ");
    for (int i = 0; i < TAM; i++){
        printf("%0.2f ",nota[i]);
        soma+= nota[i]; 
        /*
        "soma+= notas[i]" é a mesma coisa que
        soma = notas[i] + soma
        */
    }
    media = soma/TAM;
    printf("\nA media e: %0.2f",media);
    
    printf("\nFim do programa!");

    return 0;
}