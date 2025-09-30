#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
08/09/2025
Validação
*/

int main(){
    int I;
    do{
        printf("\nDigite sua idade: ");
        scanf("%d",&I);
        if (I<0 || I>120){
            printf("Idade invalida. Digite novamente.");
        }
    }while(I<0 || I>120);
    printf("Idade valida. Fim de programa.");
    return 0;
}