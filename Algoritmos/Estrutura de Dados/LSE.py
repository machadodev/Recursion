class LSE:
    def __init__(self, informacao = None, proximo = None):
        self.informacao = informacao
        self.proximo = proximo

    def __str__(self):
        return str(self.informacao)