// Zadanie 2 (3 pkt.)
// Napisz program prezentujący działanie operatorów arytmetycznych - program pobiera argumenty od użytkownika i prezentuje je oraz wyniki operacji na nich na ekranie.

#include<stdio.h>

int main() {
  int n, m;
  printf("Podaj n:\n");
  scanf("%d", &n);
  printf("Podaj m:\n");
  scanf("%d", &m);

  printf("Podałeś n: %d i m: %d\n", n,m);
  printf("Dodawanie: %d + %d = %d\n", n,m,n+m);
  printf("Odejmowanie: %d - %d = %d\n", n,m,n-m);
  printf("Mnożenie: %d * %d = %d\n", n,m,n*m);
  printf("Dzielenie: %d / %d = %.2f\n", n,m, n/(float)m);
  printf("Reszta z dzielenia: %d mod %d = %d\n", n,m,n % m);
  printf("Dekrementacja: %d, %d\n", --n,--m);
  printf("Inkrementacja: %d, %d\n", ++n,++m);

  getchar();
  getchar();
}