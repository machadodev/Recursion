using System;

public class Palindromo
{
  // Função recursiva
  static bool palindromo(string str, int comeco, int fim)
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

  public static void Main(string[] args)
  {
    string nome = "natan";
    Console.WriteLine("O nome {0} eh palindromo? {1}", nome, palindromo(nome, 0, nome.Length - 1));
  }
}
