#include <stdio.h>
#define clearScreen() printf("\033[H\033[J")

int main(void) {
  char seuNome [30]="";
  float seuSalario = 0; 
  clearScreen(); // limpa tela

  printf("Escreva o seu nome: ");
  scanf("%s", seuNome);
  printf("Coloque o seu salário atual: R$");
  scanf("%f", &seuSalario);

  if (seuSalario<= 1045){
    seuSalario = seuSalario + seuSalario * 0.4;
    printf("%s o seu novo salário é: R$%.2f", seuNome, seuSalario);

  }
  else if (seuSalario > 1045 && seuSalario < 2090){
    seuSalario = seuSalario + seuSalario * 0.38;
    printf("%s o seu novo salário é: R$%.2f", seuNome, seuSalario);
  }
  else {
    seuSalario = seuSalario + seuSalario *0.35;
    printf("%s o seu novo salário é: R$%.2f", seuNome, seuSalario);
  
  }
  return 0;

}
