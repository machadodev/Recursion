
#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
  int informacao;
  struct No* proximo;
} LSE;

void print(LSE* lista)
{
    if(lista)
        printf("%d ", lista->informacao);
}

LSE* inverterLista(LSE* lista)
{
	if(!lista || !lista->proximo)
		return lista;

	LSE* no = lista->proximo;

	lista->proximo = NULL;

	LSE* invertida = inverterLista(no);

	no->proximo = lista;

	return invertida;
}

void exibirLista(LSE* lista)
{
  if(lista)
  {
    printf("%d ", lista->informacao);
    exibirLista(lista->proximo);
  }
}

LSE* alocar(int informacao, LSE* proximo)
{
  LSE* resultado = (LSE*)malloc(sizeof(LSE));
  resultado->informacao = informacao;
  resultado->proximo = proximo;

  return resultado;
}

void liberar(LSE* lista)
{
  if(lista)
  {
    liberar(lista->proximo);
    free(lista);
   }
}

int main(int argc, char* argv[])
{
  LSE *lista = alocar(1, alocar(2, alocar(3, NULL)));

  exibirLista(lista);
  printf("\n");
  lista = lista = inverterLista(lista);
  exibirLista(lista);

  liberar(lista);

  return 0;
}
