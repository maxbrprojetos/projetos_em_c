#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

int dado;
//A linha abaixo inicia o gerador de números aleatórios
srand(time(NULL));
//Usamos a função rand para gerar números aleatórios
//%6 gera 6 números aleatórios ( 0 a 5)
//+1 soma 1 ao resultado "Não existe a face 0 do dado")
dado=("%d", rand() % 6+1);
printf("Jogo do dado\n, ");
system("pause");
return 0;
}
