/* Entrada e saída padrão */
#include <stdio.h>
/* Para usar strlen() */
#include <string.h>

/* Função recursiva */
int palindromo(char *str, int comeco, int fim)
{
  /* Primeiro caso base */
  if(comeco == fim)
    return 1;

  /* Segundo caso base */
  if(str[comeco] != str[fim])
    return 0;

  /* Passo em direção ao fim do problema */
  return palindromo(str, comeco + 1, fim - 1);
}

int main(int argc, char** argv[])
{
  char* nome = "natan";
  printf("O nome [%s] eh palindromo? %d", nome, palindromo(nome, 0, strlen(nome) - 1));

  return 0;
}
