/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
29/09/2025
Reajuste de salário
*/

#include <stdio.h>

int main(){
    float salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Seu salario era de: %0.2f reais.", salario);

    if(salario<=280){
        printf("\nO aumento aplicado e de 20 porcento.\n");
        printf("O valor do aumento e de: %0.2f reais.",salario*0.2);
        printf("\nO novo salario, apos o aumento, e de: %0.2f reais.",salario*1.2);
    } else if(salario>280 && salario<=700){
        printf("\nO aumento aplicado e de 15 porcento.\n");
        printf("O valor do aumento e de: %0.2f reais.",salario*0.15);
        printf("\nO novo salario, apos o aumento, e de: %0.2f reais.",salario*1.15);
    } else if(salario>700 && salario<=1500){
        printf("\nO aumento aplicado e de 10 porcento.\n");
        printf("O valor do aumento e de: %0.2f reais.",salario*0.1);
        printf("\nO novo salario, apos o aumento, e de: %0.2f reais.",salario*1.1);
    } else if(salario>1500){
        printf("\nO aumento aplicado e de 5 porcento.\n");
        printf("O valor do aumento e de: %0.2f reais.",salario*0.05);
        printf("\nO novo salario, apos o aumento, e de: %0.2f reais.",salario*1.05);
    }

    return 0;
}