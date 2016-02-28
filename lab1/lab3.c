// Zadanie 3 (6 pkt.)
// Napisz program obliczający i drukujący na ekranie objętości i pola powierzchni następujących brył:
// a) kuli
// b) prostopadłościanu
// c) stożka

// (Pamiętaj, że użytkownik decyduje o wyborze bryły, a o niezbędne wymiary (i tylko niezbędne) program pyta
// później)


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