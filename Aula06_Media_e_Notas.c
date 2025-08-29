#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
28/08/2025
Media e Notas
*/

int main() {
float A;
float B;
float C;
float M;
int F;

printf("Digite a nota A: ");
scanf("%f",&A);
printf("Digite a nota B: ");
scanf("%f",&B);
printf("Digite a nota C: ");
scanf("%f",&C);
printf("Digite a quantidade de faltas: ");
scanf("%d",&F);

M = (A+B+C)/3;

if(M==0 && F>18){
    printf("SR");
}else if(F>18){
    printf("Reprovado por faltas!");
}else if(M>=9){
    printf("SS");
}else if(M>=7 && M<9){
    printf("MS");
}else if( M>=5 && M<7 ){
    printf("MM");
}else if( M>=3 && M<5 ){
    printf("MI");
}else if( M>=1 && M<3 ){
    printf("II");
}

return 0;

}