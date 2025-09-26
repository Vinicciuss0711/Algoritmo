/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
25/09/2025
Analisador de Numeros
*/

#include <stdio.h>
#define TAM 3

int main(){
    int inteiro[TAM], maior=0, menor=999999999;

    printf("Digite 10 numeros inteiros: ");

    for (int i = 0; i < TAM; i++){
        scanf("%d",&inteiro[i]);
    }

    printf("\nOs numeros sao: ");

    for (int i = 0; i < TAM; i++){
        printf("%d",inteiro[i]);
        
        if(i!=TAM-1){
            printf(", ");
        }

        if(inteiro[i]>maior){
            maior=inteiro[i];
        }
        
        if(inteiro[i]<menor){
            menor=inteiro[i];
        }

    }


    
    printf("\nO maior numero e: %d",maior);

    printf("\nO menor numero e: %d",menor);










    return 0;
}