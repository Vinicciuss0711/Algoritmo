//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 ███████████                                 █████     ███                             
▒▒███▒▒▒▒▒▒█                                ▒▒███     ▒▒▒                              
 ▒███   █ ▒  █████ ████ ████████    ██████  ███████   ████   ██████  ████████    █████ 
 ▒███████   ▒▒███ ▒███ ▒▒███▒▒███  ███▒▒███▒▒▒███▒   ▒▒███  ███▒▒███▒▒███▒▒███  ███▒▒  
 ▒███▒▒▒█    ▒███ ▒███  ▒███ ▒███ ▒███ ▒▒▒   ▒███     ▒███ ▒███ ▒███ ▒███ ▒███ ▒▒█████ 
 ▒███  ▒     ▒███ ▒███  ▒███ ▒███ ▒███  ███  ▒███ ███ ▒███ ▒███ ▒███ ▒███ ▒███  ▒▒▒▒███
 █████       ▒▒████████ ████ █████▒▒██████   ▒▒█████  █████▒▒██████  ████ █████ ██████ 
▒▒▒▒▒         ▒▒▒▒▒▒▒▒ ▒▒▒▒ ▒▒▒▒▒  ▒▒▒▒▒▒     ▒▒▒▒▒  ▒▒▒▒▒  ▒▒▒▒▒▒  ▒▒▒▒ ▒▒▒▒▒ ▒▒▒▒▒▒  
*/
struct RPG{
    char cosplay[100];
    int aura;
    int paixao;
};

void enter(){
    char e[5];
    do{
    printf("\nPRESSIONE ENTER PARA CONTINUAR...");
    fgets(e,sizeof(e),stdin); //pega o \n
    
    e[strcspn(e, "\n")] = '\0'; //tira o \n da string

    }while(strlen(e)>0); //strlen serve para ler o tamanho da string
}

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
    
}
void prologo3(void){
    printf("mais dificil sera escapar de seu encanto.\n");
    printf("Seu coracao comeca frio, 0%% de paixao.\n");
    printf("Mas cuidado... se esse numero chegar a 100%%, significa que voce caiu nos contos de Colle.\n");
    printf("Cinco dias.\n");
    printf("Duas cantadas por dia.\n");
    printf("Quatro respostas por rodada.\n");
    printf("Um so objetivo: NAO SE APAIXONAR.\n");
    
}

void dia1(void){
    printf("    ____  _          ___\n");
    printf("   / __ \\(_)___ _   <  /\n");
    printf("  / / / / / __ `/   / / \n");
    printf(" / /_/ / / /_/ /   / /  \n");
    printf("/_____/_/\\__,_/   /_/   \n");
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

void dia1_dialogo2(void){
    printf("Macho peludo selvagem GOSTOU DE VOCE, ACHA QUE SEU SENSO DE HUMOR \n");
    printf("ESTA EM OUTRO NIVEL.\n");
    printf("Macho peludo selvagem: Me chamo Matheus Colle \n");
    printf("MATHEUS COLLE: NOSSA QUE COSPLAY BONITO, QUAL E O NOME DESSE\n");
    printf("COSPLAY?\n");
}

void dia1_dialogo3(void){
    printf("MATHEUS COLLE: Oi *nome digitado*, solteira? rsrss\n");
    printf("1 - SIM...\n");
    printf("2 - Confirma balancando a cabeca\n");
    printf("3 - Nao...\n");
    printf("4 - Ignora\n");
    printf("\nDigite um numero para responder Colle! \n");
}

void dia1_dialogo4(void){
    printf("Voce se sente cansada, precisa ir dormir, o dia na BGS esta chegando ao fim...\n");
    printf("*Matheus Colle ve voce se distanciando\n");
    printf("Matheus Colle: Nao fique muito triste quando estiver longe de mim...\n");
}

void dia2(void){
    printf("    ____  _          ___ \n");
    printf("   / __ \\(_)___ _   |__ \\\n");
    printf("  / / / / / __ `/   __/ /\n");
    printf(" / /_/ / / /_/ /   / __/ \n");
    printf("/_____/_/\\__,_/   /____/ \n");
}

void dia2_dialogo1(void){
    printf("Matheus Colle te acha no meio da BGS novamente...\n");
    printf("Matheus Colle: *Cosplay*, se seu nome fosse um sanduba, seria X-princesa!!\n");
    printf("1 - E voce me pediria se eu estivesse no cardapio?\n");
    printf("2 - Uau, que criatividade... veio com batata ou so vergonha mesmo?\n");
    printf("3 - Se seu nome fosse um sanduiche seria X-princeso\n");
    printf("4 - To mais pra X-desinteressada mesmo.\n");
    printf("\nDigite um numero para responder Colle! \n");
    
}

void dia2_dialogo2(void){
    printf("Matheus Colle: Gata, se voce fosse um peido, eu nao te soltaria!\n");
    printf("1 - Peida bravamente\n");
    printf("2 - Entao segura, porque eu to indo embora.\n");
    printf("3 - Nem o ar quer ficar preso com voce.\n");
    printf("4 - Nossa, olha a criatividade!\n");
    printf("\nDigite um numero para responder Colle! \n");
}

void dia3(void){
    printf("    ____  _          _____\n");
    printf("   / __ \\(_)___ _   |__  /\n");
    printf("  / / / / / __ `/    /_ < \n");
    printf(" / /_/ / / /_/ /   ___/ / \n");
    printf("/_____/_/\\__,_/   /____/  \n");
}

void dia3_dialogo1(void){
    printf("Matheus Colle: *Cosplay*, voce trabalha na horta? E que voce fez meu pepino crescer. risos risos...\n");
    printf("1 - Eca, que nojera!\n");
    printf("2 - Gosto de pepinos.\n");
    printf("3 - Serio que voce achou que isso funcionaria?\n");
    printf("4 - Voce tira um pepino do bolso e quebra na frente dele.\n");
    printf("\nDigite um numero para responder Colle! \n");
}

void dia3_dialogo2(void){
    printf("Matheus Colle: blueblablaoublablublublabloo\n");
    printf("Voce: Oi?\n");
    printf("Matheus Colle: Voce fala portugues e? Achei que deusa falava grego.\n");
    printf("1 - Achou mesmo que isso iria funcionar\n");
    printf("2 - Ah, grego eu so falo com deuses mesmo\n");
    printf("3 - blaubluauballubaulblaullubau\n");
    printf("4 - Nao sei falar grego, so sei falar com a sua lingua\n");
    printf("\nDigite um numero para responder Colle! \n");
}

void dia4(void){
    printf("    ____  _          __ __\n");
    printf("   / __ \\(_)___ _   / // /\n");
    printf("  / / / / / __ `/  / // /_\n");
    printf(" / /_/ / / /_/ /  /__  __/\n");
    printf("/_____/_/\\__,_/     /_/   \n");
}

void dia4_dialogo1(void){
    printf("Matheus Colle: *Cosplay*, Van Gogh amou o amarelo pq nao conhecia o preto do seu pe\n");
    printf("1 - Entao toma ele! *Chuta Colle\n");
    printf("2 - Nem o azul dos seus olhos...\n");
    printf("3 - Nem vermelho da sua cara, depois de voce passar essa vergonha!\n");
    printf("4 - O preto desse pezinho nunca vai ser seu!\n");
    printf("\nDigite um numero para responder Colle! \n");
}

void dia4_dialogo2(void){
    printf("Matheus Colle: Peidei aqui, vamo ali pro canto?\n");
    printf("1 - Nao... Vou ficar por aqui.\n");
    printf("2 - Vamos\n");
    printf("3 - Credo, vou e ir embora, imagina cheirar seus gases que horror!\n");
    printf("4 - Prefiro ficar longe desse canto!\n");
    printf("\nDigite um numero para responder Colle! \n");
}
void dia5(void){
    printf("    ____  _          ______\n");
    printf("   / __ \\(_)___ _   / ____/\n");
    printf("  / / / / / __ `/  /___ \\  \n");
    printf(" / /_/ / / /_/ /  ____/ /  \n");
    printf("/_____/_/\\__,_/  /_____/   \n");
}

void dia5_dialogo1(void){
    printf("Matheus Colle: Voce prefere maionese ou prefere ketshup?\n");
    printf("1 - Maionese\n");
    printf("2 - A X-Princesa aqui prefere ficar longe desse ketshup...\n");
    printf("3 - Ketshup\n");
    printf("4 - Bem que eu to com fome...\n");
    printf("\nDigite um numero para responder Colle! \n");
}

void dia5_dialogo2(void){
    printf("Matheus Colle joga agua na sua cara\n");
    printf("Matheus Colle: Estou jogando agua para essa flor crescer\n");
    printf("1 - Essa flor nunca vai ser sua.\n");
    printf("2 - Ve se cresce! *Pega agua e joga nele\n");
    printf("3 - VOCE ME DEIXOU MOLHADA!!\n");
    printf("4 - Qual e seu problema?\n");
    printf("\nDigite um numero para responder Colle! \n");
}

/*
 ██████████ ██████   █████ ███████████ ███████████     █████████   ██████████     █████████  
▒▒███▒▒▒▒▒█▒▒██████ ▒▒███ ▒█▒▒▒███▒▒▒█▒▒███▒▒▒▒▒███   ███▒▒▒▒▒███ ▒▒███▒▒▒▒███   ███▒▒▒▒▒███ 
 ▒███  █ ▒  ▒███▒███ ▒███ ▒   ▒███  ▒  ▒███    ▒███  ▒███    ▒███  ▒███   ▒▒███ ▒███    ▒███ 
 ▒██████    ▒███▒▒███▒███     ▒███     ▒██████████   ▒███████████  ▒███    ▒███ ▒███████████ 
 ▒███▒▒█    ▒███ ▒▒██████     ▒███     ▒███▒▒▒▒▒███  ▒███▒▒▒▒▒███  ▒███    ▒███ ▒███▒▒▒▒▒███ 
 ▒███ ▒   █ ▒███  ▒▒█████     ▒███     ▒███    ▒███  ▒███    ▒███  ▒███    ███  ▒███    ▒███ 
 ██████████ █████  ▒▒█████    █████    █████   █████ █████   █████ ██████████   █████   █████
▒▒▒▒▒▒▒▒▒▒ ▒▒▒▒▒    ▒▒▒▒▒    ▒▒▒▒▒    ▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒   ▒▒▒▒▒ 



   ██████                                       
  ███▒▒███                                      
 ▒▒██████                                       
  ██████                                        
▒███▒▒███                                       
▒███ ▒▒███                                      
▒▒█████▒███                                     
 ▒▒▒▒▒ ▒▒▒                                      
                                                
                                                
                                                
  █████████             ███      █████          
 ███▒▒▒▒▒███           ▒▒▒      ▒▒███           
▒███    ▒▒▒   ██████   ████   ███████   ██████  
▒▒█████████  ▒▒▒▒▒███ ▒▒███  ███▒▒███  ▒▒▒▒▒███ 
 ▒▒▒▒▒▒▒▒███  ███████  ▒███ ▒███ ▒███   ███████ 
 ███    ▒███ ███▒▒███  ▒███ ▒███ ▒███  ███▒▒███ 
▒▒█████████ ▒▒████████ █████▒▒████████▒▒████████
 ▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒▒▒▒ ▒▒▒▒▒  ▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒▒▒                                          
*/

int main(){
    //definição de variáveis
    int resposta = 0;
    int continuar = 0;
    struct RPG jogador;
    struct RPG Colle;
    
    //zerando os structs
    jogador.aura = 0;
    jogador.paixao = 0;
    Colle.aura = 0;
    

    while(continuar==0){
        intro(); //usa a função para aperecer a tela inicial com ascii
        
        enter();
        system("cls"); // "system("cls");" serve para limpar a tela
        
        prologo1();
        
        enter();
        system("cls");
        
        prologo2();
        
        enter();
        system("cls");
        
        prologo3();
        
        enter();
        system("cls");
        
/*
 ██████████   █████   █████████      ████ 
▒▒███▒▒▒▒███ ▒▒███   ███▒▒▒▒▒███    ▒▒███ 
 ▒███   ▒▒███ ▒███  ▒███    ▒███     ▒███ 
 ▒███    ▒███ ▒███  ▒███████████     ▒███ 
 ▒███    ▒███ ▒███  ▒███▒▒▒▒▒███     ▒███ 
 ▒███    ███  ▒███  ▒███    ▒███     ▒███ 
 ██████████   █████ █████   █████    █████
▒▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒   ▒▒▒▒▒    ▒▒▒▒▒ 
                                          
                                          
                                          
*/

        dia1();

        enter();
        system("cls");
        

        do{

            dia1_dialogo1();
            scanf("%d", &resposta); 
            while(getchar() != '\n');
            system("cls");

            if(resposta==1){
                jogador.aura = 100; 
                printf("Voce ganha 100 de aura!");
            }else if(resposta==2){
                jogador.aura = 50;        
                printf("Voce ganha 50 de aura!");
            }else if(resposta==3){
                Colle.aura = 100;        
                printf("Colle ganha 100 de aura!");
            }else if(resposta==4){
                Colle.aura = 50;        
                printf("Colle ganha 50 de aura!");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }

            enter();
            system("cls");

        }while (resposta<1 || resposta>4);

/*
 ██████████   █████   █████████       ████████ 
▒▒███▒▒▒▒███ ▒▒███   ███▒▒▒▒▒███     ███▒▒▒▒███
 ▒███   ▒▒███ ▒███  ▒███    ▒███    ▒▒▒    ▒███
 ▒███    ▒███ ▒███  ▒███████████       ███████ 
 ▒███    ▒███ ▒███  ▒███▒▒▒▒▒███      ███▒▒▒▒  
 ▒███    ███  ▒███  ▒███    ▒███     ███      █
 ██████████   █████ █████   █████   ▒██████████
▒▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒   ▒▒▒▒▒    ▒▒▒▒▒▒▒▒▒▒ 
                                               
                                               
                                               
*/
        dia2();

        enter();
        system("cls"); 


        do{
            dia2_dialogo1();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");

            if(resposta==1){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else if(resposta==2){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else if(resposta==3){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else if(resposta==4){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");

        }while(resposta<1 || resposta>4);


        do{
            dia2_dialogo2();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");
            
            if(resposta==1){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else if(resposta==2){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else if(resposta==3){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else if(resposta==4){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");
        
        }while(resposta<1 || resposta>4);

/*
 ██████████   █████   █████████       ████████ 
▒▒███▒▒▒▒███ ▒▒███   ███▒▒▒▒▒███     ███▒▒▒▒███
 ▒███   ▒▒███ ▒███  ▒███    ▒███    ▒▒▒    ▒███
 ▒███    ▒███ ▒███  ▒███████████       ██████▒ 
 ▒███    ▒███ ▒███  ▒███▒▒▒▒▒███      ▒▒▒▒▒▒███
 ▒███    ███  ▒███  ▒███    ▒███     ███   ▒███
 ██████████   █████ █████   █████   ▒▒████████ 
▒▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒   ▒▒▒▒▒     ▒▒▒▒▒▒▒▒  
                                               
                                               
                                               
*/

        dia3();

        enter();
        system("cls"); 


        do{
            dia3_dialogo1();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");
            
            if(resposta==1){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else if(resposta==2){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else if(resposta==3){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else if(resposta==4){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");

        }while(resposta<1 || resposta>4);


        do{
            dia3_dialogo2();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");
            
            if(resposta==1){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else if(resposta==2){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else if(resposta==3){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else if(resposta==4){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");

        }while(resposta<1 || resposta>4);

/*
 ██████████   █████   █████████      █████ █████ 
▒▒███▒▒▒▒███ ▒▒███   ███▒▒▒▒▒███    ▒▒███ ▒▒███  
 ▒███   ▒▒███ ▒███  ▒███    ▒███     ▒███  ▒███ █
 ▒███    ▒███ ▒███  ▒███████████     ▒███████████
 ▒███    ▒███ ▒███  ▒███▒▒▒▒▒███     ▒▒▒▒▒▒▒███▒█
 ▒███    ███  ▒███  ▒███    ▒███           ▒███▒ 
 ██████████   █████ █████   █████          █████ 
▒▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒   ▒▒▒▒▒          ▒▒▒▒▒  
                                                 
                                                 
                                                 
*/

        dia4();

        enter();
        system("cls"); 


        do{
            dia4_dialogo1();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");
            
            if(resposta==1){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else if(resposta==2){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else if(resposta==3){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else if(resposta==4){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");

        }while(resposta<1 || resposta>4);


        do{
            dia4_dialogo2();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");
            
            if(resposta==1){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else if(resposta==2){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else if(resposta==3){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else if(resposta==4){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");
        
        }while(resposta<1 || resposta>4);

        
        /*
 ██████████   █████   █████████      ██████████
▒▒███▒▒▒▒███ ▒▒███   ███▒▒▒▒▒███    ▒███▒▒▒▒▒▒█
 ▒███   ▒▒███ ▒███  ▒███    ▒███    ▒███     ▒ 
 ▒███    ▒███ ▒███  ▒███████████    ▒█████████ 
 ▒███    ▒███ ▒███  ▒███▒▒▒▒▒███    ▒▒▒▒▒▒▒▒███
 ▒███    ███  ▒███  ▒███    ▒███     ███   ▒███
 ██████████   █████ █████   █████   ▒▒████████ 
▒▒▒▒▒▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒   ▒▒▒▒▒     ▒▒▒▒▒▒▒▒  
                                               
                                               
                                               
 */

        dia5();

        enter();
        system("cls"); 


        do{
            dia5_dialogo1();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");
            
            if(resposta==1){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else if(resposta==2){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else if(resposta==3){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else if(resposta==4){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");

        }while(resposta<1 || resposta>4);


        do{
            dia5_dialogo2();
            scanf("%d", &resposta);
            while(getchar() != '\n');
            system("cls");
            
            if(resposta==1){
                jogador.aura += 100;
                printf("Voce ganha 100 de aura!\n");
            }else if(resposta==2){
                Colle.aura += 100;
                printf("Colle ganha 100 de aura!\n");
            }else if(resposta==3){
                Colle.aura += 50;
                printf("Colle ganha 50 de aura!\n");
            }else if(resposta==4){
                jogador.aura += 50;
                printf("Voce ganha 50 de aura!\n");
            }else{
                printf("Resposta invalida, tente novamente!\n");
            }
            enter();
            system("cls");
        
        }while(resposta<1 || resposta>4);

/*
 ███████████ █████ ██████   █████   █████████   █████      
▒▒███▒▒▒▒▒▒█▒▒███ ▒▒██████ ▒▒███   ███▒▒▒▒▒███ ▒▒███       
 ▒███   █ ▒  ▒███  ▒███▒███ ▒███  ▒███    ▒███  ▒███       
 ▒███████    ▒███  ▒███▒▒███▒███  ▒███████████  ▒███       
 ▒███▒▒▒█    ▒███  ▒███ ▒▒██████  ▒███▒▒▒▒▒███  ▒███       
 ▒███  ▒     ▒███  ▒███  ▒▒█████  ▒███    ▒███  ▒███      █
 █████       █████ █████  ▒▒█████ █████   █████ ███████████
▒▒▒▒▒       ▒▒▒▒▒ ▒▒▒▒▒    ▒▒▒▒▒ ▒▒▒▒▒   ▒▒▒▒▒ ▒▒▒▒▒▒▒▒▒▒▒ 
                                                           
                                                           
                                                           
*/

        printf("Fim de jogo!\n");
        printf("Aura do jogador: %d\n", jogador.aura);
        printf("Aura de Colle: %d\n", Colle.aura);

        if(jogador.aura>Colle.aura){
            printf("\nPARABENS, VOCE NAO CAIU NOS CONTOS DE COLLE!\n");
        }else{
            printf("\nVOCE CAIU NOS CONTOS DE COLLE!\n");
        }


        printf("Digite 1 para sair do jogo ou digite 0 para jogar novamente.");
        scanf("%d", &continuar);
        while(getchar() != '\n');
        system("cls");

    }

    return 0;
}
