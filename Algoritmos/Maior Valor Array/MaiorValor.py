# Retorna o maior valor entre dois numeros
def maximo(a, b):
    return a if a > b else b

# Função recursiva
def maior(vetor, cursor):
  # Caso base
  if cursor == 0: return vetor[cursor];

  # Passo em direção ao fim do problema
  return maximo(vetor[cursor], maior(vetor, cursor - 1));


vetor = [30, 5, 12, 32, 5, 7, 9, 10, 22, 100]
print("Maior valor: ", maior(vetor, len(vetor) - 1))
