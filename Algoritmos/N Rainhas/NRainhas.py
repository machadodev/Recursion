class NRainhas:
    def __init__(self, dimensao):
        self.tabuleiro = [[0 for x in range(dimensao)] for y in range(dimensao)]
        self.RAINHA = 1
        self.VAZIO = 0

    def __str__(self):
        resultado = ""

        for linha in range(0, len(self.tabuleiro)):
            resultado += str(self.tabuleiro[linha])
            resultado += "\n"
            
        return resultado

    
    def temConflito(self, linha, coluna):
        for i in range(0, linha):
            if self.tabuleiro[i][coluna] == self.RAINHA:
                return True

        for lin in range(0, linha):
            for col in range(0, len(self.tabuleiro[linha])):
                if (self.tabuleiro[lin][col] == self.RAINHA) and ((linha - lin) == (coluna - col) or (linha - lin) == (col - coluna)):
                    return True

        return False


    def encontrarSolucoes(self, linha):
        if linha == len(self.tabuleiro):
            print(self)
        else:
            for coluna in range(0, len(self.tabuleiro[linha])):
                if(self.tabuleiro[linha][coluna] == self.VAZIO):
                    self.tabuleiro[linha][coluna] = self.RAINHA

                    if self.temConflito(linha, coluna) == False:
                        self.encontrarSolucoes(linha + 1)

                    self.tabuleiro[linha][coluna] = self.VAZIO


  
jogo = NRainhas(4)
jogo.encontrarSolucoes(0)
