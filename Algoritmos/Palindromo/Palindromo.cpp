// Entrada e saída padrão
#include <iostream>
// Para usar string
#include <string>

using namespace std;

// Função recursiva
bool palindromo(string str, int comeco, int fim)
{
  // Primeiro caso base
  if(comeco == fim)
    return true;

  // Segundo caso base
  if(str[comeco] != str[fim])
    return false;

  // Passo em direção ao fim do problema
  return palindromo(str, comeco + 1, fim - 1);
}

int main(int argc, char* argv[])
{
  string nome = "natan";
  cout << "O nome [" << nome << "] eh palindromo? " << boolalpha << palindromo(nome, 0, nome.length() - 1) << endl;

  return 0;
}
