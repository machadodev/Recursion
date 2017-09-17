// Entrada e saída padrão
#include <iostream>

using namespace std;

// Função recursiva
int conta_digitos(int n)
{
  // Caso base
  if(n <= 0)
    return 0;

  // Passo em direção ao fim do problema
  return 1 + conta_digitos(n / 10);
}

int main(int argc, char* argv[])
{
  int n = 0;

  cout << "Digite um numero: ";
  cin >> n;

  cout << "O numero " << n << " tem " << conta_digitos(n) << " digitos" << endl;

  return 0;
}
