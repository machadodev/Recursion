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