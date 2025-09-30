#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
25/08/2025
Nota
*/

int main() {
float A;
int B; 
printf("Digite a sua nota: ");
scanf("%f",&A);
printf("Digite a quantidade de faltas: ");
scanf("%d",&B);

if(A>=9 && B<20){
    printf("Voce esta aprovado!");
} else if(A>=7 && B<=15){
    printf("Voce esta aprovado!");
} else if(A>=5 && A<7 && B<15){
    printf("Voce esta de recuperacao!");
} else{
    printf("Voce esta de reprovado!");
}

return 0;

}