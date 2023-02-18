#pragma once
#include "functii.h"
using namespace std;

void ex1() {
	int x[100][100], m=0, n=0;
	citire(x, m, n);
	afisare(x, m, n);
}
void ex2() {
	//1a) Cate elemente pare ce stau pe o pozitie divizibila cu 2 si 3 avem in matrice
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = nrElementePozDivizibile(x, m, n);
	cout << "Numarul de elemente pe pozite divizibila cu 2 si 3 este: " << nr << endl;
}
void ex3() {
	//1b) Sa se afiseze suma elementelor prime ce stau pe o linie para si o coloana impara.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaElementePrimeParImp(x, m, n);
	cout << "Suma elementelor prime ce stau pe o linie para si o coloana impara este: " << s << endl;
}
void ex4() {
	//1e) Realizati un nou vector care sa contina toate elementele plalindrome in ordinea in care apar ele daca am parcurge matricea pe coloane.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int v[100], d =0;
	vectorNouElementePalindromiceDinMatrice(x, m, n, v, d);
	afisareVector(v, d);
}
void ex5() {
	//1f) Realizati suma elementelorde pe fiecare linie in parte. Care este maximul dinte acestea?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int max = sumaMaxDePeFiecareLinie(x, m, n);
	cout << "Suma maxima a elementelor de pe fiecare line in parte este: " << max << endl;
}
void ex6() {
	//1g) Afisati media aritmetica a elementelor de pe lina unae se gaseste numarul cu cele mai multe cifre binare (cifra binara este 0 cifra ce este 0 sau 1).
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	double ma = maAElementelorCuCeleMaiMulteNrBinare(x, m, n);
	cout << "Media aritmetca a elementelor cu cel mai mare numar de numere binare de pe o line a matricii este: " << ma << endl;
}