// Entrada padrão
import java.util.Scanner;

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

  public static void main(String[] arg)
  {
    Scanner in = new Scanner(System.in);

    System.out.print("Digite um numero: ");
    int n = in.nextInt();

    System.out.println("O numero " + n + " tem " + conta_digitos(n) + " digitos");
  }
}
