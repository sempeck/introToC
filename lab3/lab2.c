// Napisz program, w którym do jednowymiarowej tablicy 10 liczb całkowitych wpiszesz od użytkownika te liczby, a następnie znajdziesz najmniejszą i największą z nich. Wyszukiwanie wartości minimalnej i maksymalnej należy przeprowadzić w stosownych funkcjach, do których należy przekazać tę tablicę (funkcje powinny zwracać wyniki obliczeń, a nie je wyświetlać). Posortuj następnie w innej funkcji tę tablicę przy użyciu bąbelkowego algorytmu sortowania. Sposób sortowania (rosnący, malejący) wybiera użytkownik.

#include <stdio.h>

int max(int tablica[10]) {
  int maxi = tablica[0];
  for (int i=1;i<10;i++) {
    if (tablica[i]>maxi) {
      maxi=tablica[i];
    }
  }
  return maxi;
}

int min(int tablica[10]) {
  int mini = tablica[0];
  for (int i=1;i<10;i++) {
    if (tablica[i]<mini) {
      mini=tablica[i];
    }
  }
  return mini;
}

int sort(int tablica[10],int n,int kierunek) {
  int temp;
  if (kierunek==1) {
    for (int i=0;i<n;i++) {
      for (int j=1;j<n-i;j++) {
        if (tablica[j-1]>tablica[j]) {
          temp = tablica[j-1];
          tablica[j-1] = tablica[j];
          tablica[j] = temp;
        }
      }
    }
  }
  else
    for (int i=0;i<n;i++) {
      for (int j=1;j<n-i;j++) {
        if (tablica[j-1]<tablica[j]) {
          temp = tablica[j-1];
          tablica[j-1] = tablica[j];
          tablica[j] = temp;
        }
      }
    }
  return tablica[10];
}

int main () {
  int tablica[10],n,x;
  for (int i=0;i<10;i++) {
    printf("Podaj liczbę %d:\n", i);
    scanf("%d", &n);
    tablica[i] = n;
  }

printf("Maksymalna wartość: %d\n", max(tablica));
printf("Minimalna wartość: %d\n", min(tablica));
do {
printf("Sortowanie tablicy:\n1) Rosnąco.\n2) Malejąco.\n3) Koniec.\n");
scanf("%d",&x);
if (x==3) {break;};
sort(tablica,10,x);
for (int i=0;i<10;i++){
  printf("%d\n", tablica[i]);
  }
} while (1);

getchar();
getchar();

}

