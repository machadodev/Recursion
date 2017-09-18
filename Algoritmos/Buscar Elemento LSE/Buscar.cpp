LSE* buscar(int info, LSE* lista)
{
   if(!lista || lista->informacao == info)
      return lista;
   else
      return buscar(info, lista->proximo);
}