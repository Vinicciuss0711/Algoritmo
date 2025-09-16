#include <stdio.h>
/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
15/09/2025
Break
*/

int main(){
    int I;

    printf("Digite numeros inteiros ou digite 0 para encerrar:\n");

    do{
        scanf("%d",&I);
        if(I==0){
            break;
        }
    }while(I!=0);
    
    return 0;
}