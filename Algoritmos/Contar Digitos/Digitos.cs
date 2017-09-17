using System;

public class Digitos
{
  // Função recursiva
  static int conta_digitos(int n)
  {
    // Caso base
    if(n <= 0)
      return 0;

    // Passo em direção ao fim do problema
    return 1 + conta_digitos(n / 10);
  }

  public static void Main(string[] args)
  {
    Console.Write("Digite um numero: ");
    int n = Convert.ToInt32(Console.ReadLine());

    Console.WriteLine("O numero {0} tem {1} digitos", n, conta_digitos(n));
  }
}
