// Zadanie 3 (6 pkt.)
// Napisz program obliczający i drukujący na ekranie objętości i pola powierzchni następujących brył:
// a) kuli
// b) prostopadłościanu
// c) stożka

// (Pamiętaj, że użytkownik decyduje o wyborze bryły, a o niezbędne wymiary (i tylko niezbędne) program pyta później)

// + walec

#include<stdio.h>

int main() {
  int m;
  printf("Program obliczy obiętość i pole powierzchni bryły. Którą wybierasz?\n1) kula\n2) prostopadłościan\n3) stożek\n4) walec\n");
  scanf("%d", &m);

  if (m == 1) {
    float r;
    printf("Podaj promień:\n");
    scanf("%f", &r);
    printf("Pole powierzchni: %.2f\n", 4*3.14*(r*r));
    printf("Objętość: %.2f\n", ((4*3.14)/3)*(r*r*r));
  }
  else if (m == 2) {
    float a,b,h;
    printf("Podaj a:\n");
    scanf("%f", &a);
    printf("Podaj b:\n");
    scanf("%f", &b);
    printf("Podaj H:\n");
    scanf("%f", &h);
    printf("Pole powierzchni: %.2f\n", 2*a*b + 2*b*h + 2*a*h);
    printf("Objętość: %.2f\n", a*b*h);

  }
  else if (m == 3) {
    float h,r,l;
    printf("Podaj wysokość H:\n");
    scanf("%f", &h);
    printf("Podaj tworzącą l:\n");
    scanf("%f", &l);
    printf("Podaj promień podstawy r:\n");
    scanf("%f", &r);
    printf("Pole powierzchni: %.2f\n", (3.14*r*r)+(3.14*r*l));
    printf("Objętość: %.2f\n", ((3.14*r*r*h)/3));    
  }
  else if (m == 4) {
    float h,r;
    printf("Podaj wysokość H:\n");
    scanf("%f", &h);
    printf("Podaj promień podstawy r:\n");
    scanf("%f", &r);
    printf("Pole powierzchni: %.2f\n", (2*3.14*r*r)+(2*3.14*r*h)); // 2*pi*r*r + 2*pi*r*h
    printf("Objętość: %.2f\n", (3.14*r*r*h)); // pi*r*r *h 
  }


  else {
    printf("Nieprawidłowy wybór...\n");
  }

  getchar();
  getchar();
}