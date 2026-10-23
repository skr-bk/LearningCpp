#include <iostream>
#include <string>
#include <vector>

#include "zadania.h"

using namespace std;



void zad1()
{
	string imie;
	cout << "Podaj imie: "; 
	cin >> imie;
	cout << "Witaj " << imie << "!" << endl;

};
void zad2()
{
	int l1, l2;
	cout << "Podaj dwie liczby: \n";
	cin >> l1 >> l2;
	cout << "Suma: " << l1 + l2 << endl;

};
void zad3()
{
	int dlugosc, szerokosc;
	cout << "Podaj dlugosc prostokata: ";
	cin >> dlugosc;
	cout << "Podaj szerokosc prostokata: ";
	cin >> szerokosc;
	cout << "Pole prostokata wynosi: " << dlugosc * szerokosc << endl;
	cout << "Obwod prostokata wynosi: " << (2 * dlugosc) + (2 * szerokosc);
};
void zad4()

{
	float celcius;
	cout << "Podaj temperature w Celcjuszach";
	cin >> celcius;
	cout << "Temperatura w Fahrenheitach wynosi: " << (celcius * 1.8) + 32 << endl;
};
void zad5()

{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	if (liczba % 2 == 0)
		cout << "Liczba jest parzysta";
	else
		cout << "Liczba jest nieparzysta";


};
void zad6()

{
	int liczba;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba;
	if (liczba > 0)
		cout << "Liczba jest dodatnia" << endl;
	else if (liczba < 0)
		cout << "Liczba jest ujemna" << endl;
	else
		cout << "Liczba jest rowna 0" << endl;
};
void zad7()

{
	int liczba1, liczba2;
	cout << "Podaj 2 liczby: " << endl;
	cin >> liczba1 >> liczba2;
	if (liczba1 > liczba2)
		cout << "Wieksza jest liczba: " << liczba1 << endl;
	else if (liczba2 > liczba1)
		cout << "Wieksza jest liczba: " << liczba2 << endl;
	else
		cout << "Liczby sa rowne";
		
};
void zad8()

{
	int a, b;
	cout << "Podaj 2 liczby" << endl;
	cin >> a >> b;
	cout << "Liczba 1 wynosi: " << a << " Liczba 2 wynosi:" << b << endl;
	int c = a;
	a = b;
	b = c;
	cout << "Po zamianie: \n Liczba 1 wynosi: " << a << " Liczba 2 wynosi: " << b;
};
void zad9()

{
	int liczba;
	int cyfra;
	cout << "Podaj liczbe: " << endl; 
	cin >> liczba; 
	cyfra = liczba % 10;
	cout << "Ostatnia cyfra liczby wynosi: " << cyfra << endl;

};
void zad10()

{
	int liczba1, liczba2;
	char znak;
	cout << "Podaj 2 liczby" << endl;
	cin >> liczba1 >> liczba2;
	cout << "Jaka operacje chcesz wykonac? Wpisz +, -, *, /" << endl;
	cin >> znak;

	switch (znak) 
	{
		case '+':
			cout << liczba1 + liczba2 << endl;
			break;
		case '-':
			cout << liczba1 - liczba2 << endl;
			break;
		case '*':
			cout << liczba1 * liczba2 << endl;
			break;
		case '/':
			cout << liczba1 / liczba2 << endl;
			break;
		default:
			cout << "Podano nieprawidlowy znak";
	}

}
void zad11()
{
	int a, b, c, max;
	cout << "Podaj 3 liczby : " << endl;
	cin >> a >> b >> c;
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	cout << "Najwieksza liczba to : " << max << endl;
};
void zad12()
{
	int liczba;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba;
	if (liczba > 9 && liczba < 21)
		cout << "Przedzial zamkniety";
	else
		cout << "Poza przedzialem";
};
void zad13()
{
	int a, b, x;
	cout << "Podaj 2 liczby: " << endl;
	cin >> a >> b;
	if (a != 0)
	{
		b = -b;
		x = b / a;
		cout << x << endl;
	}
	else if (b == 0)
		cout << "Nieskonczenie wiele rozwiazan" << endl;
	else 
		cout << "Brak rozwiazan" << endl;
		
};
void zad14()
{
	int n, l = 1;
	cout << "Podaj liczbe: " << endl;
	cin >> n;

	while (l < n + 1)
	{
		cout << l << endl;
		l++;
	}

};
void zad15()
{
	int n, l = 1;
	cout << "Podaj liczbe: " << endl;
	cin >> n;

	while (n > l - 1)
	{
		cout << n << endl;
		n--;
	}

};
void zad16()
{
	int n, l = 1, m = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> n;

	while (l < n + 1)
	{
		m += l;
		cout << m << endl;
		l++;
	}

};
void zad17()
{
	int n,m, l = 1;
	cout << "Podaj liczbe: " << endl;
	cin >> n;

	while (l < 11)
	{
		m = n*l;
		cout << m << endl;
		l++;
	}

};
void zad18()

{
	int n, l = 1, m = l;
	cout << "Podaj liczbe: " << endl;
	cin >> n;

	

	while (l <= n)
	{
		m *= l;
		l++;
	}
	cout << m << endl;
};
void zad19()

{
	int n,l = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> n;

	while (l < n + 1)
	{
		if (l % 2 == 0)
			cout << l << endl;
		l++;
	}
	
};
void zad20()

{
	int n, liczba = 50;
	cout << "Podawaj liczbe az trafisz: " << endl;
	cin >> n;

	while (n != liczba)
	{
		if (n < liczba)
			cout << "Za mala" << endl;
		else if (n > liczba)
			cout << "Za duza" << endl;

		cin >> n;
	}
	cout << "Zgadles! liczba losowania to: " << liczba << endl;
};
void zad21()
{

	int liczba1,pom = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba1;

	if (liczba1 == 0)
		cout << pom + 1 << endl;
	else
	{
		while (liczba1 != 0)
		{
			pom++;
			liczba1 = liczba1 / 10;
		}
		cout << pom << endl;
	}
	
};
void zad22()
{

	int liczba, wynik = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba;
		while (liczba != 0)
		{
			wynik += liczba % 10;
			liczba = liczba / 10;
		}
		cout << "wynik to : " << wynik << endl;

	
	
};
void zad23()
{

	int liczba = 12345, wynik = 0;

		while (liczba != 0)
		{
			wynik = wynik * 10 + liczba % 10;
			liczba = liczba / 10;
		}
		cout << "wynik to : " << wynik << endl;

	
	
};
void zad24()
{

	int waga;
	double wzrost,wynik;
	cout << "Podaj wage: " << endl;
	cin >> waga;
	cout << "Podaj wzrost: " << endl;
	cin >> wzrost;

	wynik = (waga / (wzrost * wzrost));
	cout << "Twoje BMI wynosi: " << wynik << endl;


};
void zad25()
{

	char znak;
	int wynik;
	cout << "Podaj znak: " << endl;
	cin >> znak;
	
	wynik = znak;

	cout << "Nr Asci znaku " << znak << " wynosi: " << wynik << endl;

};
void zad26()
{

	char znak;
	int wynik;
	cout << "Podaj znak: " << endl;
	cin >> znak;
	
	wynik = znak;

	if (wynik >= 65 && wynik <= 90)
		cout << "Znak: " << znak << " jest wielka litera.";
	else if (wynik >= 97 && wynik <= 122)
		cout << "Znak: " << znak << " jest mala litera.";
	else if (wynik >= 48 && wynik <= 57)
		cout << "Znak: " << znak << " jest cyfra.";
	else
		cout << "Znak: " << znak << " jest innym znakiem.";

};
void zad27()
{

	string napis;
	cout << "Podaj napis: " << endl;
	cin >> napis;
	cout << "Liczba znakow wynosi: " << napis.length() << endl;

};
void zad28()
{
	string napis;
	int licznik = 0;
	cout << "Podaj napis: " << endl;
	cin >> napis;

	for (int i = 0; i < napis.length(); i++)
	{
		if (napis[i] == 'A' || napis[i] == 'E' ||
			napis[i] == 'I' || napis[i] == 'O' ||
			napis[i] == 'U' || napis[i] == 'Y' ||
			napis[i] == 'a' || napis[i] == 'e' ||
			napis[i] == 'i' || napis[i] == 'o' ||
			napis[i] == 'u' || napis[i] == 'y')
		{
			licznik++;
		}
			
	}

	cout << "liczba samoglosek wynosi: " << licznik << endl;

};
void zad29()
{
	string napis,odwrocony;
	cout << "Podaj napis: " << endl;
	cin >> napis;

	for (int i = napis.length() - 1; i >= 0; i--)
	{
		odwrocony += napis[i];
	}
	
	if (napis == odwrocony)
	{
		cout << "tak" << endl;
		
	}
	else
	{
		cout << "nie" << endl;
		
	}
		

};
void zad30()
{
	string napis;
	cout << "Podaj napis: " << endl;
	cin >> napis;
	char znak = napis[0];

	for (int i = 0; i < napis.length(); i++)
	{
		if (znak < napis[i])
			znak = napis[i];
	}

	cout << "Najwiekszy znak to: " << znak << endl;

};
void zad31()

{
	int ile;
	double wynik = 0;
	cout << "Podaj ile liczb: " << endl;
	cin >> ile;
	if (ile <= 0)
		cout << "wektor nie moze byc pusty" << endl;
	else
	{
		vector<int> liczby(ile);
		cout << "Podaj liczby: " << endl;

		for (int i = 0; i < ile; i++)
		{
			cin >> liczby[i];
		}
		for (int k = 0; k < liczby.size(); k++)
		{
			wynik += liczby[k];
		}
		cout << "Srednia wynosi: " << wynik / liczby.size() << endl;
	}

};
void zad32()

{
	int ile,min,max;
	
	cout << "Podaj ile liczb: " << endl;
	cin >> ile;
	if (ile <= 0)
		cout << "wektor nie moze byc pusty" << endl;
	else
	{
		vector<int> liczby(ile);
		cout << "Podaj liczby: " << endl;

		for (int i = 0; i < ile; i++)
		{
			cin >> liczby[i];
		}

		min = liczby[0];
		max = liczby[0];

		for (int k = 1; k < liczby.size(); k++)
		{
			

			if (min > liczby[k])
				min = liczby[k];

			if (max < liczby[k])
				max = liczby[k];
		}
		cout << "Min wynosi: " << min << "\nMax wynosi: " << max << endl; 
	}

};
void zad33()
{
	int ile;
	
	cout << "Podaj ile liczb: " << endl;
	cin >> ile;
	if (ile <= 0)
		cout << "wektor nie moze byc pusty" << endl;
	else
	{
		vector<int> liczby(ile);
		vector<int> parzyste;
		cout << "Podaj liczby: " << endl;

		for (int i = 0; i < ile; i++)
		{
			cin >> liczby[i];

			if (liczby[i] % 2 == 0)
				parzyste.push_back(liczby[i]);
		}

		for (int k = 0; k < parzyste.size(); k++)
		{
			
			cout << parzyste[k] << endl;
			
		}
	
	}

};
void zad34()
{
	int ile,szukana,wystapienia = 0;
	cout << "Podaj ilosc: " << endl;
	cin >> ile;
	if (ile <= 0)
		cout << "Podano nieprawidlowa liczbe." << endl;
	else 
	{
		vector<int> liczba(ile);
		cout << "Podaj szukana liczbe: " << endl;
		cin >> szukana;
		cout << "Podaj liczby do wektora: " << endl;

		for (int i = 0; i < liczba.size(); i++)
		{
			cin >> liczba[i];
			if (liczba[i] == szukana)
				wystapienia++;
		}

		cout << "W wektorze znajduje sie " << wystapienia << " wystapien szukanej liczby." << endl;

	}



};
void zad35()
{
	int ile,szukana;
	bool czy = false;
	cout << "Podaj ilosc: " << endl;
	cin >> ile;
	if (ile <= 0)
		cout << "Podano nieprawidlowa liczbe." << endl;
	else 
	{
		vector<int> liczba(ile);
		cout << "Podaj szukana liczbe: " << endl;
		cin >> szukana;
		cout << "Podaj liczby do wektora: " << endl;

		for (int i = 0; i < liczba.size(); i++)
		{
			cin >> liczba[i];
			if (liczba[i] == szukana)
			{
				czy = true;
				break;
			}
		}

		if (czy)
			cout << "Znaleziono" << endl;
		else
			cout << "Brak" << endl;
		
	}

};

int suma(vector<int> name)
{
	int wynik = name[0];
	for (int i = 1; i < name.size(); i++)
	{
		wynik += name[i];
	}

	return wynik;
}

void zad36()
{
	int ile;
	cout << "Podaj ilosc elementow: " << endl;
	cin >> ile;
	if (ile <= 0)
		cout << "Podano nieprawidlowa liczbe elementow.";
	else
	{
		vector<int> liczby(ile);
		cout << "Podaj liczby: " << endl;
		for (int i = 0; i < liczby.size(); i++)
		{
			cin >> liczby[i];
		}
		
		cout << suma(liczby);
	}

}
void zad37()
{
	int ile;
	string longest = "";
	cout << "Podaj ile slow: " << endl;
	cin >> ile;

	if (ile <= 0)
		cout << "Podano nieprawidlowa liczbe elementow.";
	else
	{
		vector<string> slowa(ile);
		cout << "Podaj slowa: " << endl;
		for (int i = 0; i < slowa.size(); i++)
		{
			cin >> slowa[i];
			if (longest.size() < slowa[i].size())
				longest = slowa[i];
		}

		cout << "Najdluzsze jest slowo: " << longest << endl;


	}
}
void zad38()
{
	int ile;
	cout << "Podaj ilosc liczb: " << endl;
	cin >> ile;

	if (ile <= 0)
		cout << "Podano nieprawidlowa liczbe elementow.";
	else
	{
	
		vector<int> liczby(ile);
		cout << "Podaj liczby: " << endl;
		for (int i = 0; i < liczby.size(); i++)
		{
			cin >> liczby[i];
		}

		for (int i = 0; i < liczby.size() / 2; i++)
		{		
			int pomocnicza = liczby[i];
			liczby[i] = liczby[liczby.size() - 1 - i];
			liczby[liczby.size() - 1 - i] = pomocnicza;
		}

		for (int i = 0; i < liczby.size() ; i++)
		{
			cout << liczby[i];
		}
	}
}
void zad39()
{
	int ile,max1,max2;
	cout << "Podaj ilosc liczb: " << endl;
	cin >> ile;

	if (ile <= 1)
		cout << "Podano nieprawidlowa liczbe elementow.";
	else
	{
		vector<int> liczby(ile);
		
		cout << "Podaj liczby: " << endl;

		for (int i = 0; i < liczby.size(); i++)
		{
			cin >> liczby[i];
		}

		max1 = liczby[0], max2 = liczby[0];

		for (int i = 1; i < liczby.size(); i++)
		{
			if (liczby[i] > max1)
			{
				max2 = max1;
				max1 = liczby[i];
			}
			else if (liczby[i] < max1 && liczby[i] > max2)
				max2 = liczby[i];
		}

		if (max2 == max1)
			cout << "Nie znaleziono drugiej najwyzszej wartosci" << endl;
		else
			cout << "Najwieksze liczby to: " << max1 << " i " << max2 << endl;
	}
}

double srednia(vector<int> name)
{
	double wynik = name[0];
	for (int i = 1; i < name.size(); i++)
	{
		wynik += name[i];
	}
	wynik = wynik / name.size();

	return wynik;
}
int minimum(vector<int> name)
{
	int wynik = name[0];
	for (int i = 1; i < name.size(); i++)
	{
		if (wynik > name[i])
		wynik = name[i];
	}
	return wynik;
}
int maximum(vector<int> name)
{
	int wynik = name[0];
	for (int i = 1; i < name.size(); i++)
	{
		if (wynik < name[i])
			wynik = name[i];
	}
	return wynik;
}
vector<int> par(vector<int> name)
{
	vector<int> wynik;
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] % 2 == 0)
			wynik.push_back(name[i]);
	}
	return wynik;
}
vector<int> wypelnij()
{
	int ile;
	cout << "Podaj ilosc liczb: " << endl;
	cin >> ile;

	while (ile <= 0)
	{
		cout << "Podano nieprawidlowa liczbe elementow. Podaj liczbe wieksza od 0" << endl;
		cin >> ile;
	}
	vector<int> liczby(ile);
	cout << "Podaj liczby: " << endl;

	for(int i = 0; i < liczby.size(); i++)
	{
		cin >> liczby[i];
	}
	return liczby;
	
}
void zad40()
{
	int wybor;
	double wynik;
	vector<int> wektor = wypelnij();
	vector<int> wyswietl = par(wektor);

	cout << "Wybierz operacje na wektorze: 1.suma 2.srednia 3.min 4.max 5.liczby parzyste" << endl;
	cin >> wybor;

	switch (wybor)
	{

	case 1:
		wynik = suma(wektor);
		cout << wynik << endl;
		break;
	case 2:
		wynik = srednia(wektor);
		cout << wynik << endl;
		break;
	case 3:
		wynik = minimum(wektor);
		cout << wynik << endl;
		break;
	case 4:
		wynik = maximum(wektor);
		cout << wynik << endl;
		break;
	case 5:
		
		cout << "liczby parzyste to : " << endl;
		for (int i = 0; i < wyswietl.size(); i++)
		{
			cout << wyswietl[i] << " ";
		}
		break;

	default:
		cout << "Wybrano nieprawidlowa operacje" << endl;
		break;
	}

}

void zad41()
{
	int tab[10];
	cout << "Podaj liczby do tablicy: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> tab[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "Liczba " << i + 1 << ": " << tab[i] << endl;
	}
}




void zad42()
{
	int tab[5];
	int pom,liczba = 4;
	cout << "Podaj liczby: " << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> tab[i];

	}
	for (int i = 0; i < 5 /2; i++)
	{
		pom = tab[i];
		tab[i] = tab[liczba];
		tab[liczba] = pom;
		liczba--;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << tab[i];

	}

}

void zad43()
{
	const int rozmiar = 5;
	int tab[rozmiar],pom;
	cout << "Podaj liczby do tablicy: " << endl;
	for (int i = 0; i < rozmiar; i++)
	{
		cin >> tab[i];
	}
	pom = tab[rozmiar - 1];
	for (int i = rozmiar - 1; i > 0; i--)
	{
		tab[i] = tab[i - 1];
	}
	tab[0] = pom;
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i];
	}

}


void zad44()
{
	const int rozmiar = 5;
	int tab[rozmiar];
	bool rosnaca = true;
	cout << "Podaj liczby do tablicy: " << endl;

	for (int i = 0; i < rozmiar; i++)
	{
		cin >> tab[i];
	}


	for (int i = rozmiar-1; i > 0; i--)
	{
		if (tab[i] < tab[i - 1])
			rosnaca = false;
	}
	
	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i] << " ";
	}

	if (rosnaca)
		cout << "Tak" << endl;
	else
		cout << "Nie" << endl;

}


void zad45()
{
	const int rozmiar = 5;
	int tab[rozmiar], pom;
	cout << "Podaj liczby do tablicy: " << endl;

	for (int i = 0; i < rozmiar; i++)
	{
		cin >> tab[i];
	}


	for (int i = rozmiar - 1; i > 0; i--)
	{
		for (int k = 0; k < i; k++)
		{

			if (tab[k] > tab[k + 1])
			{
				pom = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = pom;
			}

		}

	}

	for (int i = 0; i < rozmiar; i++)
	{
		cout << tab[i] << endl;
	}

};


void zad46()
{
	constexpr int size = 3;
	int tab[size][size], sumResult = 0;

	cout << "Podaj liczby do macierzy: " << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> tab[i][j];
			sumResult += tab[i][j];
		}
	}

	cout << "Wynik sumy elementow macierzy wynosi: " << sumResult << endl;
};

void zad47()
{
	constexpr int size = 3;
	int tab[size][size];

	cout << "Podaj liczby do macierzy: " << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> tab[i][j];
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << tab[i][i] << endl;
	}

};

void zad48()
{
	constexpr int size = 2;
	int tab[size][size];

	cout << "Podaj liczby do macierzy: " << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> tab[i][j];
		}
	}

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{


			cout << tab[j][i] << endl;
		}
	}

};

void zad49()
{
	constexpr int size = 3;
	int tab[size][size], sumA = 0, sumB = 0, sumC = 0;

	cout << "Podaj liczby do macierzy: " << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> tab[i][j];
		}
	}

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{

			if (i == 0)
				sumA += tab[i][j];
			if (i == 1)
				sumB += tab[i][j];
			if (i == 2)
				sumC += tab[i][j];
		}
	}

	cout << "Suma 1 wiersza: " << sumA << "\nSuma 2 wiersza: " << sumB << "\nSuma 3 wiersza: " << sumC << endl;
};

bool playerSwitch(bool whichPlayer)
{
	return !whichPlayer;
};
int checkWin(char tab[3][3])
{
	//


	int score = 0;

	//poziomo

	if (tab[0][0] + tab[0][1] + tab[0][2] == 264 || tab[0][0] + tab[0][1] + tab[0][2] == 237)
		score = tab[0][0] + tab[0][1] + tab[0][2];

	else if (tab[1][0] + tab[1][1] + tab[1][2] == 264 || tab[1][0] + tab[1][1] + tab[1][2] == 237)
		score = tab[1][0] + tab[1][1] + tab[1][2];

	else if (tab[2][0] + tab[2][1] + tab[2][2] == 264 || tab[2][0] + tab[2][1] + tab[2][2] == 237)
		score = tab[2][0] + tab[2][1] + tab[2][2];



	//skosy

	else if (tab[0][0] + tab[1][1] + tab[2][2] == 264 || tab[0][0] + tab[1][1] + tab[2][2] == 237)
		score = tab[0][0] + tab[1][1] + tab[2][2];

	else if (tab[2][0] + tab[1][1] + tab[0][2] == 264 || tab[2][0] + tab[1][1] + tab[0][2] == 237)
		score = tab[2][0] + tab[1][1] + tab[0][2];


	//pionowo

	else if (tab[0][0] + tab[1][0] + tab[2][0] == 264 || tab[0][0] + tab[1][0] + tab[2][0] == 237)
		score = tab[0][0] + tab[1][0] + tab[2][0];

	else if (tab[0][1] + tab[1][1] + tab[2][1] == 264 || tab[0][1] + tab[1][1] + tab[2][1] == 237)
		score = tab[0][1] + tab[1][1] + tab[2][1];

	else if (tab[0][2] + tab[1][2] + tab[2][2] == 264 || tab[0][2] + tab[1][2] + tab[2][2] == 237)
		score = tab[0][2] + tab[1][2] + tab[2][2];

	return score;
};

void zad50()
{
	constexpr int size = 3;
	int choice, score = 0, round = 1;
	char tab[size][size] = {
	{ '-', '-', '-' },
	{ '-', '-', '-' },
	{ '-', '-', '-' }
	};
	bool whichPlayer = true;
	char whichSign;

	while (round < 10)
	{
		cout << "\nStan Planszy" << endl;

		//displaying the board
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << tab[i][j] << " ";
			}
			cout << "\n";
		}

		cout << "\n";

		if (whichPlayer == true)
		{
			cout << "Runda " << round << "\nTura Gracza 1" << endl;
			whichSign = 'O';
		}
		else if (whichPlayer == false)
		{
			cout << "Runda " << round << "\nTura Gracza 2" << endl;
			whichSign = 'X';
		}
		cout << "Podaj pozycje w formacie kolumna x rzad (np. 11 / 22 / 33)." << endl;
		cin >> choice;

		switch (choice)
		{
		case 11:
			if (tab[0][0] == '-')
			{
				tab[0][0] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 12:
			if (tab[0][1] == '-')
			{
				tab[0][1] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 13:
			if (tab[0][2] == '-')
			{
				tab[0][2] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 21:
			if (tab[1][0] == '-')
			{
				tab[1][0] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 22:
			if (tab[1][1] == '-')
			{
				tab[1][1] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 23:
			if (tab[1][2] == '-')
			{
				tab[1][2] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 31:
			if (tab[2][0] == '-')
			{
				tab[2][0] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 32:
			if (tab[2][1] == '-')
			{
				tab[2][1] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		case 33:
			if (tab[2][2] == '-')
			{
				tab[2][2] = whichSign;
				whichPlayer = playerSwitch(whichPlayer);
				round++;
			}
			else
			{
				cout << "To pole jest juz zajete!" << endl;
			}
			break;

		default:
			cout << "Nieprawidlowy wybor!" << endl;
			break;
		}

		score = checkWin(tab);

		if (score == 264 || score == 237)
			break;

	}
	cout << "Podsumowanie Planszy" << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << "\n";
	}




	if (score == 264)
		cout << "\nWygral Gracz 2!" << endl;
	else if (score == 237)
		cout << "\nWygral Gracz 1!" << endl;
	else
		cout << "\nRemis! Zaden z graczy nie wygral" << endl;

};




void zad51()
{
	int a = 5;
	int* wsk = &a;
	cout << wsk << endl;
};
void zad52()
{
	int a = 42;
	int* wsk = &a;
	cout << *wsk << endl;
};
void zad53()
{
	int a = 10;
	int* wsk = &a;
	*wsk = 50;
	cout << *wsk << " " << a << endl;
};
void switchVar(int* wskA, int* wskB)
{
	int pom = *wskA;
	*wskA = *wskB;
	*wskB = pom;
};
void zad54()
{
	int a = 3, b = 7;
	int* wskA = &a;
	int* wskB = &b;

	cout << *wskA << *wskB << endl;

	switchVar(wskA, wskB);

	cout << *wskA << *wskB << endl;

};
void tabInc(int* wskA, const int size)
{

	for (int i = 0; i < size; i++)
	{
		*wskA += 1;
		wskA++;
	}
};
void zad55()
{
	const int size = 4;
	int tab[size] = { 1,2,3,4 };
	int* wskA = tab;

	for (int i = 0; i < size; i++)
	{
		cout << tab[i] << " ";
	}

	cout << "\n";

	tabInc(wskA, size);

	for (int i = 0; i < size; i++)
	{
		cout << tab[i] << " ";
	}

};
void zad56()
{
	const int size = 4;
	int tab[size] = { 1,2,3,4 };
	int* wskA = tab;

	for (int i = 0; i < size; i++)
	{
		cout << tab[i] << " ";
	}

	cout << "\n";


	for (int i = 0; i < size; i++)
	{
		cout << *wskA << " ";
		wskA++;
	}

};


int *findElement(int* tab, const int size, int target)
{
	for (int i = 0; i < size; i++)
	{
		if (*tab == target)
			return tab;

		tab++;
	}

	return nullptr;
};

void zad57()
{
	int tab[] = { 10, 20, 30 };
	const int size = 3;
	int target;

	cout << "Podaj szukana liczbe: ";
	cin >> target;

	int* result = findElement(tab, size, target);

	if (result != nullptr)
	{
		cout << "Znaleziono liczbe: " << *result << "\nAdres: " << result << endl;
	}
	else
	{
		cout << "Nie znaleziono liczby." << endl;
	}
	
};
int* ifNull(int* wsk)
{
	if (wsk != nullptr)
		return wsk;
	else
	{
		cout << "Wskaznik jest pusty." << endl;
		return nullptr;
	}

};

void zad58()
{
	int a = 5;
	int* wskA = &a;
	int* wskB = nullptr;

	
	int *result = ifNull(wskA);

	if (result != nullptr)
	{
		cout << *result << endl;
	}

	result = ifNull(wskB);

	if (result != nullptr)
	{
		cout << *result << endl;
	}

};
void zad59()
{
	int* num = new int;

	*num = 10;
	cout << *num << endl;

	*num = 99;
	cout << *num << endl;

	delete num;
	num = nullptr;

};
void zad60()
{
	int size;
	cout << "Podaj rozmiar tablicy: " << endl;
	cin >> size;

	if (size <= 0)
	{
		cout << "Niepoprawny rozmiar tablicy." << endl;
		return;
	}

	int* tab = new int[size];

	cout << "Podaj liczby: " << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> tab[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << tab[i] << " ";
	}

	delete[] tab;
	tab = nullptr;

};
#define PI 3.14159
void zad61()
{
	constexpr double cPI = 3.14159;

	cout << PI << " " << PI*PI << " " << 2 * PI << endl;
	cout << cPI << " " << cPI*cPI << " " << 2 * cPI << endl;
};
#define SQUARE(x) ((x)*(x))
void zad62()
{
	constexpr double i = 2;
	constexpr double square = i * i;

	cout << SQUARE(5) << " " << SQUARE(2 + 3) << endl;
	//cout << square(5) << " " << square(2 + 3) << endl;
	
};

#define DEBUG   ///bez definicji wnetrze nie dziala.
void zad63()
{
	cout << 2 * 2 << endl;

#ifdef DEBUG
	cout <<"Program obliczajacy kwadrat liczby 2: " << 2 * 2 << endl;
#endif
};

int calc(int (*which)(int, int), int a, int b)
{

	return which(a, b);
};

int sum(int a, int b)
{
	return a + b;
};

int sub(int a, int b)
{
	return a - b;
};

int mul(int a, int b)
{
	return a* b;
};

void zad64()
{
	int a, b;
	int result;
	string func;
	cout << "Podaj a:" << endl;
	cin >> a;
	cout << "Podaj b:" << endl;
	cin >> b;
	cout << "Podaj funkcje: sum,sub,mul" << endl;
	cin >> func;

	if (func == "sum")
		result = calc(sum, a, b);
	else if (func == "sub")
		result = calc(sub, a, b);
	else if (func == "mul")
		result = calc(mul, a, b);
	else
	{
		cout << "Podano nieprawidlowa funkcje." << endl;
		return;
	}

	cout << "wynik funkcji to: " << result << endl;
};
string sayHello()
{
	return "Hello!";
};
string sayGoodBye()
{
	return "Goodbye!";
};
string sayHND()
{
	return "Have a nice day!";
};
void zad65()
{
	int choice;
	string (*ptrA)(), (*ptrB)(),(*ptrC)();

	ptrA = sayHello;
	ptrB = sayGoodBye;
	ptrC = sayHND;

	string (*tab[3])() = {ptrA,ptrB,ptrC};

	cout << "Wybierz funkcje - 1 / 2 / 3" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << tab[0]() << " ";
		break;
	case 2:
		cout << tab[1]() << " ";
		break;
	case 3:
		cout << tab[2]() << " ";
		break;
	default:
		cout << "Nieprawidlowy wybor funkcji." << endl;
		break;
	}

};
bool checkEven(int number)
{
	return number % 2 == 0;
	
};
vector<int> even(vector<int> numbers,bool(* checkEven)(int number))
{
	vector<int> result;

	for (int i = 0; i < numbers.size(); i++)
	{
		if (checkEven(numbers[i]))
			result.push_back(numbers[i]);
	}

	return result;

};
void zad66()
{
	vector<int> numbers = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> result = even(numbers,checkEven);
	
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}
};
int addTen(int number)
{
	return number + 10;
};
vector<int> apply(vector<int>numbers,int(*addTen)(int number))
{
	vector<int>result;
	for (int i = 0; i < numbers.size();i++)
	{
		result.push_back(addTen(numbers[i]));
	}
	return result;
};
void zad67()
{
	vector<int> numbers = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> result = apply(numbers,addTen);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}
};
void print(int number)
{
	cout << number << endl;
};
void print(double number)
{
	cout << number << endl;
};
void print(string name)
{
	cout << name << endl;
};
void print(char charakter)
{
	cout << charakter << endl;
};
void zad68()
{
	print(1);
	print(1.5);
	print("slowo");
	print("a");
};
void area(int a,int b)
{
	int result = a * b;
	cout << result << endl;
};
void area(int a)
{
	int result = a * a;
	cout << result << endl;
};
void area(double r)
{
	double result = (3.14) * (r * r);
	cout << result << endl;
};
void zad69()
{
	area(5,3);
	area(4);
	area(2);
};
double sum(double a, double b)
{
	return a + b;
};
double sub(double a, double b)
{
	
	return a - b;
};
double mul(double a, double b)
{
	return a * b;
};
double div(double a, double b)
{
	return a / b;
};
void displayResult(double (*funcPtr)(double a, double b), double a, double b)
{
	cout << "Wynik to : " << funcPtr(a, b) << endl;
};
void zad70()
{
	int choice;
	double a, b;
	cout << "Podaj a: " << endl;
	cin >> a;
	cout << "Podaj b: " << endl;
	cin >> b;

	double(*ptrSum)(double a, double b), (*ptrSub)(double a, double b),
		(*ptrMul)(double a, double b), (*ptrDiv)(double a, double b);

	ptrSum = sum, ptrSub = sub, ptrMul = mul, ptrDiv = div;

	cout << "\nPodaj operacje: 1.Dodawanie 2.Odejmowanie 3.Mnozenie 4.Dzielenie." << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		displayResult(ptrSum, a, b);
		break;
	case 2:
		displayResult(ptrSub, a, b);
		break;
	case 3:
		displayResult(ptrMul, a, b);
		break;
	case 4:
		if (b != 0)
		{
			displayResult(ptrDiv, a, b);
			break;
		}
		else
		{
			cout << "Nieprawidlowa operacja." << endl;
			break;
		}
	default:
		cout << "Nieprawidlowa operacja." << endl;
		break;
	}

};


