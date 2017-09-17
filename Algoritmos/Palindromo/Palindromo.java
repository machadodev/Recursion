// Entrada padrão
import java.util.Scanner;

public class Palindromo
{
  // Função recursiva
  static boolean palindromo(String str, int comeco, int fim)
  {
    // Primeiro caso base
    if(comeco == fim)
      return true;

    // Segundo caso base
    if(str.charAt(comeco) != str.charAt(fim))
      return false;

    // Passo em direção ao fim do problema
    return palindromo(str, comeco + 1, fim - 1);
  }

  public static void main(String[] args)
  {
    String nome = "natan";
    System.out.println("O nome " + nome + " eh palindromo? " + palindromo(nome, 0, nome.length() - 1));
  }
}
