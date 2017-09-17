// Entrada padrão
import java.util.Scanner;

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

  public static void main(String[] arg)
  {
    Scanner in = new Scanner(System.in);

    System.out.print("Deseja calcular o fatorial de qual numero? : ");
    int n = in.nextInt();

    System.out.println("Fatorial de " + n + ": " + fatorial(n));
  }
}
