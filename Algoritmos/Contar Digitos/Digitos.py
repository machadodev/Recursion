# Função Recursiva
def conta_digitos(n):
  # Caso base
  if n <= 0:
    return 0
  # Passo em direção ao fim do problema
  return 1 + conta_digitos(n // 10)

n = int(input("Digite um numero: "))
print("O numero", n, "tem", conta_digitos(n), "digitos")
