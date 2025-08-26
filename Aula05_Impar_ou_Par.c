#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
25/08/2025
Impar ou Par
*/

int main() {
int a,b; 
printf("Digite um valor a: ");
scanf("%d",&a);
printf("Digite um valor b: ");
scanf("%d",&b);

/*
Pode ser usado (a%2==0) também, pois quando o resto da divisão por 2 for 
igual à zero siginifica que o número é par, assim como (a%2!=1) indica que 
se o resto não for 1, significa que o númrto é par.
*/

if(a%2!=1){
    printf("O valor e par");
} else{
     printf("O valor e impar");
}

return 0;

}