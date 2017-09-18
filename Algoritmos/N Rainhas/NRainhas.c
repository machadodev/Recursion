#include <stdio.h>
#include <stdlib.h>

#define RAINHA 1
#define VAZIO 0

void print(int **tabuleiro, int dimensao)
{
	for(int linha = 0; linha < dimensao; linha++)
	{		
		for(int coluna = 0; coluna < dimensao; coluna++)
			printf("%d ", tabuleiro[linha][coluna]);

		printf("\n");
	}

	printf("\n");
}

	// Retorna true caso haja algum conflito na solução
int conflito(int **tabuleiro, int linha, int coluna, int dimensao)
{
	int i = 0;
	int lin = 0;
	int col = 0;

	for(i = 0; i < linha; i++)
	{
		if(tabuleiro[i][coluna] == RAINHA)
			return 0;
	}
		for(lin = 0; lin < linha; lin++)
	{
		for(col = 0; col < dimensao; col++)
		{
			if((tabuleiro[lin][col] == RAINHA) &&
				((linha - lin) == (coluna - col) ||
				(linha - lin) == (col - coluna)))
			{
				return 0;
			}
		}
	}
		return 1;
}


void encontrarSolucoes(int **tabuleiro, int linha, int dimensao)
{
	int coluna = 0;

	if(linha == dimensao)
	{
		print(tabuleiro, dimensao);
	}
	else
	{
		for(coluna = 0; coluna < dimensao; coluna++)
		{
			if(tabuleiro[linha][coluna] == VAZIO)
			{
				tabuleiro[linha][coluna] = RAINHA;

				if(conflito(tabuleiro, linha, coluna, dimensao))
					encontrarSolucoes(tabuleiro, linha + 1, dimensao);
				
				tabuleiro[linha][coluna] = VAZIO;
			}
		}
	}
}




int main(int argc, char* argv[])
{
	const int SIZE = 4;
	int i = 0;

	int **tabuleiro = (int**)calloc(SIZE, sizeof(int*));

	for(i = 0; i < SIZE; i++)
		tabuleiro[i] = (int*)calloc(SIZE, sizeof(int));

	encontrarSolucoes(tabuleiro, 0, SIZE);

	if(tabuleiro)
	{
		for(i = 0; i < SIZE; i++)
		{
			if(tabuleiro[i])
			{
				free(tabuleiro[i]);
				tabuleiro[i] = 0;
			}			
		}

		free(tabuleiro);
		tabuleiro = 0;
	}
	

	return 0;
}
