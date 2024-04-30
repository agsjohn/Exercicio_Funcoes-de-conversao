#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meu.h"

main(){
  int a, esc;
  char p;
  do{
    system("clear");
    printf("Selecione uma das opções: \n[1] - Converter de letra para número\n[2] - Converter de número para letra\n[0] - Sair do programa\n");
    scanf("%i", &esc);
    getchar();
    while(esc != 0 && esc != 1 && esc != 2){
      printf("Digite um código válido: ");
      scanf("%i", &esc);
      getchar();
    }
    if(esc != 0){
      switch(esc){
        case 1:
          printf("\nDigite uma letra para converter: ");
          scanf("%c", &p);
          getchar();
          a = convchar(p);
          printf("Conversão: %i", a);
          getchar();
        break;
        case 2:
          printf("\nDigite um número para converter: ");
          scanf("%i", &a);
          getchar();
          p = convint(a);
          printf("Conversão: %c", p);
          getchar();
        break;
      }
    }
  }while(esc != 0);
}