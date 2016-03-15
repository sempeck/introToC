// Napisz program, który umożliwi znalezienie najkrótszej drogi, którą trzeba przejść, aby „odwiedzić” wszystkie punkty z podanych przez użytkownika.

 // Użytkownik decyduje o tym ile punktów chce podać (max 10). 

// Każdy punkt to dwie współrzędne (x,y). Wyznaczanie drogi rozpocząć należy od punktu podanego jako pierwszy. Poszczególne elementy programu tj. wprowadzanie danych, wyświetlanie wyników pracy oraz wykonywanie obliczeń powinny być realizowane przez specjalistyczne funkcje. 

#include <stdio.h>
#include <cmath>

int main () {

///////// WPISYWANIE //////////////////
  int n,x,y;
  int punkty[2][10];
  
  do {
    printf("Ile punktów chcesz odwiedzić? (Maks. 10)\n");
    scanf("%d", &n);
  } while (n>10 || n<1);
    
  for (int i=0;i<n;i++) {
    printf("Punkt %d:\n", i);
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    printf("\n");
    punkty[i][0] = x;
    punkty[i][1] = y;
    }
///////////////////////////////////////

//// ODLEGŁOŚCI ///////////////////////
    float odleglosc[10][10];

    for (int i=0;i<n;i++) {
      for (int j=0; j<n;j++) {
        if (i==j) {
          odleglosc[i][j] = 0;
        }
        else {
          odleglosc[i][j] = sqrt(((punkty[j][0] - punkty[i][0])*(punkty[j][0] - punkty[i][0])) + ((punkty[j][1] - punkty[i][1])*(punkty[j][1] - punkty[i][1])));
        }
      }
    }
///////////////////////////////////////    

//// OBLICZENIA ///////////////////////
    int droga[n]; // ostateczna lista
    int odwiedzane[n];   // lista punktów....
    int sprawdzane[n];  // miasto_spr1 do zaznaczania odwiedzonych
    int next;
    for (int i=0;i<n;i++) {
      sprawdzane[i] = i;
      odwiedzane[i] = i;
    }
    int start = 0;

    for (int i=0;i<n;i++) {
      int min = 1000;
      for (int j=0;j<n;j++) {
        if (sprawdzane[j] != 666) {
          if ((odleglosc[start][j] < min) && (odleglosc[start][j] > 0)) {
            min = odleglosc[start][j];
            next = j;
          }
        }
      }
      sprawdzane[start] = 666;
      droga[i] = odwiedzane[start];
      start = next;
    }

///////////////////////////////////////

//// WYNIKI ///////////////////////////

printf("Optymalna trasa to:\n");
  for (int i=0;i<n;i++) {
    printf("%d --> ", droga[i]);
  }
printf("\n");
///////////////////////////////////////


/// WYŚWIETLANIE LISTY PUNKTÓW ////////
  for (int i=0;i<n;i++) {
    for (int j=0;j<2;j++) {
      printf("%d  ", punkty[i][j]);
    }
    printf("\n");
  }
///////////////////////////////////////

/// WYŚWIETLANIE TABLICY ODLEGŁOŚCI ///
  printf("odleglosc\n");
  for (int i=0;i<n;i++) {
    for (int j=0;j<n;j++) {
      printf("%.2f  ", odleglosc[i][j]);
    }
    printf("\n");
  }
///////////////////////////////////////


  getchar();
  getchar();
}