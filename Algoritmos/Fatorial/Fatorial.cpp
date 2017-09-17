// Entrada e saída padrão
#include <iostream>

using namespace std;

// Função recursiva
int fatorial(int n)
{
  // Caso base
  if(n <= 1)
    return 1;

  // Passo em direção ao fim do problema
  return n * fatorial(n - 1);
}

int main(int argc, char* argv[])
{
  int n = 0;

  cout << "Deseja calcular o fatorial de qual numero? : ";
  cin >> n;

  cout << "Fatorial de " << n << ": " << fatorial(n) << endl;

  return 0;
}
