// Opracuj typ strukturalny, który umożliwi przechowywanie informacji o płycie CD. 
// Struktura ta powinna zawierać informację o tytule albumu, nazwisku wykonawcy, nazwie wydawcy, roku wydania i cenie płyty. 
// Dodatkowo powinien pozwolić przechowywać tablicę 25 struktur typu TUtwor, które powinny umożliwiać przechowywanie informacji o autorze utworu, wykonawcy i czasie jego trwania. 

// Przygotuj funkcję, która umożliwi wypełnienie tablicy 10 takich struktur, 

// a także funkcję, która umożliwi wyświetlenie na ekranie jej zawartości. 

// Przygotuj również funkcję, która jako parametr wywołania otrzyma powyższą tablicę struktur, a następnie zwróci jako wynik swojego działania średnią cenę płyt znajdujących się w tablicy. 

// Proszę nie zapomnieć o programie, który pozwoli te funkcje wywołać. 

#include <stdio.h>

struct TUtwor {
  char author[10];
  char performer[10];
  int timer;
};

struct cd {
  char title[10];
  char performer[10];
  char publisher[10];
  int year;
  float price;
  TUtwor lista[25];
};

cd fillTable(cd tablica[]) {
  return tablica[5];
}

void showTable() {

}

float averagePrice() {

}

int main() {
  int ile;
  printf("Ile płyt chcesz dodać?\n");
  scanf("%d", &ile);
  cd tablica[ile];
  fillTable(tablica);

// Użycie struktury:
// struct dane_osobowe Kowalski,Nowak;
// Kowalski.wiek=10;
// printf("%d",Kowalski.wiek);

getchar();
getchar();

}