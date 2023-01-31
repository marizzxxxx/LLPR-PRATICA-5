#include <stdio.h>>
#include <locale.h>>

int main(){

  setlocale(LC_ALL, "Portuguese");
	
  int num, i, razao, t[10];

  printf("Numero inicial: ");
  scanf("%d", &num);
  printf("Razão: ");
  scanf("%d", &razao);

  for (i = 0; i < 10; i++) {
    t[i] = num + i * razao;
  }

  printf("Termos da P.A: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", t[i]);
  }

  return 0;
}
