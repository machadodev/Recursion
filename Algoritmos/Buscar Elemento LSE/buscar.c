/* Entrada e saída padrão */
#include <stdio.h>
/* malloc */
#include <stdlib.h>

typedef struct No
{
  int informacao;
  struct No* proximo;
} LSE;

void exibir(LSE* lista)
{
  if(lista)
  {
    printf("%d ", lista->informacao);
    exibir(lista->proximo);
  }
}

void exibir_invertido(LSE* lista)
{
  if(lista)
  {
    exibir(lista->proximo);
    printf("%d ", lista->informacao);
  }
}

int main(int argc, char* argv[])
{
  LSE *lista = (LSE*)malloc(sizeof(LSE));
  lista->informacao = 1;
  lista->proximo = NULL;

  LSE* lista1 = (LSE*)malloc(sizeof(LSE));
  lista1->informacao = 2;
  lista1->proximo = NULL;

  lista->proximo = lista1;

  exibir(lista);
  printf("\n");
  exibir_invertido(lista);

  free(lista);
  lista = NULL;

  free(lista1);
  lista1 = NULL;

  return 0;
}
