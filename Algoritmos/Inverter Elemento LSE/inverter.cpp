#include <iostream>

using namespace std;

class LSE
{
  public:
    int informacao;
    LSE* proximo;

    LSE(int informacao = 0, LSE* proximo = 0)
    {
      this->informacao = informacao;
      this->proximo = proximo;
    }

    void print()
    {
        cout << informacao << " " << endl;
    }
};

void print(LSE* lista)
{
    if(lista)
        cout << lista->informacao << " ";
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
    cout << lista->informacao << " ";
    exibirLista(lista->proximo);
  }
}

LSE* alocar(int informacao, LSE* proximo)
{
  return new LSE(informacao, proximo);
}

void liberar(LSE* lista)
{
  if(lista)
  {
    liberar(lista->proximo);
    delete lista;
   }
}

int main(int argc, char* argv[])
{
  LSE *lista = alocar(1, alocar(2, alocar(3, NULL)));

  exibirLista(lista);
  cout << endl;
  lista = lista = inverterLista(lista);
  exibirLista(lista);

  liberar(lista);

  return 0;
}
