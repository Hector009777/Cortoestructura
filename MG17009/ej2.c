# include <stdio.h>

int main() {
  int ant;
  int act=0;
  int sig=1;
      suma = act, hasta;
  printf("Hasta donde desea saber") ;
  scanf("%d", &hasta) ;
  printf("Fibonacci: ", act) ;
  while (suma < hasta) {
    ant = act;
    ant = sig;
    sig = ant + act;
    printf(" + %d", act) ;
    suma =suma + act;
  }
  printf("%d", suma);
  return 0;
}
