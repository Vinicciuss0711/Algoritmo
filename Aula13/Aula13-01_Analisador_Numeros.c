/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
25/09/2025
Analisador de Numeros
*/

#include <stdio.h>
#define TAM 10

int main(){
    int inteiro[TAM], maior=0, menor=999999999, impares=0, pares=0, soma=0, media;

    printf("Digite 10 numeros inteiros: ");

    for (int i = 0; i < TAM; i++){
        scanf("%d",&inteiro[i]);
    }

    printf("\nOs numeros sao: ");

    for (int i = 0; i < TAM; i++){
        printf("%d",inteiro[i]);
        
        //para não colocar a virgula no último número
        if(i!=TAM-1){
            printf(", ");
        }

        //maiores e menores
        if(inteiro[i]>maior){
            maior=inteiro[i];
        }
        if(inteiro[i]<menor){
            menor=inteiro[i];
        }

        //pares e impares
        if(inteiro[i]%2==0){
            pares++;
        } else{
            impares++;
        }

        soma += inteiro[i]; //soma = soma + inteiro[i];
    }

    media = soma/TAM;
    
    printf("\nO maior numero e: %d",maior);

    printf("\nO menor numero e: %d",menor);

    printf("\nA quantidade de numeros pares e: %d",pares);

    printf("\nA quantidade de numeros impares e: %d",impares);    
    
    printf("\nA media aritmetica dos numeros e: %d",media);

    return 0;
}