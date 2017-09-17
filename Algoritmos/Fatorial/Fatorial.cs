using System;

public class Fatorial
{
  // Função recursiva
  static int fatorial(int n)
  {
    // Caso base
    if(n <= 1)
      return 1;

    // Passo em direção ao fim do problema
    return n * fatorial(n - 1);
  }

  public static void Main(string[] args)
  {
    Console.Write("Deseja calcular o fatorial de qual numero? : ");
    int n = Convert.ToInt32(Console.ReadLine());

    Console.WriteLine("Fatorial de {0}: {1}", n, fatorial(n));
  }
}
