#include <stdio.h>
#include <cmath>


//// WYNIKI ///////////////////////////
void wyniki (int droga[], int n) {
printf("Optymalna trasa to:\n");
  for (int i=0;i<n;i++) {
    if (i == n-1) {
      printf("%d\n", droga[i]);
      }
    else {
    printf("%d --> ", droga[i]);
    }
  }
printf("\n");
};
///////////////////////////////////////

  //// OBLICZENIA ///////////////////////
int obliczenia(float odleglosc[10][10], int n) {
    int droga[n]; // ostateczna lista
    int odwiedzane[n];   // lista punktów....
    int sprawdzane[n];  //  do zaznaczania odwiedzonych
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
// return droga[n];
wyniki(droga,n);
};



//// ODLEGŁOŚCI ///////////////////////
float odleglosci(int punkty[2][10], int n){
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
    // return odleglosc[10][10];
    obliczenia(odleglosc,n);
  };

///////// WPISYWANIE //////////////////
int wpisywanie () {
  int n,x,y;
  int punkty[2][10];
  
  do {
    printf("Ile punktów chcesz odwiedzić? (Maks. 10)\n");
    scanf("%d", &n);
  } while (n>10 || n<1);
    // return n;
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
    // return punkty[2][10];
    odleglosci(punkty, n);
}
///////////////////////////////////////

int main () {

  wpisywanie();


/// WYŚWIETLANIE LISTY PUNKTÓW ////////
  // for (int i=0;i<n;i++) {
  //   for (int j=0;j<2;j++) {
  //     printf("%d  ", punkty[i][j]);
  //   }
  //   printf("\n");
  // }
///////////////////////////////////////

/// WYŚWIETLANIE TABLICY ODLEGŁOŚCI ///
  // printf("odleglosc\n");
  // for (int i=0;i<n;i++) {
  //   for (int j=0;j<n;j++) {
  //     printf("%.2f  ", odleglosc[i][j]);
  //   }
  //   printf("\n");
  // }
///////////////////////////////////////


  getchar();
  getchar();
}