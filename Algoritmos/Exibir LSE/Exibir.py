def exibirLista(lista):
     if lista != None:
         print(lista, end=" ")
         exibirLista(lista.proximo)
     else:
         print() # Pular linha no final

def exibirListaInvertida(lista):
     if lista != None:
         exibirListaInvertida(lista.proximo)
         print(lista, end=" ")
     else:
         print() # Pular linha no final