#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct RPG{
    char cosplay[100];
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
    printf("\n");
    printf(" PRECIONE ENTER PARA CONTINUAR \n");
    
    return;
}

void prologo1(void){
    printf("    ____             __                \n");
    printf("   / __ \\_________  / /___  ____ _____ \n");
    printf("  / /_/ / ___/ __ \\/ / __ \\/ __ `/ __ \\\n");
    printf(" / ____/ /  / /_/ / / /_/ / /_/ / /_/ /\n");
    printf("/_/   /_/   \\____/_/\\____/\\__, /\\____/ \n");
    printf("                         /____/        \n");
    printf("\nO ar vibra com o som dos alto-falantes, o brilho das luzes e o burburrinho de milhares de fas animados.\n");
    printf("E mais um dia na BGS, o maior evento de games da America Latina.\n");
    printf("Entre filas interminaveis, stands coloridos e cosplayers de todos os tipos,\n");
    printf("voce se prepara para viver cinco dias inesqueciveis.\n");
    printf("Sua maquiagem esta impecavel, o figurino pronto, afinal o cosplay que voce escolheu\n");
    printf(" PRECIONE ENTER PARA CONTINUAR... \n");
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
    printf(" PRECIONE ENTER PARA CONTINUAR... \n");

}
void prologo3(void){
    printf("mais dificil sera escapar de seu encanto.\n");
    printf("Seu coracao comeca frio, 0%% de paixao.\n");
    printf("Mas cuidado... se esse numero chegar a 100%%, significa que voce caiu nos contos de Colle.\n");
    printf("Cinco dias.\n");
    printf("Duas cantadas por dia.\n");
    printf("Quatro respostas por rodada.\n");
    printf("Um so objetivo: NAO SE APAIXONAR.\n");
    printf("\nPRECIONE ENTER PARA O JOGO COMECAR...\n");
}

int main(){
    char enter;
    
    intro(); //usa a função para aperecer a tela inicial com ascii
    
    while(enter!='\n'){ //while para só continuar o código caso o enter seja pressionado
        scanf("%c",&enter);
    }
    enter = '\0';
    system("cls"); // "system("cls");" serve para limpar a tela
    
    prologo1();

    while(enter!='\n'){ 
        scanf("%c",&enter);
    }
    enter = '\0';
    system("cls"); 
    
    prologo2();
    
    while(enter!='\n'){ 
        scanf("%c",&enter);
    }
    enter = '\0';
    system("cls"); 

    prologo3();
    
    while(enter!='\n'){ 
        scanf("%c",&enter);
    }
    enter = '\0';
    system("cls"); 

}
