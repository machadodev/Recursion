public class NRainhas
{    
    // Atributos
    private static final int RAINHA = 1;
    private static final int VAZIO = 0;

    private int[][] tabuleiro;

    // Construtor
    public NRainhas(int dimensao)
    {
        tabuleiro = criarTabuleiro(dimensao);
    }
    
    // Métodos

    // Cria um tabuleiro com tamanho dimensao x dimensao
    private int[][] criarTabuleiro(int dimensao)
    {
        int[][] resultado = new int[dimensao][dimensao]; 
    
        return resultado;
    }
    
    // Retorna true caso haja algum conflito na solução
    private boolean conflito(int linha, int coluna) 
    {
        for(int i = 0; i < linha; i++)
        {
            if (tabuleiro[i][coluna] == RAINHA)
            {
                return false;
            }
        }

        for(int lin = 0; lin < linha; lin++)
        { 
            for(int col = 0; col < tabuleiro[linha].length; col++)
            {
                if((tabuleiro[lin][col] == RAINHA) && 
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
        if(linha == tabuleiro.length)
        {
            System.out.println(this);
        } 
        else
        {
            for(int coluna = 0; coluna < tabuleiro[linha].length; coluna++)
            {
                if(tabuleiro[linha][coluna] == VAZIO)
                {
                    tabuleiro[linha][coluna] = RAINHA;

                    if(conflito(linha, coluna))
                    {
                        encontrarSolucoes(linha + 1);
                    }

                    tabuleiro[linha][coluna] = VAZIO;
                }            
            }
        }
    }

    public String toString()
    {
        String resultado = "";
        
        for(int linha = 0; linha < tabuleiro.length; linha++)
        {
            for(int coluna = 0; coluna < tabuleiro[linha].length; coluna++)
            {
                resultado += " " + tabuleiro[linha][coluna];
            }

            resultado += "\n";
        }

        return resultado;
    }


    public static void main(String[] args)
    {       
        NRainhas jogo = new NRainhas(4);
        jogo.encontrarSolucoes(0);   
    }    
}
