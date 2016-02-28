// piramida z gwiazdek

#include<stdio.h>

int main() {
  int n;
  printf("Podaj wysokość piramidy:\n");
  scanf("%d", &n);

  for (int i = 1; i<=n; i++) {
    for (int k = n-i; k>0; k--) {
      printf(" ");
    };
    for (int j = 1; j<=i; j++) {
      printf("* ");
   };
      printf("\n");
  };

  getchar();
  getchar();
}
