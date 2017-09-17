# Função Recursiva
def fatorial(n):
  # Caso base
  if n <= 1:
    return 1
  # Passo em direção ao fim do problema
  return n * fatorial(n - 1)


n = int(input("Deseja calcular o fatorial de qual numero? : "))
fat = fatorial(n)

print("Fatorial de", n, ":", fat)
