#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
28/08/2025
Triângulo
*/

int main(){
float A;
float B;
float C;
char equilatero;
char isosceles;
char escaleno;

printf("Digite os valores de cada lado de um triagulo!\n");
printf("Lado A: ");
scanf("%f",&A);
printf("Lado B: ");
scanf("%f",&B);
printf("Lado C: ");
scanf("%f",&C);

if(A>B+C || B>A+C || C>A+B){
    printf("Nao e um triangulo!");
}else if(A==B && B==C){
    printf("O seu triangulo e equilatero!");
}else if(A==B || A==C || B==C){
    printf("O seu triangulo e isosceles!");
}else if(A!=B || A!=C || B!=C){
    printf("O seu triangulo e escaleno!");
}

return 0;
}