#include <stdio.h>

/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
01/09/2025
Média sem Repetição
*/

int main(){
    float vA, vB, vC;
    float m;
    int condicao = 1;
// v = valor

while(condicao == 1){
    printf("Digite 3 valores: ");
    scanf("%f %f %f",&vA,&vB,&vC);

    m = (vA+vB+vC)/3;
    printf("Sua media e: %f\n", m);

    printf("Digite 0 para terminar ou 1 para continuar: \n");
    scanf("%d",&condicao);
}
//o loop termina quando a condicao for 0

printf("\nFim do programa!\n");

return 0;
}