#ifndef ZADANIA_H
#define ZADANIA_H

#include <vector>
//////////////////////////////////// POZIOM 1 — Absolutne podstawy

void zad1();
// 1. Powitanie
// Wymagania:
//  Program pyta o imię i następnie wypisuje powitanie zawierające podane imię.
// Podpowiedź:
//  Potrzebujesz jednej zmiennej typu string.
// Testy:
// Wejście:
// Jan

// Wyjście:
// Witaj, Jan!
// Wejście:
// Anna

// Wyjście:
// Witaj, Anna!

void zad2();
// 2. Suma dwóch liczb
// Wymagania:
//  Wczytaj dwie liczby całkowite i wypisz ich sumę.
// Podpowiedź:
//  Zacznij od zadeklarowania dwóch zmiennych typu int.
// Testy:
// 5 7 → 12
// 10 -3 → 7
// 0 100 → 100

void zad3();
// 3. Pole prostokąta
// Wymagania:
//  Wczytaj długość i szerokość prostokąta i oblicz jego pole oraz obwód.
// Podpowiedź:
//  Zastanów się, które działania matematyczne wykorzystasz.
// Testy:
// 5 3
// Pole: 15
// Obwod: 16
// 10 10
// Pole: 100
// Obwod: 40

void zad4();
// 4. Celsius → Fahrenheit
// Wymagania:
//  Wczytaj temperaturę w stopniach Celsjusza i przelicz ją na Fahrenheita.
// Podpowiedź:
//  Użyj typu zmiennoprzecinkowego.
// Testy:
// 0 → 32
// 100 → 212
// -40 → -40

void zad5();
// 5. Czy liczba jest parzysta?
// Wymagania:
//  Wczytaj liczbę całkowitą i wypisz, czy jest parzysta, czy nieparzysta.
// Podpowiedź:
//  Przyda się operator %.
// Testy:
// 8 → parzysta
// 7 → nieparzysta
// 0 → parzysta
// -4 → parzysta

void zad6();
// 6. Dodatnia, ujemna czy zero?
// Wymagania:
//  Wczytaj liczbę i określ jej znak.
// Testy:
// 5 → dodatnia
// -8 → ujemna
// 0 → zero

void zad7();
// 7. Większa z dwóch
// Wymagania:
//  Wczytaj dwie liczby i wypisz większą.
// Podpowiedź:
//  Pamiętaj o przypadku, gdy są równe.
// Testy:
// 5 9 → 9
// 10 3 → 10
// 7 7 → 7

void zad8();
// 8. Zamiana dwóch liczb
// Wymagania:
//  Wczytaj a i b, zamień ich wartości i wyświetl wynik.
// Podpowiedź:
//  Na tym etapie możesz użyć zmiennej pomocniczej.
// Testy:
// 5 10 → 10 5
// 1 2 → 2 1
// 100 100 → 100 100

void zad9();
// 9. Ostatnia cyfra liczby
// Wymagania:
//  Wczytaj liczbę całkowitą i wyświetl jej ostatnią cyfrę.
// Podpowiedź:
//  Pomyśl, co daje reszta z dzielenia przez 10.
// Testy:
// 123 → 3
// 58 → 8
// 70 → 0

void zad10();
// 10. Prosty kalkulator
// Wymagania:
//  Wczytaj dwie liczby oraz operator +, -, * lub /. Wykonaj odpowiednią operację.
// Podpowiedź:
//  switch może być tutaj wygodniejszy niż wiele if.
// Testy:
// 10 5 +
// → 15

// 10 5 -
// → 5

// 10 5 *
// → 50

// 10 5 /
// → 2

//////////////////////////////////// POZIOM 2 — Warunki i pętle

void zad11();
// 11. Największa z trzech liczb
// Wymagania:
//  Wczytaj trzy liczby i znajdź największą.
// Podpowiedź:
//  Nie zakładaj, że wszystkie są różne.
// Testy:
// 4 9 2 → 9
// 10 3 7 → 10
// 5 5 5 → 5

void zad12();
// 12. Przedział
// Wymagania:
//  Sprawdź, czy liczba należy do przedziału domkniętego [10, 20].
// Testy:
// 10 → tak
// 15 → tak
// 20 → tak
// 21 → nie
// 9 → nie

void zad13();
// 13. Równanie liniowe
// Wymagania:
//  Rozwiąż równanie ax + b = 0.
// Uwzględnij również przypadki szczególne.
// Podpowiedź:
//  Co się dzieje, gdy a == 0?
// Testy:
// 2 4 → x = -2
// 5 -10 → x = 2
// 0 0 → nieskończenie wiele rozwiązań
// 0 5 → brak rozwiązań

void zad14();
// 14. Liczby od 1 do N
// Wymagania:
//  Wczytaj N i wypisz liczby od 1 do N.
// Testy:
// 5 → 1 2 3 4 5
// 1 → 1

void zad15();
// 15. Liczby od N do 1
// Wymagania:
//  Wypisz liczby malejąco.
// Testy:
// 5 → 5 4 3 2 1
// 3 → 3 2 1

void zad16();
// 16. Suma od 1 do N
// Wymagania:
//  Oblicz sumę:
// 1 + 2 + ... + N
// Podpowiedź:
//  Na tym etapie zrób to za pomocą pętli.
// Testy:
// 5 → 15
// 10 → 55
// 1 → 1

void zad17();
// 17. Tabliczka mnożenia
// Wymagania:
//  Wczytaj liczbę i wypisz jej mnożenie przez 1–10.
// Test:
// 5
// 5
// 10
// 15
// ...
// 50

void zad18();
// 18. Silnia
// Wymagania:
//  Oblicz n!.
// Podpowiedź:
//  Pamiętaj, że 0! = 1.
// Testy:
// 0 → 1
// 1 → 1
// 5 → 120
// 6 → 720

void zad19();
// 19. Liczby parzyste
// Wymagania:
//  Wczytaj N i wypisz wszystkie liczby parzyste od 0 do N.
// Testy:
// 10 → 0 2 4 6 8 10
// 7 → 0 2 4 6

void zad20();
// 20. Zgadnij liczbę
// Wymagania:
//  Program posiada ukrytą liczbę. Użytkownik próbuje ją odgadnąć. Program odpowiada:
// za mała,
// za duża,
// trafiona.
// Podpowiedź:
//  Na początek możesz ustawić stałą liczbę zamiast losowania.
// Test:
//  Dla liczby docelowej 50:
// 30 → za mala
// 70 → za duza
// 50 → trafiona

//////////////////////////////////// POZIOM 3 — Typy, operatory, string

void zad21();
// 21. Cyfry liczby
// Wymagania:
//  Policz, ile cyfr ma liczba.
// Testy:
// 7 → 1
// 123 → 3
// 50000 → 5

void zad22();
// 22. Suma cyfr
// Wymagania:
//  Oblicz sumę wszystkich cyfr.
// Testy:
// 1234 → 10
// 999 → 27
// 100 → 1

void zad23();
// 23. Odwrócona liczba
// Wymagania:
//  Dla liczby 12345 uzyskaj 54321.
// Podpowiedź:
//  Wykorzystaj operacje na kolejnych cyfrach.
// Testy:
// 123 → 321
// 500 → 5
// 10 → 1

void zad24();
// 24. Kalkulator BMI
// Wymagania:
//  Wczytaj wagę i wzrost. Oblicz BMI i określ kategorię.
// Podpowiedź:
//  Wzrost w obliczeniach powinien być potraktowany w metrach.
// Testy:
// 80 1.80 → około 24.69
// 60 1.80 → około 18.52
// 100 1.80 → około 30.86

void zad25();
// 25. Kod ASCII
// Wymagania:
//  Wczytaj pojedynczy znak i wypisz jego kod liczbowy.
// Testy:
// A → 65
// a → 97
// 0 → 48

void zad26();
// 26. Analizator znaku
// Wymagania:
//  Określ, czy znak jest:
// cyfrą,
// wielką literą,
// małą literą,
// innym znakiem.
// Testy:
// A → wielka litera
// z → mala litera
// 7 → cyfra
// @ → inny znak

void zad27();
// 27. Długość napisu
// Wymagania:
//  Wczytaj napis i policz liczbę znaków.
// Podpowiedź:
//  Sprawdź, jak działa string::length() lub size().
// Testy:
// kot → 3
// C++ → 3
// abc def → 7

void zad28();
// 28. Liczenie samogłosek
// Wymagania:
//  Policz samogłoski w napisie.
// Testy:
// ala ma kota → 5
// programowanie → odpowiednia liczba
// xyz → 0

void zad29();
// 29. Palindrom
// Wymagania:
//  Sprawdź, czy słowo czytane od tyłu jest takie samo.
// Testy:
// kajak → tak
// level → tak
// kot → nie

void zad30();
// 30. Największy znak
// Wymagania:
//  Wczytaj napis i znajdź znak o największej wartości kodu.
// Podpowiedź:
//  Traktuj znaki jako wartości, które można porównywać.
// Testy:
// abc → c
// A2B → B lub odpowiednio największy kodowo znak
// 123 → 3

//////////////////////////////////// POZIOM 4 — vector i funkcje

void zad31();
// 31. Średnia z wektora
// Wymagania:
//  Wczytaj N liczb do vector<int> i oblicz średnią.
// Testy:
// 3
// 10 20 30
// → 20
// 4
// 1 2 3 4
// → 2.5

void zad32();
// 32. Minimum i maksimum
// Wymagania:
//  Znajdź minimum i maksimum w wektorze.
// Testy:
// 5
// 4 8 2 9 1
// → min=1 max=9

void zad33();
// 33. Liczby parzyste do nowego wektora
// Wymagania:
//  Z pierwszego wektora utwórz drugi zawierający tylko liczby parzyste.
// Test:
// 1 2 3 4 5 6
// → 2 4 6

void zad34();
// 34. Liczenie wystąpień
// Wymagania:
//  Policz, ile razy dana liczba występuje w wektorze.
// Test:
// 1 2 2 3 2 4
// szukana: 2
// → 3

void zad35();
// 35. Wyszukiwanie
// Wymagania:
//  Napisz funkcję sprawdzającą, czy dana wartość znajduje się w wektorze.
// Testy:
// [1 3 5 7], 5 → znaleziono
// [1 3 5 7], 2 → brak

void zad36();
// 36. Suma elementów
// Wymagania:
//  Napisz funkcję sum(...).
// Testy:
// [1,2,3] → 6
// [-1,1] → 0
// [] → ustal sensowne zachowanie

void zad37();
// 37. Najdłuższe słowo
// Wymagania:
//  Wczytaj kilka słów i znajdź najdłuższe.
// Test:
// kot pies samochod
// → samochod

void zad38();
// 38. Odwrócenie wektora
// Wymagania:
//  Odwróć kolejność elementów.
// Test:
// 1 2 3 4 5
// → 5 4 3 2 1

void zad39();
// 39. Drugi największy element
// Wymagania:
//  Znajdź drugi największy różny element.
// Podpowiedź:
//  Zastanów się, co zrobić, gdy największa wartość występuje wiele razy.
// Testy:
// 1 5 3 4 2 → 4
// 5 5 4 3 → 4

int suma(std::vector<int> name);
double srednia(std::vector<int> name);
int minimum(std::vector<int> name);
int maximum(std::vector<int> name);
std::vector<int> par(std::vector<int> name);
std::vector<int> wypelnij();

void zad40();
// 40. Wielofunkcyjny analizator
// Wymagania:
//  Program ma posiadać oddzielne funkcje do:
// sumy,
// średniej,
// minimum,
// maksimum,
// liczby parzystych.
// Test:
//  Przetestuj wszystko na:
// 2 4 7 8 10

//////////////////////////////////// POZIOM 5 — Tablice i macierze

void zad41();
// 41. Tablica 10 elementów
// Wymagania:
//  Wczytaj 10 liczb i wyświetl je w kolejności.
// Test:
//  Sprawdź kolejno:
// 1 2 3 4 5 6 7 8 9 10

void zad42();
// 42. Odwrócenie tablicy
// Wymagania:
//  Odwróć tablicę bez tworzenia drugiej tablicy.
// Test:
// 1 2 3 4 → 4 3 2 1

void zad43();
// 43. Przesunięcie w prawo
// Wymagania:
//  Przesuń elementy tablicy o jedno miejsce w prawo.
// Test:
// 1 2 3 4 5
// → 5 1 2 3 4

void zad44();
// 44. Czy tablica jest uporządkowana?
// Wymagania:
//  Sprawdź, czy tablica jest niemalejąca.
// Testy:
// 1 2 3 4 → tak
// 1 3 2 4 → nie
// 5 5 5 → tak

void zad45();
// 45. Sortowanie własne
// Wymagania:
//  Posortuj tablicę rosnąco. Nie używaj gotowego sort().
// Podpowiedź:
//  Zaimplementuj prosty algorytm, np. bąbelkowy.
// Test:
// 5 2 8 1 4
// → 1 2 4 5 8

void zad46();
// 46. Macierz 3×3
// Wymagania:
//  Wczytaj macierz 3×3 i oblicz sumę wszystkich elementów.
// Test:
//  Dla:
// 1 2 3
// 4 5 6
// 7 8 9
// wynik powinien wynosić 45.

void zad47();
// 47. Przekątna macierzy
// Wymagania:
//  Wyświetl główną przekątną.
// Test:
// 1 2 3
// 4 5 6
// 7 8 9
// Oczekiwane:
// 1 5 9

void zad48();
// 48. Transpozycja macierzy
// Wymagania:
//  Zamień wiersze z kolumnami.
// Test:
// 1 2
// 3 4
// Oczekiwane:
// 1 3
// 2 4

void zad49();
// 49. Suma wierszy
// Wymagania:
//  Dla macierzy 3×3 oblicz sumę każdego wiersza.
// Test:
// 1 2 3
// 4 5 6
// 7 8 9
// Wynik:
// 6
// 15
// 24


bool playerSwitch(bool whichPlayer);
int checkWin(char tab[3][3]);
void zad50();
// 50. Kółko i krzyżyk
// Wymagania:
//  Zbuduj planszę 3×3. Dwóch graczy wykonuje ruchy naprzemiennie. Program musi wykrywać zwycięstwo i remis.
// Podpowiedź:
//  Zacznij od samej planszy. Dopiero później dodaj sprawdzanie zwycięstwa.
// Testy:
// Test zwycięstwa:
// X X X
// O O -
// - - -
// Test remisu:
// X O X
// X O O
// O X X

//////////////////////////////////// POZIOM 6 — Wskaźniki

void zad51();
// 51. Adres zmiennej
// Wymagania:
//  Utwórz zmienną i wskaźnik do niej. Wyświetl adres zmiennej.
// Test:
//  Adres będzie różny przy każdym uruchomieniu. Sprawdź natomiast, czy wskaźnik rzeczywiście przechowuje adres zmiennej.

void zad52();
// 52. Odczyt poprzez wskaźnik
// Wymagania:
//  Odczytaj wartość zmiennej za pośrednictwem wskaźnika.
// Test:
// a = 42
// → 42

void zad53();
// 53. Zmiana poprzez wskaźnik
// Wymagania:
//  Zmodyfikuj wartość zmiennej przez wskaźnik.
// Test:
// początkowo: 10
// po operacji: 50

void zad54();
// 54. Zamiana przez wskaźniki
// Wymagania:
//  Napisz funkcję zamieniającą dwie zmienne przy pomocy wskaźników.
// Test:
// 3 7 → 7 3

void zad55();
// 55. Modyfikacja tablicy
// Wymagania:
//  Przekaż tablicę do funkcji i zwiększ każdy element o 1.
// Test:
// 1 2 3 4
// → 2 3 4 5

void zad56();
// 56. Przejście po tablicy wskaźnikiem
// Wymagania:
//  Wyświetl wszystkie elementy tablicy, korzystając z arytmetyki wskaźników zamiast indeksów.
// Test:
// 10 20 30 40
// → 10 20 30 40

void zad57();
// 57. Wyszukiwanie wskaźnikiem
// Wymagania:
//  Znajdź konkretny element i zwróć wskaźnik do niego.
// Test:
// [10,20,30], szukaj 20
// → wskazanie na element o wartości 20

void zad58();
// 58. nullptr
// Wymagania:
//  Napisz funkcję bezpiecznie obsługującą wskaźnik, który może być pusty.
// Testy:
// wskazanie na liczbę → odczyt wartości
// nullptr → brak próby dereferencji

void zad59();
// 59. Dynamiczna liczba
// Wymagania:
//  Utwórz liczbę dynamicznie, zmień jej wartość i poprawnie zwolnij pamięć.
// Test:
// wartość początkowa: 10
// wartość końcowa: 99
// Dodatkowo sprawdź program pod kątem wycieku pamięci.

void zad60();
// 60. Dynamiczna tablica
// Wymagania:
//  Użytkownik podaje rozmiar. Tworzysz dynamiczną tablicę, wypełniasz ją danymi i zwalniasz pamięć.
// Test:
// N = 5
// 1 2 3 4 5
// Program powinien:
// zaalokować właściwy rozmiar,
// poprawnie odczytać dane,
// poprawnie je wyświetlić,
// zwolnić pamięć.

//////////////////////////////////// POZIOM 7 — Preprocesor, wskaźniki do funkcji, przeciążanie

void zad61();
// 61. Proste makro
// Wymagania:
//  Utwórz makro reprezentujące stałą matematyczną.
// Podpowiedź:
//  Potraktuj to jako ćwiczenie z działania preprocesora, nie jako najlepszy sposób pisania współczesnego C++.
// Test:
//  Sprawdź wartość w kilku działaniach.

void zad62();
// 62. Makro SQUARE
// Wymagania:
//  Utwórz makro obliczające kwadrat.
// Najważniejszy test:
// SQUARE(5)
// oraz osobno wyrażenie zawierające działania, np.:
// SQUARE(2 + 3)
// Zastanów się, czy wynik jest taki, jakiego oczekujesz.

void zad63();
// 63. Tryb DEBUG
// Wymagania:
//  Za pomocą dyrektyw preprocesora włączaj lub wyłączaj komunikaty diagnostyczne.
// Test:
// kompilacja z DEBUG,
// kompilacja bez DEBUG.
// Program powinien zachowywać się funkcjonalnie tak samo, ale różnić się informacjami diagnostycznymi.

void zad64();
// 64. Funkcja jako argument
// Wymagania:
//  Napisz funkcję przyjmującą inną funkcję jako argument.
// Przykładowe operacje:
// dodawanie,
// odejmowanie,
// mnożenie.
// Test:
// 5 3 + → 8
// 5 3 * → 15

void zad65();
// 65. Tablica funkcji
// Wymagania:
//  Stwórz tablicę wskaźników do funkcji i wybieraj operację na podstawie indeksu.
// Test:
// wybór 0 → pierwsza operacja
// wybór 1 → druga operacja

void zad66();
// 66. filter
// Wymagania:
//  Napisz funkcję, która otrzymuje wektor i funkcję warunkową. Zwraca tylko elementy spełniające warunek.
// Test:
// [1 2 3 4 5 6]
// warunek: parzyste
// → [2 4 6]

void zad67();
// 67. apply
// Wymagania:
//  Napisz funkcję wykonującą przekazaną operację na każdym elemencie.
// Test:
// [1 2 3]
// operacja: +10
// → [11 12 13]

void zad68();
// 68. Przeciążone print
// Wymagania:
//  Stwórz kilka wersji funkcji print() dla różnych typów danych.
// Testy:
// int
// double
// string
// char

void zad69();
// 69. Przeciążone area
// Wymagania:
//  Utwórz przeciążone funkcje obliczające pole różnych figur.
// Testy:
// prostokąt 5×3 → 15
// kwadrat 4×4 → 16
// koło r=2 → około 12.57

void zad70();
// 70. Kalkulator funkcyjny
// Wymagania:
//  Połącz:
// funkcje,
// wskaźniki do funkcji,
// menu,
// podstawowe operacje.
// Test:
//  Sprawdź wszystkie dostępne operacje i błędny wybór.

//////////////////////////////////// POZIOM 8 — Klasy

void zad71();
// 71. Klasa Person
// Wymagania:
//  Zaprojektuj klasę przechowującą podstawowe dane osoby oraz metodę wyświetlającą informacje.
// Test:
// Imię: Jan
// Wiek: 25

void zad72();
// 72. Klasa Rectangle
// Wymagania:
//  Klasa ma przechowywać wymiary i oferować metody:
// pole,
// obwód.
// Test:
// 5 × 3
// pole = 15
// obwód = 16

void zad73();
// 73. Klasa BankAccount
// Wymagania:
//  Dodaj:
// numer konta,
// saldo,
// wpłatę,
// wypłatę.
// Testy:
// saldo 1000
// wpłata 500
// → 1500
// saldo 1000
// wypłata 300
// → 700
// Sprawdź również próbę wypłaty większej kwoty niż saldo.

void zad74();
// 74. Klasa Student
// Wymagania:
//  Student posiada:
// imię,
// listę ocen,
// metodę obliczającą średnią.
// Test:
// 5 4 3 5
// → średnia 4.25

void zad75();
// 75. Klasa Book
// Wymagania:
//  Przechowuj:
// tytuł,
// autora,
// rok wydania,
// informację, czy książka jest wypożyczona.
// Dodaj odpowiednie metody.
// Test:
//  Przetestuj:
// wypożyczenie,
// zwrot,
// próbę ponownego wypożyczenia.

void zad76();
// 76. Klasa Date
// Wymagania:
//  Przechowuj dzień, miesiąc i rok.
// Dodaj walidację podstawowych wartości.
// Testy:
// 10 5 2026 → poprawna
// 31 12 2025 → poprawna
// 35 15 2025 → błędna

void zad77();
// 77. Konstruktor i wartości domyślne
// Wymagania:
//  Stwórz klasę posiadającą konstruktor domyślny oraz konstruktor przyjmujący dane.
// Test:
//  Utwórz obiekt na oba sposoby i sprawdź stan początkowy.

void zad78();
// 78. Metody const
// Wymagania:
//  Zaprojektuj klasę tak, by metody, które nie zmieniają stanu obiektu, były oznaczone odpowiednio.
// Test:
//  Spróbuj użyć ich na obiekcie stałym.

void zad79();
// 79. Klasa Inventory
// Wymagania:
//  Magazyn przechowuje wiele produktów.
// Program powinien umożliwiać:
// dodanie,
// usunięcie,
// wyszukanie,
// wyświetlenie.
// Test:
//  Dodaj kilka produktów i przetestuj wszystkie operacje.

void zad80();
// 80. Klasa ContactBook
// Wymagania:
//  Stwórz książkę kontaktów.
// Kontakt:
// imię,
// nazwisko,
// numer telefonu.
// Książka:
// dodaje,
// usuwa,
// wyszukuje,
// wyświetla kontakty.
// Test:
// Jan Kowalski
// Anna Nowak
// Piotr Zielinski
// Wyszukaj każdego z nich oraz osobę, której nie ma.

//////////////////////////////////// POZIOM 9 — Małe projekty

void zad81();
// 81. System ocen
// Wymagania:
//  Klasy:
// Student,
// GradeBook.
// Program obsługuje wielu uczniów.
// Funkcje:
// dodawanie ucznia,
// dodawanie ocen,
// średnia,
// najlepszy uczeń.
// Test:
//  Dodaj minimum 3 uczniów z różnymi ocenami.

void zad82();
// 82. Biblioteka
// Wymagania:
//  Utwórz:
// Book,
// Library.
// Biblioteka powinna umożliwiać wypożyczanie i zwracanie książek.
// Test:
//  Dodaj 5 książek i wykonaj serię wypożyczeń/zwrotów.

void zad83();
// 83. Koszyk zakupowy
// Wymagania:
//  Utwórz produkty i koszyk.
// Koszyk:
// dodawanie,
// usuwanie,
// liczenie ceny,
// wyświetlanie zawartości.
// Test:
// Produkt A: 10
// Produkt B: 25
// Produkt C: 5
// Dodaj wszystkie, następnie usuń B.

void zad84();
// 84. Gra turowa
// Wymagania:
//  Stwórz dwóch graczy mających:
// HP,
// siłę ataku,
// obronę.
// Gracze atakują się naprzemiennie.
// Test:
//  Sprawdź:
// wygraną pierwszego gracza,
// wygraną drugiego,
// próbę ataku martwą postacią.

void zad85();
// 85. Menedżer zadań
// Wymagania:
//  Klasa Task:
// nazwa,
// priorytet,
// status.
// Klasa TaskManager:
// dodawanie,
// usuwanie,
// ukończenie,
// wyświetlanie.
// Test:
//  Dodaj 5 zadań, zakończ 2, usuń 1.

void zad86();
// 86. Prosty system bankowy
// Wymagania:
//  Obsługa wielu kont.
// Operacje:
// utworzenie konta,
// wpłata,
// wypłata,
// przelew,
// sprawdzenie salda.
// Test:
//  Utwórz co najmniej 3 konta i wykonaj przelewy między nimi.

void zad87();
// 87. Generator labiryntu
// Wymagania:
//  Reprezentuj planszę jako vector<vector<char>>.
// Dodaj:
// ściany,
// podłogę,
// start,
// koniec.
// Test:
//  Utwórz minimum trzy różne plansze.

void zad88();
// 88. Edytor planszy
// Wymagania:
//  Użytkownik może:
// postawić ścianę,
// usunąć ścianę,
// zmienić pole,
// wyświetlić planszę.
// Test:
//  Wykonaj minimum 10 losowych zmian.

void zad89();
// 89. Analizator tekstu
// Wymagania:
//  Klasa TextAnalyzer.
// Oblicz:
// liczbę znaków,
// liczbę słów,
// liczbę cyfr,
// liczbę samogłosek,
// najczęściej występujący znak,
// najdłuższe słowo.
// Test:
// Ala ma 2 koty i jednego psa.

void zad90();
// 90. Gra „Statki”
// Wymagania:
//  Dwie plansze, rozmieszczanie statków, strzelanie, wykrywanie trafień i zatopień.
// Test:
//  Przetestuj:
// pudło,
// trafienie,
// ponowne strzelenie w to samo pole,
// zatopienie statku,
// koniec gry.

//////////////////////////////////// POZIOM 10 — Projekty integrujące całą wiedzęy

void zad91();
// 91. Mini RPG
// Wymagania:
//  Minimum klasy:
// Player
// Enemy
// Item
// Inventory
// Gra powinna posiadać:
// eksplorację,
// walkę,
// HP,
// przedmioty,
// ekwipunek.
// Testy:
//  Musisz przetestować co najmniej:
// zwycięstwo,
// śmierć gracza,
// śmierć przeciwnika,
// użycie przedmiotu,
// pusty ekwipunek.

void zad92();
// 92. System rezerwacji hotelowych
// Wymagania:
//  Klasy:
// Room,
// Guest,
// Reservation,
// Hotel.
// Obsługa:
// rezerwacji,
// anulowania,
// wyszukiwania wolnych pokoi.
// Test:
//  Utwórz 10 pokoi i minimum 5 gości. Wykonaj kilka nakładających się rezerwacji.

void zad93();
// 93. Menedżer finansów osobistych
// Wymagania:
//  Rejestruj:
// przychody,
// wydatki,
// kategorie,
// daty.
// Program pokazuje:
// saldo,
// sumę wydatków,
// wydatki według kategorii,
// największy wydatek.
// Test:
//  Wprowadź minimum 10 transakcji z różnych kategorii.

void zad94();
// 94. System magazynowy
// Wymagania:
//  Obsługa:
// produktów,
// stanów magazynowych,
// dostaw,
// sprzedaży.
// Dodaj wyszukiwanie i sortowanie.
// Test:
//  Wykonaj:
// 10 przyjęć,
// 10 sprzedaży,
// kilka prób sprzedaży większej liczby sztuk niż dostępna.

void zad95();
// 95. Własny vector
// Wymagania:
//  Zbuduj własną klasę przechowującą dynamiczną tablicę.
// Powinna obsługiwać minimum:
// size
// capacity
// push_back
// pop_back
// clear
// operator[]
// Podpowiedź:
//  To zadanie łączy klasy i wskaźniki.
// Testy:
// pusty obiekt,
// 1 element,
// 10 elementów,
// 1000 elementów,
// usuwanie elementów,
// przekraczanie pojemności.

void zad96();
// 96. Własny system zdarzeń
// Wymagania:
//  Użytkownik uruchamia określone zdarzenia, a program wywołuje przypisane do nich funkcje.
// Wykorzystaj wskaźniki do funkcji.
// Przykładowe zdarzenia:
// START
// ATTACK
// HEAL
// DEATH
// GAME_OVER
// Test:
//  Do każdego zdarzenia przypisz inną funkcję i sprawdź kolejność wywołań.

void zad97();
// 97. Konsolowa gra strategiczna
// Wymagania:
//  Plansza wielowymiarowa, kilka jednostek, tury i proste zasady ruchu.
// Minimum:
// mapa,
// jednostki,
// ruch,
// atak,
// punkty życia,
// koniec gry.
// Test:
//  Stwórz małą planszę 10×10 i przeprowadź pełną rozgrywkę.

void zad98();
// 98. System biblioteczny 2.0
// Wymagania:
//  Rozbuduj bibliotekę z poziomu 9.
// Dodaj:
// wiele rodzajów książek,
// użytkowników,
// limity wypożyczeń,
// wyszukiwanie,
// sortowanie,
// historię wypożyczeń.
// Test:
//  Minimum:
// 20 książek,
// 5 użytkowników,
// 30 operacji.

void zad99();
// 99. Projekt własny — bez instrukcji
// To celowo nie jest klasyczne zadanie.
// Wymagania:
//  Wymyśl własny program, który:
// ma co najmniej 3 klasy,
// używa vector,
// korzysta z funkcji,
// ma interakcję z użytkownikiem,
// przechowuje dane,
// posiada menu,
// obsługuje błędne dane.
// Podpowiedź:
//  Nie wybieraj czegoś, co potrafisz zaprogramować w 30 minut.
// Dobry projekt powinien wymusić nauczenie się czegoś po drodze.
// Test:
//  Przygotuj własne minimum 15 przypadków testowych.

void zad100();
// 100. PROJEKT FINAŁOWY — zbuduj własną aplikację
// To zadanie ma być podsumowaniem całej ścieżki.
// Temat
// Stwórz większy program konsolowy, który samodzielnie zaprojektujesz.
// Może to być np.:
// RPG
// menedżer finansów
// system biblioteczny
// system magazynowy
// gra strategiczna
// menedżer kontaktów
// system ocen
// gra logiczna
// Minimalne wymagania
// Program musi zawierać:
// Sterowanie
// pętle,
// warunki,
// menu.
// Dane
// string,
// vector,
// co najmniej jedną strukturę wieloelementową.
// Funkcje
// program podzielony na sensowne funkcje,
// brak jednej gigantycznej funkcji main().
// Klasy
// minimum 4 własne klasy,
// konstruktory,
// metody,
// odpowiedzialność klas rozdzielona logicznie.
// Pamięć
// przynajmniej świadome użycie wskaźników lub zrozumienie, dlaczego ich nie potrzebujesz w danym miejscu.
// Walidacja
// program nie może się wysypać po wpisaniu błędnych danych.
// Testowanie
// minimum 30 własnych przypadków testowych.
// Dokumentacja
// krótki opis programu,
// opis klas,
// opis najważniejszych funkcji,
// lista znanych ograniczeń.



#endif