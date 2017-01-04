#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void jogadorJogando(void);
void verificarJogoDoJogador(void);
void maquinaJogando(void);
void verificarJogoDaMaquina(void);
void pontuarJogadores(void);
void verificarGanhador(void);
void mostrarJogo(void);
void pontuarJogadores(void);
void mostrarJogoDeJogador(void);
void mostrarJogoDaMaquina(void);


char nomeDoJogador [10];
int jogarSN;
char jogoFinalizado[3] = "N�o";
int jogoDoJogador = 1;
int jogoDaMaquina = 0;
int maquinaJogouPedra = 0;
int jogadorJogouPedra = 1;
int finalizarJogo;
int pontuacaoDoJogador = 0;
int pontuacaoDaMaquina = 0;
int pontoAnteriorDoJogador = 0;
int pontoAnteriorDaMaquina = 0;


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	printf("**** Jogo - Jo Ken Pow *****");
	printf("\n");
	printf("Qual � o seu nome?\n");
	printf("R:");
	gets(nomeDoJogador);
	printf("%s",nomeDoJogador);
	printf(" voc� quer jogar tecle * 1 - para Sim ou 2 - para N�o.* \n");
	printf("R:");
	scanf("%d", &jogarSN);
	
	system("cls");
	
	do{	
		switch(jogarSN){
			case 1:
				printf("*** Bem Vindo ao Jogo\n ***");
				jogadorJogando();
				verificarJogoDoJogador();
				mostrarJogoDeJogador();
			
				maquinaJogando();
				verificarJogoDaMaquina();
				mostrarJogoDaMaquina();
				
				pontuarJogadores();
				
			
				printf("R:");
				//gets(jogoFinalizado);
				break;
			
			case 2:
				printf("Jogo n�o carregado!....\n");
				break;
		
			default:
				printf("Op��o invpalida tente novamente.");
		}
		if (jogarSN == '2'){
			finalizarJogo = 2;
		}
	}while(finalizarJogo == '2');
	
	system("pause");
	return 0;		
}





	//Jogador jogando
	void jogadorJogando(void){
		printf("Digite a op��o desejada\n");
		printf("1 - Pedra, 2 - Papel, 3 - Tesoura\n");
		printf("R:");
		scanf("%d", &jogoDoJogador);
	}

	
	//Verificar  jogo do Jogador
	void verificarJogoDoJogador(void){
		if (jogoDoJogador ==1){
			    if (jogadorJogouPedra == 1){
					do{
						printf("%s",nomeDoJogador);
						printf(" voc� janteriormente j� jogou a pedra\n");
						printf("Tem te outra op��o:\n");
						printf("R:");
						scanf("%d", &jogoDoJogador);
						
			    	}while(jogoDoJogador == 1);
			    	
			    		jogadorJogouPedra = 0;
			    }else{
			    		jogadorJogouPedra = 1;
		    	    }
		
		} 
		printf("Jogo aceito do jogador.\n");
		printf("\n");
}	  


	
	//M�quina Jogando
	void maquinaJogando(void){	
		jogoDaMaquina = ("%d", rand() % 3+1);
	}
	

	
	//Verificar jogo da m�quina
	void verificarJogoDaMaquina(void){
		if (jogoDaMaquina == 1){
				if(maquinaJogouPedra == 1){
					do{
						 printf("M�quina repetiu valor n�o permitido, refazendo o jogo...");
						 maquinaJogando();	
					}while(jogoDaMaquina == 1);
						maquinaJogouPedra = 0;
				}else{
						maquinaJogouPedra = 1;
				}
			}
		printf("Jogo aceito da m�quina.\n");
	}



//Mostrar jogo do Jogador
void mostrarJogoDeJogador(void){
	if (jogoDoJogador == 1){
		printf("Jogador Jogou 1 - Pedra\n");
	}
	
	if (jogoDoJogador == 2){	
	     printf("Jogador Jogou 2 - Tesoura\n");
	}
	
	if (jogoDoJogador == 3){
		printf("Jogador Jogou 3 - Papel\n");
	}
	printf("\n");
	
}



//Mostrar jogo da m�quina
void mostrarJogoDaMaquina(void){
	if (jogoDaMaquina == 1){
		printf("M�quina Jogou 1 - Pedra\n");
	}
	
	if (jogoDaMaquina == 2){
		printf("M�quina Jogou 2 - Tesoura\n");
	}
	
	if (jogoDaMaquina ==  3) {  
		printf("Maquina Jogou 3 - Papel\n");
	}
	
	printf("\n");
}


	
	
	void pontuarJogadores(void){
		
		if ((jogoDoJogador == 1)&(jogoDaMaquina == 3)){
			pontuacaoDoJogador = pontuacaoDoJogador ++;
		}
		
		if ((jogoDoJogador == 3)&(jogoDaMaquina == 2)){
			pontuacaoDoJogador = pontuacaoDoJogador ++;
		}
		
		if ((jogoDoJogador == 2)&(jogoDaMaquina == 1)){
			pontuacaoDoJogador = pontuacaoDoJogador ++;
		}
		
		if ((jogoDoJogador == 3)&(jogoDaMaquina == 1)){
			pontuacaoDaMaquina  = pontuacaoDaMaquina++;
		}
		
		if ((jogoDoJogador == 2)&(jogoDaMaquina == 3)){
			pontuacaoDaMaquina  = pontuacaoDaMaquina++;
		}
		
		if ((jogoDoJogador == 1)&(jogoDaMaquina == 2)){
			pontuacaoDaMaquina  = pontuacaoDaMaquina++;
		}
		
		if(jogoDoJogador == jogoDaMaquina ){
			pontuacaoDoJogador = pontuacaoDoJogador ++;
			pontuacaoDaMaquina  = pontuacaoDaMaquina++;
			printf("Empate na pontua��o...");
     	}
     	
		if (pontoAnteriorDoJogador != pontuacaoDoJogador){
			printf("Pontua��o do Jogador!...");
		}
		
		if (pontoAnteriorDaMaquina != pontuacaoDaMaquina){
			printf("Pontua��o da M�quina!...");
		}	
		
		printf("Pontua��o do jogador %d", pontuacaoDoJogador);
		printf("Pontua��o da m�quina %d", pontuacaoDaMaquina);
}
	



	
	//Verifica quem ganhou no jogo
/*
	}	void verificarGanhador(void){
		if ((pontuacaoDoJogador == 3)&(pontuacaoDaMaquina < 3)){
			printf("Jogador Ganho da M�quia!...");
			printf("Meus parabens %s", nomeDoJogador );
			printf("Voc� fez %d" ,pontuacaoDoJogador);
			printf("pontos!...");
			finalizarJogo = 1;
			
		}else if ((pontuacaoDoJogador <= 3)&(pontuacaoDaMaquina = 3)){
				printf("M�quina ganhou de jogador!...");
				printf("Meus parabens Jo Ken Pow");
				printf("Voc� fez %d" ,pontuacaoDaMaquina);
				printf("pontos!...");
				finalizarJogo = 1;
				
		}else if((pontuacaoDoJogador == 3)&(pontuacaoDaMaquina == 3)){
			printf("Empate, nova partida para realizar o desenpate!");
			
		}else if (pontuacaoDoJogador == pontuacaoDaMaquina){
			printf("Empate, nova partida para realizar o desenpate!");	
	    }
   }
   
   */
//}
