using System;

class Inverter
{
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

    public static LSE inverter(LSE lista)
    {
        // Caso base - Uma lista vazia ou com somente um elemento já está invertida
        if (lista == null || lista.proximo == null)
        {
            return lista;
        }
        else
        {
            LSE no = lista.proximo;

            lista.proximo = null;

            // Passo em direção ao fim
            LSE invertida = inverter(no);

            no.proximo = lista;

            return invertida;
        }
    }

    public static void print(LSE lista)
    {
        if (lista != null)
        {
            Console.Write(lista);
            print(lista.proximo);
        }
    }

    public static void Main(string[] args)
    {
        LSE lista = new LSE(1, new LSE(2, new LSE(3, null)));
        print(lista);
        Console.WriteLine();
        lista = inverter(lista);
        print(lista);
        Console.WriteLine();
    }
}
