# Função Recursiva
def palindromo(str, comeco, fim):
    # Primeiro caso base
    if comeco == fim:
        return True

    # Segundo caso base
    if str[comeco] != str[fim]:
        return False

    # Passo em direção ao fim do problema
    return palindromo(str, comeco + 1, fim - 1)


nome = "natan"
print("O nome", nome, "eh palindromo?", palindromo(nome, 0, len(nome) - 1))
