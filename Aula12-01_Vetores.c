/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
18/09/2025
Vetores
*/

#include <stdio.h>
#define TAM 3 // TAM = Tamanho
/* 
"#define" define uma constante
*/
int main(){
    int valores[TAM];

    printf("\nOla! O sistema vai pedir 3 valores.");
    for (int i = 0; i < TAM; i++){
        printf("\nInsira um valor: ");
        scanf("%d",&valores[i]);
    }
    
    printf("\nOs valores armazenados sao: ");
    for (int i = 0; i < TAM; i++){
        printf("%d ",valores[i]);
    }

    printf("\nOs valores armazenados sao: ");
    for (int i = TAM-1; i >= 0; i--){
        printf("%d ",valores[i]);
    }
    

    printf("\n Tamanho de espaco em memoria %d",sizeof(valores));
    printf("\n Numero de elementos %d",sizeof(valores)/sizeof(valores[0]));
    printf("\nFim do programa!");
    
    return 0;
}