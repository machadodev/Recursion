void exibir(LSE* lista)
{
  if(lista)
  {
    cout << lista->informacao << " ";
    exibir(lista->proximo);
  }
}

void exibir_invertido(LSE* lista)
{
  if(lista)
  {
    exibir(lista->proximo);
    cout << lista->informacao << " ";
  }
}