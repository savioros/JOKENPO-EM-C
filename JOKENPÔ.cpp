#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int op, resp, quant, pc, i, pontos_pc = 0, pontos_player = 0;

  printf("****** Bem-vindos ao FCDL-Games ******\n");
  printf("************* J O G O S **************\n");
  printf("1 - JokenPo\n");
  printf("2 - Sair\n");
  printf("**************************************\n");
  printf("Digite a opcao desejada: ");
  scanf("%d", &op);
  switch(op){
    case 1:
      system("clear");

      printf("Quantas vezes deseja jogar: ");
      scanf("%d", &quant);
      system("clear");

	    for(i = 1; i <= quant; i++){
	    	printf("******** JOKENPO ********\n");
	        printf("1 - Pedra\n");
	        printf("2 - Papel\n");
	        printf("3 - Tesoura\n");
	        printf("Digite a opcao desejada: ");
	        scanf("%d", &resp);
	        
	        srand(time(NULL));
	        pc = 1 + (rand() % 3);
	
	        switch(pc){
	          case 1:
              system("clear");
	            printf("*******************\n");
	            printf("PC escolheu PEDRA\n");
	          break;
	
	          case 2:
              system("clear");
	            printf("*******************\n");
	            printf("PC escolheu PAPEL\n");
	          break;
	
	          case 3:
              system("clear");
	            printf("*********************\n");
	            printf("PC escolheu TESOURA\n");
	          break;
	        }
	
	        if ((resp == 1 && pc==3) || (resp == 2 && pc == 1) || (resp == 3 && pc == 2)) //verifica se o jogador venceu
	        {
	            printf("Voce venceu!\n");
	            pontos_player = pontos_player + 1;
	        }
	
	        if ((pc == 1 && resp == 3) || (pc == 2 && resp == 1) || (pc == 3 && resp == 2)){//verifica se perdeu
	          printf("Voce perdeu!\n");
	          pontos_pc = pontos_pc + 1;
	        }
	
	        if(resp == pc){
	          printf("EMPATE!\n");
	          //pontos_player = pontos_player + 0;
	          //pontos_pc = pontos_pc + 0;
	        }
      
	  	}
	  	
	  	printf("--------SCORES--------\n");
	  	printf("JOGADOR: %d\n", pontos_player);
	  	printf("CPU: %d\n", pontos_pc);
	  	if(pontos_player > pontos_pc){
	  		printf("VOCE VENCEU COM %d PONTOS!\n", pontos_player);
		  }else if(pontos_pc > pontos_player){
				printf("A CPU GANHOU COM %d PONTOS!\n", pontos_pc);
		  }else if(pontos_player == pontos_pc){
				printf("HOUVE UM EMPATE GERAL!\n");
		}
    break;

    case 2:
      system("clear");

      printf("SAINDO. . .");
    break;
  }
  return 0;
}
