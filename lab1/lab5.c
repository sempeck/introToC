// piramida z gwiazdek

// Tak czy do góry nogami


#include<stdio.h>

int main() {
  int n,t;
  printf("Podaj wysokość piramidy:\n");
  scanf("%d", &n);
  printf("Wyświetlić odwróconą?\n1) tak\n2) nie\n");
  scanf("%d", &t);

if (t==1) {

  for (int i = 1; i<=n; i++) {
    for (int k = 1; k<=i; k++) {
      printf(" ");
    };
    for (int j = n; j>=i; j--) {
      printf("* ");
   };
      printf("\n");
  };
  };


  if (t==2) {

  for (int i = 1; i<=n; i++) {
    for (int k = n-i; k>0; k--) {
      printf(" ");
    };
    for (int j = 1; j<=i; j++) {
      printf("* ");
   };
      printf("\n");
  };
  };

  getchar();
  getchar();
}
