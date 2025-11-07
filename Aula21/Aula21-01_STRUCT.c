/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
06/11/2025
Struct
*/

#include <stdio.h>
#include <locale.h>

typedef struct {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
}Pessoa;



int main(){

    system("chcp 65001 > null");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Pessoa p1 = {"Alexandre Silva dos Santos",1973,'M',1.78,92.0,61020974168};

    printf("O nome da pessoa é %s\n", p1.nome);
    printf("O ano de nascimento é %d\n", p1.ano_nascimento);
    printf("O sexo é %c\n", p1.sexo);
    printf("A altura é %0.2f\n", p1.altura);
    printf("O peso é %0.2f\n", p1.peso);
    printf("O cpf é %f\n", p1.cpf);

}