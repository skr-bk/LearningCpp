#ifndef ZADANIA_H
#define ZADANIA_H

#include <vector>
#include <string>

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
//  Adres będzie różny przy każdym uruchomieniu. 
// Sprawdź natomiast, czy wskaźnik rzeczywiście przechowuje adres zmiennej.

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

void switchVar(int* wskA, int* wskB);
void zad54();
// 54. Zamiana przez wskaźniki
// Wymagania:
//  Napisz funkcję zamieniającą dwie zmienne przy pomocy wskaźników.
// Test:
// 3 7 → 7 3
void tabInc(int* wskA, const int size);
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
int* findElement(int* tab, const int size, int target);
void zad57();
// 57. Wyszukiwanie wskaźnikiem
// Wymagania:
//  Znajdź konkretny element i zwróć wskaźnik do niego.
// Test:
// [10,20,30], szukaj 20
// → wskazanie na element o wartości 20
int* ifNull(int* wsk);
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
int calc(int (*which)(int, int), int a, int b);
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
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
bool checkEven(int number);
std::vector<int> even(std::vector<int> numbers, bool(*checkEven)(int number));
void zad66();
// 66. filter
// Wymagania:
//  Napisz funkcję, która otrzymuje wektor i funkcję warunkową. Zwraca tylko elementy spełniające warunek.
// Test:
// [1 2 3 4 5 6]
// warunek: parzyste
// → [2 4 6]
int addTen(int number);
std::vector<int> apply(std::vector<int>numbers, int(*addTen)(int number));
void zad67();
// 67. apply
// Wymagania:
//  Napisz funkcję wykonującą przekazaną operację na każdym elemencie.
// Test:
// [1 2 3]
// operacja: +10
// → [11 12 13]
void print(int number);
void print(double number);
void print(std::string name);
void print(char charakter);
void zad68();
// 68. Przeciążone print
// Wymagania:
//  Stwórz kilka wersji funkcji print() dla różnych typów danych.
// Testy:
// int
// double
// string
// char
void area(int a, int b);
void area(int a);
void area(double r);
void zad69();
// 69. Przeciążone area
// Wymagania:
//  Utwórz przeciążone funkcje obliczające pole różnych figur.
// Testy:
// prostokąt 5×3 → 15
// kwadrat 4×4 → 16
// koło r=2 → około 12.57
double sum(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);
void displayResult(double (*funcPtr)(double a, double b), double a, double b);
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
class Person
{
public:
	std::string name;
	int age;
	Person(std::string name, int age);
	void introduce();
};
void zad71();
// 71. Klasa Person
// Wymagania:
//  Zaprojektuj klasę przechowującą podstawowe dane osoby oraz metodę wyświetlającą informacje.
// Test:
// Imię: Jan
// Wiek: 25
class Rectangle
{
public:
	double a, b;
	Rectangle(double a, double b);
	void area();
	void perimeter();
};
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
class BankAccount
{
	int nrAccount;
	long long balance = 0;
public:
	BankAccount(int nrAccount, long long balance);
	void deposit(long long money);
	bool withdrawal(long long money);
	long long currentBalance();
};
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
class Student
{
	std::string name;
	std::vector<double> grades;
public:
	Student(std::string name, std::vector<double> grades);
	double average();
};
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
class Book
{
	std::string title, author;
	int releaseDate;
	bool onLoan;

public:
	Book(std::string title, std::string author, int releaseDate, bool onLoan = false);
	void loan();
	void returnBook();
	void bookStatus() const;

};

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

class Date
{
	int day, month, year;
public:
	Date(int day, int month, int year);
	void displayDate();
};
void zad76();
// 76. Klasa Date
// Wymagania:
//  Przechowuj dzień, miesiąc i rok.
// Dodaj walidację podstawowych wartości.
// Testy:
// 10 5 2026 → poprawna
// 31 12 2025 → poprawna
// 35 15 2025 → błędna
class Car
{
	std::string name,color;

public:
	Car();
	Car(std::string name, std::string color);
	void displayCar() const; // takze zadanie 78
};
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
class Inventory
{
	static std::vector<std::string> stock;
	std::string productName;
	bool onStock;
public:
	Inventory(std::string productName, bool onStock = true);
	void addProduct();
	void deleteProduct();
	void searchProduct();
	static void displayProducts();
};
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

////////////////////////////////////  PROJEKTY KONSOLOWE 80–100: przygotowanie do tworzenia gier

void zad80();
//## Zadanie 80 — Statystyki postaci
//Napisz program reprezentujący postać gracza.
//
//Wymagania:
//-Utwórz klasę `Character` zawierającą nazwę, punkty życia, atak i obronę.
//- Dodaj konstruktor oraz metody wyświetlające statystyki.
//- Dodaj metodę otrzymywania obrażeń, uwzględniającą obronę.
//- Punkty życia nie mogą spaść poniżej zera.
//
//* *Testy:**utworzenie postaci, otrzymanie obrażeń, pokonanie postaci i wyświetlenie statystyk.

void zad81();
//## Zadanie 81 — Ekwipunek gracza
//Stwórz prosty ekwipunek, w którym gracz przechowuje przedmioty.
//
//Wymagania:
//-Utwórz klasę `Item` zawierającą nazwę i ilość przedmiotów.
//- Utwórz klasę `Inventory` przechowującą przedmioty, np.w `std::vector`.
//- Dodaj możliwość dodawania i usuwania przedmiotów.
//- Nie pozwalaj usuwać większej liczby przedmiotów, niż znajduje się w ekwipunku.
//- Wyświetl zawartość ekwipunku.
//
//* *Testy:**dodawanie przedmiotów, kilka przedmiotów o różnych nazwach, usuwanie i próba usunięcia nieistniejącego przedmiotu.

void zad82();
//## Zadanie 82 — Walka turowa
//Stwórz prostą walkę między graczem a przeciwnikiem.
//
//Wymagania:
//-Wykorzystaj klasę `Character` z zadania 80.
//- Gracz i przeciwnik wykonują ataki na zmianę.
//- Po każdym ataku wyświetl aktualne punkty życia obu postaci.
//- Walka kończy się, gdy jedna z postaci straci wszystkie punkty życia.
//- Po zakończeniu wyświetl zwycięzcę.
//
//* *Testy:**wygrana gracza, wygrana przeciwnika oraz zakończenie walki po pokonaniu jednej z postaci.

void zad83();
//## Zadanie 83 — Broń i pancerz
//Rozbuduj system postaci o wyposażenie.
//
//Wymagania:
//-Utwórz klasy lub struktury `Weapon` i `Armor`.
//- Broń zwiększa atak, a pancerz zwiększa obronę.
//- Postać może założyć broń i pancerz.
//- Statystyki postaci uwzględniają wyposażenie.
//- Zmiana wyposażenia nie może powodować wielokrotnego naliczania tego samego bonusu.
//
//* *Testy:**postać bez wyposażenia, założenie broni, zmiana broni i założenie pancerza.

void zad84();
//## Zadanie 84 — Mikstury i przedmioty użytkowe
//Dodaj możliwość używania przedmiotów podczas gry.
//
//Wymagania:
//-Stwórz miksturę przywracającą punkty życia.
//- Gracz może użyć mikstury z ekwipunku.
//- Mikstura nie może przywrócić więcej punktów życia, niż wynosi maksymalne zdrowie postaci.
//- Po użyciu liczba mikstur zmniejsza się o jeden.
//- Nie można użyć mikstury, której gracz nie posiada.
//
//** Testy:**leczenie rannej postaci, leczenie przy pełnym zdrowiu i próba użycia mikstury, której nie ma w ekwipunku.

void zad85();
//## Zadanie 85 — System zadań i misji
//Napisz prosty system misji dla gracza.
//
//Wymagania:
//-Utwórz klasę `Quest` zawierającą nazwę, opis, cel i postęp.
//- Obsłuż dwa rodzaje celów : pokonanie określonej liczby przeciwników oraz zebranie określonej liczby przedmiotów.
//- Wyświetl postęp misji.
//- Po osiągnięciu celu oznacz misję jako ukończoną.
//- Nie zwiększaj postępu ukończonej misji.
//
//* *Testy : **rozpoczęcie misji, zwiększanie postępu i ukończenie misji.

void zad86();
//## Zadanie 86 — Dialogi z postaciami niezależnymi
//Stwórz prosty system dialogów z NPC.
//
//Wymagania:
//-Utwórz klasę `NPC` przechowującą imię oraz tekst dialogu.
//- NPC przedstawia graczowi co najmniej trzy opcje odpowiedzi.
//- Wybór odpowiedzi prowadzi do innego tekstu lub zakończenia rozmowy.
//- Nieprawidłowy wybór nie może zakończyć programu błędem.
//- Dodaj jedną decyzję, która zmienia prostą wartość w grze, np.liczbę monet gracza.
//
//** Testy:**każda opcja dialogowa, nieprawidłowy wybór i zmiana liczby monet.
//
//## Zadanie 87 — Mapa gry w konsoli

void zad87();
// //## Zadanie 87 — Mapa gry w konsoli
//Stwórz prostą mapę gry wyświetlaną za pomocą znaków ASCII.
//
//Wymagania:
//-Mapa jest dwuwymiarową tablicą lub wektorem.
//- Użyj znaków do oznaczenia ścian, pustych pól, gracza i wyjścia.
//- Gracz może poruszać się za pomocą klawiszy `W`, `A`, `S`, `D`.
//- Nie można przechodzić przez ściany ani wychodzić poza mapę.
//- Dotarcie do wyjścia kończy poziom.
//
//** Testy:**poruszanie się w czterech kierunkach, blokada na ścianie i dotarcie do wyjścia.

void zad88();
// //## Zadanie 88 — Edytor mapy
//Napisz konsolowy edytor map, który pozwala przygotować poziom do gry.
//
//Wymagania:
//-Wyświetl mapę o ustalonym rozmiarze.
//- Pozwól użytkownikowi wskazać współrzędne pola.
//- Umożliwiaj ustawienie lub usunięcie ściany.
//- Pozwól ustawić pozycję startową gracza oraz wyjście.
//- Sprawdź, czy mapa ma dokładnie jedno pole startowe i jedno wyjście.
//
//** Testy:**dodawanie i usuwanie ścian, nieprawidłowe współrzędne oraz sprawdzanie poprawności mapy.

void zad89();
//Zadanie 89 — Ruch przeciwników
//Dodaj przeciwników, którzy poruszają się po mapie.
//
//Wymagania:
//
//Przeciwnik ma pozycję na mapie.
//
//Przeciwnik porusza się po ustalonej trasie, np.w lewo i w prawo między dwoma punktami.
//
//Nie może przechodzić przez ściany ani wychodzić poza mapę.
//
//Gracz i przeciwnik nie mogą zajmować tego samego pola, jeśli zasady gry na to nie pozwalają.
//
//Po każdej turze wyświetl aktualną mapę.
//
//Testy: ruch przeciwnika, zmiana kierunku na końcu trasy i próba ruchu w zablokowane pole.
 
void zad90();
//Zadanie 90 — Decyzje przeciwnika w walce
//Ulepsz przeciwnika z systemu walki turowej.
//
//Wymagania:
//
//Przeciwnik może wykonać atak, obronę lub leczenie.
//
//Jeśli ma mało punktów życia i posiada miksturę, może jej użyć.
//
//W pozostałych sytuacjach wybiera atak.
//
//Po wykonaniu decyzji wyświetl komunikat opisujący zachowanie przeciwnika.
//
//Przeciwnik nie może wykonywać akcji po pokonaniu go.
//
//Testy: atak, leczenie przy niskim zdrowiu i brak możliwości działania po śmierci.

void zad91();
//Zadanie 91 — Dziennik zdarzeń gry
//Dodaj dziennik, który zapisuje najważniejsze wydarzenia w grze.
//
//Wymagania:
//
//Utwórz klasę GameLog.
//
//Zapisuj komunikaty, np.„Gracz otrzymał obrażenia”, „Zebrano miksturę” i „Pokonano przeciwnika”.
//
//Wyświetlaj historię zdarzeń w kolejności ich wystąpienia.
//
//Dodaj możliwość wyczyszczenia dziennika.
//
//Ogranicz liczbę przechowywanych komunikatów, np. do 20 najnowszych.
//
//Testy: dodawanie zdarzeń, kolejność komunikatów, czyszczenie i przekroczenie limitu.

void zad92();
//Zadanie 92 — Zapisywanie i wczytywanie gry
//Dodaj możliwość zapisania stanu gry do pliku tekstowego.
//
//Wymagania:
//
//Zapisuj nazwę gracza, punkty życia, liczbę monet i pozycję na mapie.
//
//Dodaj możliwość wczytania zapisanego stanu.
//
//Sprawdź, czy plik istnieje i czy zawiera poprawne dane.
//
//W przypadku błędnego zapisu wyświetl komunikat zamiast przerywać program.
//
//Po wczytaniu odtwórz stan postaci.
//
//Testy: zapis, wczytanie, brak pliku oraz niepoprawne dane w pliku.

void zad93();
//Zadanie 93 — Losowe nagrody
//Stwórz system losowania nagród po pokonaniu przeciwnika.
//
//Wymagania:
//
//Wykorzystaj generator liczb losowych z biblioteki <random>.
//
//Po pokonaniu przeciwnika gracz otrzymuje monety lub przedmiot.
//
//Różne nagrody mają różne szanse pojawienia się.
//
//Wynik losowania wyświetla się w konsoli.
//
//Przygotuj co najmniej trzy rodzaje nagród.
//
//Testy: poprawność możliwych wyników, dodawanie nagrody do ekwipunku i wielokrotne uruchomienie losowania.

void zad94();
//Zadanie 94 — Punkty i rekordy
//Dodaj system punktacji do prostej gry.
//
//Wymagania:
//
//Gracz zdobywa punkty za pokonywanie przeciwników i zbieranie przedmiotów.
//
//Za różne działania przyznawana jest różna liczba punktów.
//
//Po zakończeniu gry wyświetl końcowy wynik.
//
//Zapisuj najlepszy wynik w pliku.
//
//Przy kolejnym uruchomieniu wczytaj rekord i porównaj go z nowym wynikiem.
//
//Testy: naliczanie punktów, nowy rekord, wynik niższy od rekordu i pierwszy start bez pliku z rekordem.

void zad95();
//Zadanie 95 — Własna prosta klasa DynamicArray
//Napisz własną, uproszczoną wersję dynamicznej tablicy przechowującej liczby całkowite.
//
//Wymagania:
//
//Utwórz klasę DynamicArray.
//
//Przechowuj elementy w dynamicznie zaalokowanej tablicy.
//
//Dodaj metody push_back, pop_back, size i at.
//
//Gdy zabraknie miejsca, zwiększ pojemność tablicy.
//
//Zadbaj o zwalnianie pamięci w destruktorze.
//
//Obsłuż próbę odczytu elementu spoza zakresu.
//
//Testy: dodawanie wielu elementów, usuwanie, odczyt elementów i praca z pustą tablicą.
//
//Uwaga : jeśli znasz już podstawy zarządzania pamięcią, możesz dodatkowo zaimplementować konstruktor kopiujący i operator przypisania.

void zad96();
//Zadanie 96 — Prosty system callbacków
//Stwórz prosty system wywoływania funkcji w reakcji na zdarzenia gry.
//
//Wymagania:
//
//Zdefiniuj kilka typów zdarzeń, np.rozpoczęcie gry, atak i śmierć przeciwnika.
//
//Pozwól przypisać funkcję do danego zdarzenia.
//
//Po wystąpieniu zdarzenia wywołaj przypisaną funkcję.
//
//Wykorzystaj wskaźniki do funkcji.
//
//Obsłuż sytuację, w której do zdarzenia nie przypisano żadnej funkcji.
//
//Testy: wywołanie właściwej funkcji, kilka różnych zdarzeń i brak przypisanej funkcji.

void zad97();
//Zadanie 97 — Prosta gra strategiczna
//Stwórz niewielką grę strategiczną rozgrywaną na turach.
//
//Wymagania:
//
//Mapa zawiera pola, na których można umieszczać jednostki.
//
//Gracz ma co najmniej dwa rodzaje jednostek o różnych statystykach.
//
//W swojej turze gracz może poruszyć jednostkę albo zaatakować przeciwnika.
//
//Jednostka nie może poruszać się poza mapę ani przez niedozwolone pola.
//
//Gra kończy się po pokonaniu wszystkich jednostek przeciwnika.
//
//Testy: ruch jednostek, atak, utrata punktów życia i warunek zwycięstwa.

void zad98();
//Zadanie 98 — Mała gra RPG
//Połącz wybrane systemy z wcześniejszych zadań w niewielką grę RPG.
//
//Wymagania:
//
//Gracz może poruszać się po mapie.
//
//Na mapie znajdują się przeciwnicy i przedmioty.
//
//Gracz może walczyć, zbierać przedmioty i używać mikstur.
//
//Dodaj co najmniej dwa rodzaje przeciwników.
//
//Dodaj prosty cel do wykonania, np.pokonanie bossa lub znalezienie wyjścia.
//
//Gra ma menu rozpoczęcia, instrukcję i możliwość zakończenia rozgrywki.
//
//Testy: rozpoczęcie gry, poruszanie się, walka, zdobywanie przedmiotów, zwycięstwo i porażka.

void zad99();
//Zadanie 99 — Własny projekt gry konsolowej
//Zaprojektuj i wykonaj własną, niewielką grę konsolową.Wybierz gatunek, np.przygodową, strategiczną, logiczną lub RPG.
//
//Wymagania:
//
//Program zawiera co najmniej trzy własne klasy.
//
//Gra ma jasny cel i warunek zwycięstwa lub porażki.
//
//Wykorzystaj kolekcję danych, np.std::vector.
//
//Zadbaj o obsługę błędnego wejścia użytkownika.
//
//Dodaj menu i czytelne komunikaty.
//
//Przygotuj co najmniej 10 testów opisujących działanie gry.
//
//Wynik: działający, samodzielnie zaprojektowany prototyp gry, który można uruchomić i ukończyć w konsoli.

void zad100();
//Zadanie 100 — Projekt końcowy : rozbudowana gra konsolowa mfo....
//Stwórz większą grę konsolową, wykorzystując umiejętności z poprzednich zadań.
//
//Wymagania:
//
//Gra ma menu główne, instrukcję i możliwość zakończenia.
//
//Zawiera mapę, postać gracza oraz przeciwników.
//
//Zawiera przynajmniej jeden system walki i jeden system przedmiotów.
//
//Wykorzystuje kilka klas odpowiedzialnych za różne elementy gry.
//
//Zawiera warunek zwycięstwa oraz porażki.
//
//Zapis i wczytywanie stanu gry są zalecane, ale nieobowiązkowe.
//
//Kod powinien być podzielony na funkcje i klasy, a nie zapisany w jednym dużym bloku.
//
//Przygotuj co najmniej 15 testów obejmujących najważniejsze funkcje.
//
//Dodaj krótki opis zasad gry i instrukcję uruchomienia.



#endif