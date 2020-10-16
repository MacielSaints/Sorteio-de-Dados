// Escreva um programa em linguagem C que simule um jogo de dados disputado entre um jogador humano e um computador, onde dois dados eletrônicos (simulados por software, através de valores aleatórios) devem ser lançados simultaneamente
// O jogador vence se a soma dos pontos dos dois dados for 7 ou 11, caso contrário vence o computador
// Ao final da partida, o programa deverá perguntar ao usuário se o mesmo deseja jogar novamente. O programa deverá permitir uma nova partida, caso a resposta seja afirmativa ou encerrar em caso negativo
// Ao final do jogo, o programa deve apresentar o resultado final

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dado(void);
void desenha(int);
void limpaTela(void);

int main(void) {
  int dado1, dado2, soma;
  char resp;
  srand(time(NULL));
  
  do {
    limpaTela();
    printf("Jogo do 7 ou 11\n");
    dado1 = dado();
    printf("Dado 1: %d\n", dado1);
    desenha(dado1);
    dado2 = dado();
    printf("Dado 2: %d\n", dado2);
    desenha(dado2);
    soma = dado1 + dado2;
    printf("A soma dos dados foi: %d\n", soma);
    if ((soma == 7) || (soma == 11)) {
      printf("Jogador venceu!\n");
    } else {
      printf("Computador venceu!\n");
    }
    printf("Deseja jogar novamente (S/N)? ");
    scanf("%c", &resp);
    getchar();
  } while ((resp == 's') || (resp == 'S'));
  printf("\n\n");
  printf("Obrigado por usar o nosso programa!");
  printf("\n\n");
  return 0;
}

int dado(void) {
  return (1 + rand() % 6);
}

void desenha(int valor) {
  switch (valor) {
    case 1 : 
              printf("###########\n");
              printf("#         #\n");
              printf("#    *    #\n");
              printf("#         #\n");
              printf("###########\n");
              break;
    case 2 : 
              printf("###########\n");
              printf("#  *      #\n");
              printf("#         #\n");
              printf("#      *  #\n");
              printf("###########\n");
              break;
    case 3 : 
              printf("###########\n");
              printf("# *       #\n");
              printf("#    *    #\n");
              printf("#       * #\n");
              printf("###########\n");
              break;
    case 4 : 
              printf("###########\n");
              printf("# *     * #\n");
              printf("#         #\n");
              printf("# *     * #\n");
              printf("###########\n");
              break;
    case 5 : 
              printf("###########\n");
              printf("# *     * #\n");
              printf("#    *    #\n");
              printf("# *     * #\n");
              printf("###########\n");
              break;
    case 6 : 
              printf("###########\n");
              printf("# *     * #\n");
              printf("# *     * #\n");
              printf("# *     * #\n");
              printf("###########\n");
              break;                    
  }
}

void limpaTela(void) {
  if (system("CLS")) 
    system("clear");
}