public static class LSE
{
    public int informacao;
    public LSE proximo;

    public LSE(int informacao, LSE proximo)
    {
       this.informacao = informacao;
       this.proximo = proximo;
    }

	public String toString()
    {
       String resultado = Integer.toString(informacao);
       return resultado;
    }
}