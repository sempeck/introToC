// Zadanie 3 (4 pkt.)
// Napisz program, który wczyta 15 różnych liczb całkowitych do jednowymiarowej tablicy, a następnie znajduje największą i najmniejszą z nich, a także ich pozycje w zbiorze.

#include <stdio.h>

int main () {
  int n;
  int i = 0;
  int tab[15];

// wpisywanie
  while (i < 15) {
    printf("Podaj liczbę nr %d:\n", i);
    scanf("%d", &n);
    tab[i] = n;
    for (int j = 0; j < i; j++) {
      if (n == tab[j]) {
        printf("Ta liczba już była. Podaj inną.\n");
        i--;
      };
    };
    i++;
  };

// max i min
  int min = tab[0];
  int minIndex = 0;
  int max = 0;
  int maxIndex;

  for (i=0;i<15;i++) {
    if (tab[i] > max) {
      max = tab[i];
      maxIndex = i;
    };
    if (tab[i] < min) {
      min = tab[i];
      minIndex = i;
    }

    printf("liczba %d: %d\n", i, tab[i]);
  }

// wynik 
  printf("Najmniejsza liczba: %d, jej indeks: %d\n", min, minIndex);
  printf("Największa liczba: %d, jej indeks: %d\n", max, maxIndex);

  getchar();
  getchar();
}
