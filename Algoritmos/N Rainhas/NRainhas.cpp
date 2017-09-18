#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define RAINHA 1
#define VAZIO 0

class NRainhas
{
	// Atributos
private:
	int **tabuleiro;
	int dimensao;

private:
	// Retorna true caso haja algum conflito na solução
	bool conflito(int linha, int coluna)
	{
		for(int i = 0; i < linha; i++)
		{
			if(tabuleiro[i][coluna] == RAINHA)
			{
				return false;
			}
		}

		for(int lin = 0; lin < linha; lin++)
		{
			for(int col = 0; col < this->dimensao; col++)
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

public:
	// Construtor
	NRainhas(int dimensao)
	{
		this->dimensao = dimensao;
		this->tabuleiro = new int*[dimensao];

		for(int i = 0; i < this->dimensao; i++)
		{
			tabuleiro[i] = new int[dimensao]();
		}
	}

	~NRainhas()
	{
		if(tabuleiro)
		{
			for(int i = 0; i < this->dimensao; i++)
			{
			
				if(tabuleiro[i])
				{
					delete tabuleiro[i];
					tabuleiro[i] = nullptr;
				}
		
			}

			delete[] tabuleiro;
			tabuleiro = nullptr;
		}
	}

	// backtracking
	void encontrarSolucoes(int linha)
	{
		if(linha == this->dimensao)
		{
			print();
		}
		else
		{
			for(int coluna = 0; coluna < this->dimensao; coluna++)
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

	void print()
	{
		for(int linha = 0; linha < this->dimensao; linha++)
		{
			string resultado;			

			for(int coluna = 0; coluna < this->dimensao; coluna++)
			{
				ostringstream ss;
				ss << tabuleiro[linha][coluna];
				resultado += ss.str() + " ";
			}

			cout << resultado << endl;
		}

		cout << endl;
	}
};


int main(int argc, char* argv[])
{
	NRainhas jogo(4);
	jogo.encontrarSolucoes(0);
	return 0;
}

