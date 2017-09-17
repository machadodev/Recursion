// Entrada e saída padrão
#include <iostream>

using namespace std;

#define TAMANHO 10

// Retorna o maior valor entre dois numeros
int maximo(int a, int b)
{
  return a > b ? a : b;
}

// Função recursiva
int maior(int vetor[TAMANHO], int cursor)
{
  // Caso base
  if(cursor == 0) return vetor[cursor];

  // Passo em direção ao fim do problema
  return maximo(vetor[cursor], maior(vetor, cursor - 1));
}

int main(int argc, char* argv[])
{
  int vetor[TAMANHO] = {50, 5, 12, 32, 5, 7, 9, 10, 22, 100};
  cout << "Maior valor: " << maior(vetor, TAMANHO - 1) << endl;

  return 0;
}
