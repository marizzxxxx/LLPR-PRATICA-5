#include <stdio.h>>
#include <locale.h>>

int main(){

  setlocale(LC_ALL, "Portuguese");
	
  int i, maior = 0, menor = 0, maiorv = 0, menorv = 0, numeros[10];

  for (i = 0; i < 10; i++) {
    printf("Insira o %d° numero: ", i + 1);
    scanf("%d", &numeros[i]);

    if (i == 0) {
      maior = numeros[i];
      menor = numeros[i];
    } else {
      if (numeros[i] > maior) {
        maior = numeros[i];
        maiorv = i;
      }
      if (numeros[i] < menor) {
        menor = numeros[i];
        menorv = i;
      }
    }
  }

  printf("Maior valor: %d\n", maiorv);
  printf("Menor valor: %d\n", menorv);
  printf("Indice do maior numero: %d\n", maior);
  printf("Indice do menor numero: %d\n", menor);

  return 0;
}
