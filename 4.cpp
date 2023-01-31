#include <stdio.h>>
#include <locale.h>>

int main(){

  setlocale(LC_ALL, "Portuguese");
	
  int num, i, razao, t[10];

  printf("Numero inicial: ");
  scanf("%d", &num);
  printf("Razão: ");
  scanf("%d", &razao);

  t[0] = num;
  for (i = 1; i < 10; i++) {
    t[i] = t[i - 1] * razao;
  }

  printf("Termos da P.G: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", t[i]);
  }

  return 0;
}
