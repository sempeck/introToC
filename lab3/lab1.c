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
void ponizejPrzekatnej (int tab[10][10], int s) {
  int suma = 0;
for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              if (i != j && j < i) {
                suma = suma + tab[i][j];
                }; 
            };
          };
          printf("Suma poniżej przekątnej = %d\n", suma);
          pokaz(tab,s);
}
////////////////////////////
void powyzejPrzekatnej (int tab[10][10], int s) {
  int suma = 0;
for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              if (i != j && j > i) {
                suma = suma + tab[i][j];
                }; 
            };
          };
          printf("Suma powyżej przekątnej = %d\n", suma);
          pokaz(tab,s);
}
////////////////////////////
void sumaWiersza (int tab[10][10], int s) {
  int suma = 0;
  int k,r;
printf("Który wiersz?\n");
          scanf("%d", &r);
          for (int i=0;i<s;i++){
            suma = suma + tab[r][i]; 
          };
          printf("Suma wiersza %d = %d\n", k,suma);
          pokaz(tab,s);
}
////////////////////////////
void sumaKolumny (int tab[10][10], int s) {
  int suma = 0;
  int k;
printf("Która kolumna?\n");
          scanf("%d", &k);
          for (int i=0;i<s;i++){
            suma = suma + tab[i][k]; 
          };
          printf("Suma kolumny %d = %d\n", k,suma);
          pokaz(tab,s);
}
////////////////////////////
void sredniaMacierzy (int tab[10][10], int s) {
  float srednia;
  int suma = 0;
          srednia = 0;
          for (int i=0;i<s;i++){
            for (int j=0;j<s;j++) {
              suma = suma + tab[i][j];
            }
          }
          srednia = (suma/(s*s));
          printf("suma = %d, Średnia = %.2f\n", suma, srednia);
          pokaz(tab,s);
  }
////////////////////////////
void obrotMacierzy (int tab[10][10], int s) {
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
}
////////////////////////////
void wpisywanie (int tab[10][10], int s) {
  int liczba;
  for (int i=0;i<s;i++) {
    for (int j=0;j<s;j++) {
    printf("Podaj liczbę. Rząd %d, kolumna %d: \n", i,j);
    scanf("%d", &liczba);
    tab[i][j] = liczba;
    }
    // return tab[10][10];
  }
pokaz(tab,s);
}
////////////////////////////



int main () {

///// WPISYWANIE ///////////
  int s;
  int tab[10][10];
  int x;
 
 do {
    printf("Podaj rozmiar macierzy kwadratowej (maks. 10): ");
    scanf("%d", &s);
  } while (s>10 || s<1);

//////////// MENU //////////
wpisywanie(tab,s);
do {

  printf("Co chcesz obliczyć?\n1) Suma wartości poniżej przekątnej.\n2) Suma powyżej przekątnej.\n3) Suma w wierszu.\n4) Suma w kolumnie.\n5) Średnia macierzy.\n6) Obrócenie macierzy.\n7) Zakończ.\n");

  scanf("%d", &x);

  switch (x)
   {
    case 1: 
      ponizejPrzekatnej(tab,s);    
        break;

   case 2:
      powyzejPrzekatnej(tab,s);
        break;

   case 3:
      sumaWiersza(tab,s);
        break;
   
   case 4:
      sumaKolumny(tab,s);
        break;

   case 5:
      sredniaMacierzy(tab,s);    
        break;
   
   case 6:
      obrotMacierzy(tab,s); 
        break;

   case 7:break;
   
   default :printf("Nie ma takiej opcji.");
   }
  } while (x!=7);
}
