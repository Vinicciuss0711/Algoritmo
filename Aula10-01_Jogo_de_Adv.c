#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
11/09/2025
Jogo de Adivinhação
*/

int main(){
    int n;
    int x;

    printf("Digite o numero N: ");
    scanf("%d",&n);

    do{
        printf("\nTente adivinhar o numero: ");
        scanf("%d",&x);

        if(x<n){
             printf("O numero correto e maior.");
        }else if(x>n){
             printf("O numero correto e menor.");
        }

    }while(x!=n);
    
    printf("Voce acertou o numero!");

    return 0;
}