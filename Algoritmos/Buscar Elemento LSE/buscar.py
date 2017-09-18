def exibirLista(lista):
     if lista != None:
         print(lista, end=" ")
         exibirLista(lista.proximo)
     else:
         print() # Pular linha no final


def buscar(lista, informacao):
   if lista == None or lista.informacao == informacao:
      return lista
   else:
      return buscar(lista.proximo, informacao)


lista = LSE(1, LSE(2, LSE(3, None)))

exibirLista(lista)
print(buscar(lista, 2))
print(buscar(lista, 10))