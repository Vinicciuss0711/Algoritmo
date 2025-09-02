#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
01/09/2025
Números Reais Maiores que Zero e Média
*/

int main(){
    float N;
    float soma=0;
    float total=0;

    printf("\nEntre com um numero: ");
    scanf("%f",&N);

    /* 
    O total serve como contador, ele 
    conta 1 a cada vez que o "while" é 
    reiniciado.
    */

    while(N>0){
        soma = soma + N;
        total++; 
        
        //"total++" é a mesma coisa que "total = total + 1"
        
        printf("\nDigite outro numero: ");
        scanf("%f",&N);
    }
    //Processamento
    if(total == 0){
        printf("Nao foi inserido nenhum numero.");
    }else{
        if(total == 1){
            printf("\nFoi inserido %.0f numero", total);
        }else{
            printf("\nForam inseridos %0.f numeros", total);
            printf("\nA media dos numeros entrados e: %f", soma/total);            
        }
    }
    
    return 0;
}