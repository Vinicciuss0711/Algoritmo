/*
Vinícius Carneiro Caralho
Aula de Algoritmo e Programação Estruturada
30/10/2025
Fatorial Sem e Com Recursão
*/

#include <stdio.h>
#include <locale.h>

//Função fatorial
int fatorialSemRecursao(int n){
    int saida = 1;

    for(int i = 1; i <= n; i++){    
            saida *= i; // saida = saida * i
    }
    return saida;
}

int fatorialComRecursao(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return n * fatorialComRecursao(n-1);
    }
}

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d",&numero);
    
    printf("O número digitado foi %d \n", numero);
    


    printf("O resultado do fatorial sem recursão é %d \n", fatorialSemRecursao(numero));
    printf("O resultado do fatorial com recursão é %d \n", fatorialComRecursao(numero));

    return 0;
}