/* Entrada e saída padrão */
#include <stdio.h>

/* Função recursiva */
int conta_digitos(int n)
{
  /* Caso base */
  if(n <= 0)
    return 0;

  /* Passo em direção ao fim do problema */
  return 1 + conta_digitos(n / 10);
}

int main(int argc, char* argv[])
{
  int n = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("O numero %d tem %d digitos\n", n, conta_digitos(n));

  return 0;
}
