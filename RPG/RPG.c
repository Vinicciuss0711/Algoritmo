#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct RPG{
    char cosplay[100];
    int aura;
    int paixao;
};

void intro(void){
    printf("       __________________________________________________________________________________________     \n");
    printf("                                                                                                      \n");
    printf("     _______               ____                      _       ___ __  __       ______      ____        \n");
    printf("    / ____(_)   _____     / __ \\____ ___  _______   | |     / (_) /_/ /_     / ____/___  / / /__     \n");
    printf("   / /_  / / | / / _ \\   / / / / __ `/ / / / ___/   | | /| / / / __/ __ \\   / /   / __ \\/ / / _ \\     \n");
    printf("  / __/ / /| |/ /  __/  / /_/ / /_/ / /_/ (__  )    | |/ |/ / / /_/ / / /  / /___/ /_/ / / /  __/     \n");
    printf(" /_/   /_/ |___/\\___/  /_____/\\__,_/\\__, /____/     |__/|__/_/\\__/_/ /_/   \\____/\\____/_/_/\\___/      \n");
    printf("                                    /____/                                                           \n");
    printf(" ____________________________________________________________________________________________        \n");
    printf(" \nPRESSIONE ENTER PARA CONTINUAR \n");
    
}

void prologo1(void){
    printf("    ____             __                \n");
    printf("   / __ \\_________  / /___  ____ _____ \n");
    printf("  / /_/ / ___/ __ \\/ / __ \\/ __ `/ __ \\\n");
    printf(" / ____/ /  / /_/ / / /_/ / /_/ / /_/ /\n");
    printf("/_/   /_/   \\____/_/\\____/\\__, /\\____/ \n");
    printf("                         /____/        \n");
    printf("\nO ar vibra com o som dos alto-falantes, o brilho das luzes e o burburrinho de milhares \n");
    printf("de fas animados. E mais um dia na BGS, o maior evento de games da America Latina.\n");
    printf("Entre filas interminaveis, stands coloridos e cosplayers de todos os tipos,\n");
    printf("voce se prepara para viver cinco dias inesqueciveis.\n");
    printf("Sua maquiagem esta impecavel, o figurino pronto, afinal o cosplay que voce escolheu\n");
    printf(" \nPRESSIONE ENTER PARA CONTINUAR... \n");

}
void prologo2(void){
    printf("e sua maior arma e sua identidade durante essa aventura.\n");
    printf("Mas o destino tinha outros planos...\n");
    printf("Ele surge entre a multidao como se os holofotes tivessem sido feitos so pra ele:\n");
    printf("loiro, olhos azuis, um sorriso confiante e um charme que beira o perigo.\n");
    printf("Seu nome? Colle.\n");
    printf("Tambem conhecido pelos corredores da BGS como o 'Macho Peludo Selvagem', \n");
    printf("uma lenda viva da seducao gamer.\n");
    printf("Dizem que nenhum cosplayer resiste ao seu charme por mais de cinco dias.\n");
    printf("Agora, o desafio e seu: resistir as investidas de Colle, suas cantadas infaliveis\n");
    printf("e seu olhar hipnotizante.\n");
    printf("A cada resposta errada, ele ganha mais 'aura', e quanto mais aura tiver,\n");
    printf(" \nPRESSIONE ENTER PARA CONTINUAR... \n");
    
}
void prologo3(void){
    printf("mais dificil sera escapar de seu encanto.\n");
    printf("Seu coracao comeca frio, 0%% de paixao.\n");
    printf("Mas cuidado... se esse numero chegar a 100%%, significa que voce caiu nos contos de Colle.\n");
    printf("Cinco dias.\n");
    printf("Duas cantadas por dia.\n");
    printf("Quatro respostas por rodada.\n");
    printf("Um so objetivo: NAO SE APAIXONAR.\n");
    printf(" \nPRESSIONE ENTER PARA CONTINUAR... \n");
    
}

void dia1(void){
    printf("    ____  _          ___\n");
    printf("   / __ \\(_)___ _   <  /\n");
    printf("  / / / / / __ `/   / / \n");
    printf(" / /_/ / / /_/ /   / /  \n");
    printf("/_____/_/\\__,_/   /_/   \n");
    printf("\nPRESSIONE ENTER PARA O DIA 1 COMECAR!\n");
    
}

void dia1_dialogo1(void){
    printf("Voce e uma bela dama curtindo a BGS, ate que...\n");
    printf("\n*Um MACHO PELUDO SELVAGEM apareceu!!\n");
    printf("Ele te oferece um suquinho de laranja \n");
    printf("\nMacho peludo selvagem: TA AFIM DE RELAXAR?\n");
    printf("1. \n");
    printf("AI QUE DELICIA CARA (TOMA TUDO NUMA TALAGADA SO)\n");
    printf("2. \n");
    printf("COMO ASSIM, NAO ENTENDI (TOMA O SUCO DEVAGARINHO)\n");
    printf("3. \n");
    printf("Nao... \n");
    printf("4. \n");
    printf("Ignora.\n");
    printf("\nDigite um numero para responder Colle! \n");
}


int main(){
    char enter;
    int resposta = 0;
    struct RPG jogador;
    struct RPG Colle;
    
    intro(); //usa a função para aperecer a tela inicial com ascii
    
    //while para só continuar o código caso o enter seja pressionado
    scanf("%c",&enter);
    
    enter = '\0';
    system("cls"); // "system("cls");" serve para limpar a tela
    
    prologo1();
    
    
    scanf("%c",&enter);
    
    enter = '\0';
    system("cls"); 
    
    prologo2();
    
    scanf("%c",&enter);
    enter = '\0';
    system("cls"); 
    
    prologo3();
    
    scanf("%c",&enter);
    enter = '\0';
    system("cls"); 
    
    dia1();

    scanf("%c",&enter);
    enter = '\0';
    system("cls"); 
    
    do{

        dia1_dialogo1();
        scanf("%d", &resposta); 
        system("cls");
        
        if(resposta==1){
            jogador.aura = 100; 
            printf("Voce possui 100 de aura nessa rodada!");
        }else if(resposta==2){
            jogador.aura = 50;        
            printf("Voce possui 50 de aura nessa rodada!");
        }else if(resposta==3){
            Colle.aura = 100;        
            printf("Colle possui 100 de aura nessa rodada!");
        }else if(resposta==4){
            Colle.aura = 50;        
            printf("Colle possui 50 de aura nessa rodada!");
        }else{
            printf("Resposta invalida! ");
        }
    
    
    printf(" \nPRESSIONE ENTER PARA CONTINUAR... \n");
    scanf("%c",&enter);
    enter = '\0';
    system("cls");
    }while (resposta<1 || resposta>4);
    
    
    return 0;
}
