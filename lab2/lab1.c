// Zadanie 1 (5 pkt.)
// Używając dowolnie wybranej pętli przygotuj program, który liczy wartość n!, a następnie sumę ciągu postaci 1/(1+n) - 1/(2+n) + 1/(3+n) -1/(4+n) +1/(5+n) - … + 1/(n+n).
// Oczywiście wyniki obliczeń powinny zostać zaprezentowane użytkownikowi na ekranie. 

#include <stdio.h>

int main() {
  float zn, n;
  float s = 1;
  float c = 0;
  printf("Podaj n: \n");
  scanf("%f", &n);

  for (int i = 1; i<=n; i++) {
// silnia
    s = s*i;

// ciąg
    if (i % 2 == 0) {
      zn = -1;
    }
    else {
      zn = 1;
    };
    c = c + (zn/(i+n));

  };

  printf("n! = %0.f\n", s);
  printf("Suma ciągu = %f\n", c);

  getchar();
  getchar();

}
