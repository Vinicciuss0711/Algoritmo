/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
02/10/2025
Toupper e Função no Void
*/

#include <stdio.h>
#include <string.h>


void toUpperFrasef (char txt[]){
    for (int i = 0; txt[i] != '\0'; i++){
        txt[i] = toupper((unsigned char)txt[i]);
    }
}


int main(){
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);

    printf("Minha frase original: %s\n",frase);

    toUpperFrasef(frase);
    
    printf("Minha frase em caixa alta: %s\n",frase);


    return 0;
}