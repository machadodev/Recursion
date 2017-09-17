using System;

public class MaiorValor
{
  // Retorna o maior valor entre dois numeros
  static int maximo(int a, int b)
  {
    return a > b ? a : b;
  }

  // Função recursiva
  static int maior(int[] vetor, int cursor)
  {
    // Caso base
    if(cursor == 0) return vetor[cursor];

    // Passo em direção ao fim do problema
    return maximo(vetor[cursor], maior(vetor, cursor - 1));
  }

  public static void Main(string[] args)
  {
    int[] vetor = new int[] {50, 5, 12, 32, 5, 7, 9, 10, 22, 100};
    Console.WriteLine("Maior valor: {0}", maior(vetor, vetor.Length - 1));
  }
}
