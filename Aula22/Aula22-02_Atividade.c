/*
Vinícius Carneiro Carvalho
Aula de Algoritmo e Programação Estruturada
10/11/2025
Manipulação de Arquivos com Struct
*/

#include <stdio.h>
#include <locale.h>
#define TAM 3

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    char cpf[20];
}Pessoa;

int N_PESSOAS = 0;
Pessoa pessoas[TAM];

int cadastrar(){

    Pessoa p;
    
    printf("\nCadastro da pessoa %d\n", N_PESSOAS+1);
    
    printf("Nome: ");
    limparBuffer();
    fgets(p.nome, 100, stdin);
    
    printf("Ano de nascimento: ");
    scanf("%d", &p.ano_nascimento);
    
    printf("Sexo (M/F): ");
    scanf(" %c", &p.sexo); 
    
    printf("Altura (em metros): ");
    scanf("%f", &p.altura);
    
    printf("Peso (em kg): ");
    scanf("%f", &p.peso); 
    
    printf("CPF: ");
    limparBuffer();
    fgets(p.cpf, 20, stdin);
    
    /*
    Transformar o cpf em string resolve 
    os problemas de quando o cpf começa com o numero 0,
    além de permitir que o usuário possa digitar pontos e traços.
    */
   
   printf("\n");
    
    pessoas[N_PESSOAS] = p;
    N_PESSOAS++;   

    return 1;
}

void listar(){
    int i;

    for(i = 0; i < N_PESSOAS; i++) {
        printf("\nPessoa %d:\n", i+1);
        printf("Nome: %s", pessoas[i].nome);
        printf("Ano de nascimento: %d\n", pessoas[i].ano_nascimento);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("Peso: %.2f\n", pessoas[i].peso);
        printf("CPF: %s\n", pessoas[i].cpf);
    }

}

void salvar(){
    FILE *arq = fopen("pessoas.dat", "ab"); //fopen abre o arquivo para que assim seja possivel mexer nele
    
    fwrite(&pessoas[N_PESSOAS - 1], sizeof(Pessoa), 1, arq); //fwrite serve para escrever algo no arquivo
    

    fclose(arq);
}

int ler_arq1(){
    FILE *arq = fopen("pessoas.dat", "rb"); 
    
    if(arq==NULL){
        printf("\nErro ao encontrar o arquivo!\n");
        return 1;
    }
    
    N_PESSOAS = 0;

    while(fread(&pessoas[N_PESSOAS], sizeof(Pessoa), 1, arq)){ // fread serve para ler oq está no arquivo
        N_PESSOAS++;
    }


    fclose(arq);
}

int ler_arq2(){
    FILE *arq = fopen("pessoas.dat", "rb"); 
    
    if(arq==NULL){
        printf("\nNenhum arquivo existente, criando um novo arquivo chamado 'pessoas.dat'\n");
        return 1;
    }
    
    N_PESSOAS = 0;

    while(fread(&pessoas[N_PESSOAS], sizeof(Pessoa), 1, arq)){ // fread serve para ler oq está no arquivo
        N_PESSOAS++;
    }


    fclose(arq);
}

int main(){
    int x;
    do{
        printf("\nEscolha uma opcao:\n");
        printf("1 - Cadastrar pessoa\n");
        printf("2 - Listar pessoas\n");
        printf("3 - Sair\n");
        scanf("%d", &x);
        switch (x){
            
        case 1:
            ler_arq2();
            
            if (N_PESSOAS >= TAM) {
                printf("Limite de cadastros atingido!\n");
                break;
            }

            cadastrar();
            salvar();
            break;
            
        case 2:
            ler_arq1();
            listar();
            break;
            
        case 3:
            break;
            
        default:
            printf("Opcao invalida!\n");
            
            break;
        }

    }while(x != 3);

    return 0;
}
