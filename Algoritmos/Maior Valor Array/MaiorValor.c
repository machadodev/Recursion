/* Entrada e saída padrão */
#include <stdio.h>

#define TAMANHO 10

/* Retorna o maior valor entre dois numeros */
int maximo(int a, int b)
{
  return a > b ? a : b;
}

/* Função recursiva */
int maior(int vetor[TAMANHO], int cursor)
{
  /* Caso base */
  if(cursor == 0) return vetor[cursor];

  /* Passo em direção ao fim do problema */
  return maximo(vetor[cursor], maior(vetor, cursor - 1));
}

int main(int argc, char* argv[])
{
  int vetor[TAMANHO] = {30, 5, 12, 32, 5, 7, 9, 10, 22, 1};
  printf("Maior valor: %d\n", maior(vetor, TAMANHO - 1));

  return 0;
}
