#include <stdio.h>

//// RYSOWANIE /////////////
void pokaz (int tab[10][10], int s) {
  printf("\n");
  for (int i=0;i<s;i++) {
      for (int j=0;j<s;j++) {
        printf("  %d",tab[i][j]);
      }
      printf("\n");
    }
  printf("\n");
}
////////////////////////////

int main () {

///// WPISYWANIE ///////////
  int liczba;
  int s;
  int tab[10][10];

  do {
    printf("Podaj rozmiar macierzy kwadratowej (maks. 10): ");
    scanf("%d", &s);
  } while (s>10 || s<1);

  for (int i=0;i<s;i++) {
    for (int j=0;j<s;j++) {
    printf("Podaj liczbę. Rząd %d, kolumna %d: \n", i,j);
    scanf("%d", &liczba);
    tab[i][j] = liczba;
    }
  }
////////////////////////////

pokaz(tab,s);

//////////// MENU //////////
int x,k,r;
do {
int suma = 0;

  printf("Co chcesz obliczyć?\n1) Suma wartości poniżej przekątnej.\n2) Suma powyżej przekątnej.\n3) Suma w wierszu.\n4) Suma w kolumnie.\n5) Średnia macierzy.\n6) Obrócenie macierzy.\n7) Zakończ.\n");

  scanf("%d", &x);

  switch (x)
   {
   case 1: 
          for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              if (i != j && j < i) {
                suma = suma + tab[i][j];
                }; 
            };
          };
          printf("Suma poniżej przekątnej = %d\n", suma);
          pokaz(tab,s);
          break;

   case 2:
          for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              if (i != j && j > i) {
                suma = suma + tab[i][j];
                }; 
            };
          };
          printf("Suma powyżej przekątnej = %d\n", suma);
          pokaz(tab,s);
          break;

   case 3:printf("Który wiersz?\n");
          scanf("%d", &r);
          for (int i=0;i<s;i++){
            suma = suma + tab[r][i]; 
          };
          printf("Suma wiersza %d = %d\n", k,suma);
          pokaz(tab,s);
          break;
   
   case 4:printf("Która kolumna?\n");
          scanf("%d", &k);
          for (int i=0;i<s;i++){
            suma = suma + tab[i][k]; 
          };
          printf("Suma kolumny %d = %d\n", k,suma);
          pokaz(tab,s);
          break;

   case 5:
          float srednia;
          srednia = 0;
          for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              suma = suma + tab[i][j];
            }
          }
          srednia = (suma/(s*s));
          printf("suma = %d, Średnia = %.2f\n", suma, srednia);
          pokaz(tab,s);
          break;
   
   case 6:
          int tab2[10][10];
          for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              tab2[i][j] = tab[j][i];
            }
          }
          for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              tab[i][j] = tab2[i][j];
            }
          }
          pokaz(tab,s);
          break;

   case 7:break;
   
   default :printf("Nie ma takiej opcji.");
   }
  } while (x!=7);
}

/////////////////////////////

    // 1 2 3       1 4 7
    // 4 5 6       2 5 8
    // 7 8 9       3 5 9



// Zadanie 4 (8 pkt.)
// Napisz program umożliwiający realizację następujących zadań na macierzy kwadratowej o ustalonym dowolnym wymiarze:
//  Wyznaczenie sumy wartości poniżej przekątnej
//  Wyznaczenie sumy wartości powyżej przekątnej
//  Wyznaczenie sumy we wskazanym przez użytkownika wierszu lub kolumnie
// Zawartość i analizowany zakres macierzy wczytywane mają być od użytkownika (maksymalny rozmiar jest stały, dowolnie ustalony przez programistę użytkownik może jednak chcieć pracować np. tylko na macierzy 3x3). Poza wyliczonymi sumami wyświetl również samą macierz po każdorazowej operacji. Program kończy swoje działanie dopiero po jednoznacznym wskazaniu tego przez użytkownika – pozwala wielokrotnie wyliczać poszczególne sumy
