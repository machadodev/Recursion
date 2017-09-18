#ifndef LSE_H
#define LSE_H

#include <stdio.h>

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

#endif /* LSE_H */