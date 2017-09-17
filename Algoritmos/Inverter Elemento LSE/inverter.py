class LSE:
    def __init__(self, informacao = None, proximo = None):
        self.informacao = informacao
        self.proximo = proximo

    def __str__(self):
        return str(self.informacao)


def exibirLista(lista):
     if lista != None:
         print(lista, end=" ")
         exibirLista(lista.proximo)
     else:
         print() # Pular linha no final


def inverterLista(lista):
     if lista == None or lista.proximo == None:
        return lista
     else:
        no = lista.proximo
        lista.proximo = None
        invertida = inverterLista(no)
        no.proximo = lista
        return invertida


lista = LSE(1, LSE(2, LSE(3, None)))

exibirLista(lista)

lista = inverterLista(lista)

exibirLista(lista)
