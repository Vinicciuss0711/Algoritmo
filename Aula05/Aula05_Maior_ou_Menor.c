#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
25/08/2025
Maior ou Menor
*/

int main() {
int A,B; 
printf("Digite um valor A: ");
scanf("%d",&A);
printf("Digite um valor B: ");
scanf("%d",&B);

/*
Todo "else" precisa vir seguido de um "if".
Por exemplo: 

if(A>B){
    printf("O valor A e maior que o valor B!");
} else{
     printf("O valor A e menor que o valor B!");
} else if(A==B){
     printf("O valor A e igual ao valor B!");
}

Não funciona pois faltou um if antes do "else if"
Já o desse código funciona, pois possui um "else if" no lugar de apenas um "else".
*/

if(A>B){
    printf("O valor A e maior que o valor B!");
} else if(A<B){
     printf("O valor A e menor que o valor B!");
} else if(A==B){
     printf("O valor A e igual ao valor B!");
}

return 0;

}