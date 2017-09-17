/* Entrada e saída padrão */
#include <stdio.h>

/* Função recursiva */
int fatorial(int n)
{
  /* Caso base */
  if(n <= 1)
    return 1;

  /* Passo em direção ao fim do problema */
  return n * fatorial(n - 1);
}

int main(int argc, char* argv[])
{
  int n = 0;

  printf("Deseja calcular o fatorial de qual numero? : ");
  scanf("%d", &n);

  printf("Fatorial de %d: %d\n", n, fatorial(n));

  return 0;
}
