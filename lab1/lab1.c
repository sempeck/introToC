// Zadanie 1 (3 pkt.)
// Przygotuj program który wyświetla wizytówkę (dowolna treść ustalona na stałe) w dwóch wersjach – uproszczonej (imię i nazwisko)) i rozszerzonej (imię, nazwisko, adres). Oczywiście – wybór rodzaju wizytówki należy do użytkownika. Pamiętaj, że program nie powinien "znikać" po zakończeniu pracy.

#include<stdio.h>


int main() {
  int n;
  printf("Wybierz:\n1 - wizytówka uproszczona\n2 - wizytówka rozszerzona\n");
  scanf("%d", &n);

  char imieNazwisko[] = "Jarek Sępek";
  char adres[] = "ul. Grottgera 12a\n 48-300 Nysa\n";
  char email[] = "jarek.sepek@mediorama.pl";

  if (n==1) {
    printf("Imię i nazwisko:\n %s\n", imieNazwisko);
  }
  else if (n==2) {
    printf("Imię i nazwisko:\n %s\n", imieNazwisko);
    printf("Adres:\n %s\nEmail:\n %s\n", adres, email);
  }
  else {
    printf("Nieprawidłowy wybór...");
  }

  getchar();
  getchar();
}