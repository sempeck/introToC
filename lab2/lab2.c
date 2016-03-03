// Zadanie 2 (8 pkt.)
// Napisz program, który pozwoli określić jak długo należy przetrzymać lokatę kapitałową w banku, tak aby osiągnąć zadaną przez użytkownika wartość odsetek. Pamiętać należy, iż wysokość kwoty początkowej jak i oprocentowanie w skali roku oraz okres kapitalizacji i oczekiwana kwota odsetek podawane są przez użytkownika. 

#include <stdio.h>

int main () {
  float kwota, oprocentowanie, odsetki, noweOdsetki, nowaKwota;
  int kapitalizacja;
  int czas = 0;

  printf("Program obliczy czas potrzebny do zostania bogatym.\n");
  printf("Podaj wpłacaną kwotę (PLN):\n");
  scanf("%f", &kwota);
  printf("Oprocentowanie w skali roku (proc.):\n");
  scanf("%f", &oprocentowanie);
  printf("Okres kapitalizacji (miesiące):\n");
  scanf("%d", &kapitalizacja);
  printf("Oczekiwana kwota odsetek (PLN): \n");
  scanf("%f", &odsetki);

  nowaKwota = kwota;

  do {
    nowaKwota = nowaKwota + (nowaKwota*(oprocentowanie*0.01));
    // printf("Kwota po kapitalizacji: %.2f zł\n", nowaKwota);
    
    noweOdsetki = nowaKwota - kwota;
    czas = czas + kapitalizacja;
             
  } while (odsetki >= noweOdsetki);

  printf("Oczekiwaną kwotę dostaniesz po %d miesiącach.\n", czas);

getchar();
getchar();

}