public class LSE
{
   public int informacao;
   public LSE proximo;

   public LSE(int informacao, LSE proximo)
   {
      this.informacao = informacao;
      this.proximo = proximo;
   }

   public override string ToString()
   {
      string resultado = this.informacao + " ";
      return resultado;
   }
}