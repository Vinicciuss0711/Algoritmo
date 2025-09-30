#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
28/08/2025
Classificação de Idade e Atletas
*/

int main(){
    int I;
    int C;

/*
O return 0 serve para finalizar o código, se colocar ele 
dentro das colcheias do "if" ele finaliza o código 
caso a condição que está nos parênteses seja atendida.
*/

printf("Digite a idade: ");
scanf("%d",&I);
if(!(I>=0 && I<=120)){
    printf("Idade invalida!\n");
    return 0;
}

printf("1 = Atleta || 2 = Amador || 3 = Profissional");
printf("Informe a categoria: ");
scanf("%d",&C);
if(C<1 || C>3){
    printf("Categoria invalida!");
    return 0;
}

if(I>=0 && I<=12){
    printf("Infantil ");
}else if(I>=13 && I<=17){
    printf("Juvenil ");
}else if(I>=18 && I<=59){
    printf("Adulto ");
}else if(I>=60){
    printf("Senior ");
}

if(C==1){
    printf("Atleta");
}else if(C==2){
    printf("Amador");
}else if(C==3){
    printf("Profissional");
}

    return 0;
}