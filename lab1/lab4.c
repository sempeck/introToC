// Zadanie 4 (8 pkt.)
// Napisz program, który pyta o oceny z kilku różnych przedmiotów danego studenta, a następnie liczy średnią tych ocen. Sprawdź ponadto, czy studentowi o takiej średniej przysługuje stypendium naukowe (jeśli średnia > 4.1). Należy zapytać użytkownika ile ocen chce podać.

#include<stdio.h>

int main() {

  float m,n,s;
  float suma = 0;
  printf("Program policzy średnią ocen. Ile masz przedmiotów?\n");
  scanf("%f", &m);
  printf("Jaki jest próg, by dostać stypendium?\n");
  scanf("%f", &s);

  for (int i = 1; i <= m; i++) {
  //  do {
    printf("Ocena %d: ", i);
    scanf("%f", &n); 
    //} 
    if ((n > 2) || (n < 5)) {  
     suma = suma + n; 
   }   
  };

  printf("Twoja średnia: %.2f\n", suma/m);

  if (suma/m > s) {
    printf("Hej! Dostaniesz stypendium.");
  }
  else
  {
    printf("Niestety w tym roku nici ze stypendium.");
  }

  getchar();
  getchar();
}