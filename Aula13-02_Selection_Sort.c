/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
25/09/2025
Programa de ordenação de números inteiros com selection sort
*/
#include <stdio.h>
#define TAM 10

int main(){
    int inteiro[TAM], passagem; 
    /*
    A variável "passagem" serve como um "save" para o numero inteiro durante a troca de vetores
    */

    //Leitura dos números inteiros
    printf("Digite 10 numeros inteiros: ");
    for (int i = 0; i < TAM; i++){
        scanf("%d",&inteiro[i]);
    }
    
    
    for (int i = 0; i < TAM; i++){ //"i" representa a primeira posição que será comparada
        
        for(int i2 = i + 1; i2 < TAM; i2++){ //"i2" representa a segunda posição que será comparada
            if(inteiro[i]>inteiro[i2]){
                
                passagem = inteiro[i];
                // O numero que é representado pelo primeiro vetor vai para a passagem
                
                inteiro[i] = inteiro [i2];
                // O número que é representado pelo segundo vetor agora é representado pelo primeiro
                
                inteiro [i2] = passagem;
                // O número que é representado pela passgem se torna o segundo vetor

            }
        }
    }

    // RESULTADO
    printf("Os numeros inteiros em ordem crescente: ");
    for (int i = 0; i < TAM; i++)    {
        printf("%d",inteiro[i]);
        
        // Vírgula
        if(i!=TAM-1){
            printf(", ");
        }
    }
    



    return 0;
}