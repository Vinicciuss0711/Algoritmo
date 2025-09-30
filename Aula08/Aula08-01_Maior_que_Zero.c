#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
04/09/2025
Números Reais Maiores que Zero e Média Com Do e While
*/

int main(){
    float N;
    float soma=0;
    float total=0;

    /* 
    O "do" já faz o código rodar diretamente, diferente de 
    quando se coloca o "while" primeiro.
    */

    do{ 
        printf("\nEntre com um numero: ");
        scanf("%f",&N);

        if(N!=0){
            soma = soma + N;
            total++; 
       
        }
    }while(N>0);
    
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