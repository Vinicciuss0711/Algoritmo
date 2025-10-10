/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
02/10/2025
Strings
*/

#include <stdio.h>
#include <string.h>

int main(){

    char nome[20]; 
    char sobrenome[50];
    char completo[70];

    printf("\nDigite o seu nome: ");
    scanf("%s", nome);

    printf("\nDigite o seu sobrenome: ");
    scanf("%s", sobrenome);
    ;

    strcpy(completo,nome); //copia a variavel "nome" para a variavel "completo"
    strcat(completo," "); //concatena o espaço 
    strcat(completo,sobrenome); //concatena o sobrenome 

    printf("\nO seu nome e: %s",nome);
    printf("\nO seu sobrenome e: %s",sobrenome);
    printf("\nTamanho do nome: %d",strlen(completo)-1);
    printf("\nO seu nome completo e: %s",completo);

    //verificar se o nome começa com "A"

    //if(toupper((unsigned char)nome[0]) == 'A')
    //if(nome[0] == 'A' || nome[0] == 'a')
    if(toupper(nome[0]) == 'A'){
        printf("\n Sim, inicia com A");
    } else{
        printf("\n Nao inicia com A");
    }  

    return 0;
}