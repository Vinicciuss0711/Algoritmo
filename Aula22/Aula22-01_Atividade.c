/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
10/11/2025
Cadastro de Pessoas em C
*/

#include <stdio.h>
#include <locale.h>

// TYPEDEF SERVE PARA NÃO TER QUE ESCREVER STRUCT MAIS VEZES
typedef struct {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
}Pessoa;

int main(){

    int N_PESSOAS;

    printf("Digite a quantidade de pessoas que voce vai cadastrar: "); 
    scanf("%d", &N_PESSOAS);
    
    Pessoa pessoas[N_PESSOAS];

    // ENTRADA DE DADOS

    for(int i = 0; i < N_PESSOAS; i++) {
        printf("Cadastro da pessoa %d\n", i+1);

        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 100, stdin);

        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].ano_nascimento);

        printf("Sexo (M/F): ");
        scanf(" %c", &pessoas[i].sexo); 

        printf("Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);

        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("CPF: ");
        scanf("%lf", &pessoas[i].cpf);

        printf("\n");
        fflush(stdin);
    }


    // SAIDA DE DADOS

    for(int i = 0; i < N_PESSOAS; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s", pessoas[i].nome);
        printf("Ano de nascimento: %d\n", pessoas[i].ano_nascimento);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("Peso: %.2f\n", pessoas[i].peso);
        printf("CPF: %.0lf\n\n", pessoas[i].cpf);
    }   

}