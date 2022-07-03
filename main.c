#include <stdio.h>


int main()
{

      double glicose;
      char classificacao[50];

      printf("Digite a medida da glicose: ");
      scanf("%lf", &glicose);

      if (glicose <= 100.0) {
          printf("Classificacao: normal");
      }
      else if (glicose <= 140.0) {
         printf("Classificacao: elevado");
      }
      else { printf("Classificacao = diabetes");
      }


    return 0;
}
