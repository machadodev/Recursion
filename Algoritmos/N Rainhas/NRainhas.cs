using System;

class NRainhas
{
    // Atributos
    private const int RAINHA = 1;
    private const int VAZIO = 0;
    private int dimensao;

    private int[,] tabuleiro;

    // Construtor
    public NRainhas(int dimensao)
    {
        this.dimensao = dimensao;
        tabuleiro = new int[dimensao, dimensao];
    }

    // Métodos

    // Retorna true caso haja algum conflito na solução
    private bool conflito(int linha, int coluna)
    {
        for (int i = 0; i < linha; i++)
        {
            if (tabuleiro[i, coluna] == RAINHA)
            {
                return false;
            }
        }

        for (int lin = 0; lin < linha; lin++)
        {
            for (int col = 0; col < this.dimensao; col++)
            {
                if ((tabuleiro[lin, col] == RAINHA) &&
                  ((linha - lin) == (coluna - col) ||
                   (linha - lin) == (col - coluna)))
                {
                    return false;
                }
            }
        }

        return true;
    }

    // backtracking
    private void encontrarSolucoes(int linha)
    {
        if (linha == this.dimensao)
        {
            Console.Write(this);
        }
        else
        {
            for (int coluna = 0; coluna < this.dimensao; coluna++)
            {
                if (tabuleiro[linha, coluna] == VAZIO)
                {
                    tabuleiro[linha, coluna] = RAINHA;

                    if (conflito(linha, coluna))
                    {
                        encontrarSolucoes(linha + 1);
                    }

                    tabuleiro[linha, coluna] = VAZIO;
                }
            }
        }
    }

    public override string ToString()
    {
        string resultado = "";

        for (int linha = 0; linha < this.dimensao; linha++)
        {
            for (int coluna = 0; coluna < this.dimensao; coluna++)
            {
                resultado += " " + tabuleiro[linha, coluna];
            }

            resultado += "\n";
        }

        resultado += "\n";

        return resultado;
    }


    public static void Main(string[] args)
    {
        NRainhas jogo = new NRainhas(4);
        jogo.encontrarSolucoes(0);
    }
}