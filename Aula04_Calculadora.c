#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
21/08/2025
Calculadora
*/

int main(){

float a,b;
float resultado;
char operacao;

printf("Digite o valor a: ");
scanf("%f",&a);

printf("Digite o valor b: ");
scanf("%f",&b);

printf("[s] Soma | [u] Subtracao | [m] Multiplicacao | [d] Divisao\n");
scanf("%s",&operacao);

//cálculo das operações

if(operacao=='s'||operacao=='S'){
resultado = a + b;
} else if(operacao=='u'||operacao=='U'){
    resultado = a - b;
} else if(operacao=='m'||operacao=='M'){
    resultado = a * b;
} else if(operacao=='d'||operacao=='D'){
    resultado = a / b;
}

//saída do valor

printf("O resultado e: %f\n",resultado);

return 0;

}