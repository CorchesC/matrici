#pragma once
#include "functii.h"
using namespace std;

void ex1() {
	int x[100][100], m=0, n=0;
	citire(x, m, n);
	afisare(x, m, n);
}
 //PB1 \/
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
//PB2 \/
void ex7() {
	//2a) Realizati un nou numar ce sa contina cifra minima din elementul maxim de pe fiecare line.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nrNou = nrNouDinCifraMaxLinii(x, m, n);
	cout << "Numarul nou format din cifra minima a fiecarui element maxim de pe fiecare linie este: " << nrNou << endl;
}
void ex8() {
	//2b) Care este media aritmetica a elementeloer ce au intre 3-5 divizori proprii.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	double ma = maAlElementelorCuNrdPropIntre3Si5(x, m, n);
	cout << "Media aritmetica a elementelor ce au intre 3 si 5 divizori propii este: " << ma << endl;
} 
void ex9() {
	//2c) Afisati toate dubletele plaindrome intre ele de pe linia L (L citit de la tastatura).		
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Introduceti linia: " << endl;
	int l;
	cin >> l;
	perechiElemPalindromeIntreElePeLinaL(x, m, n,l);
}				
void ex10() {
	//2d) Care este cifra de control a elementului din coltul de dreapta jos?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int cifraC = cifraControlAlElementuluiDinDreaptaJos(x, m, n);
	cout << "Cifra de control a elementului din coltul de dreapta jos este: " << cifraC << endl;
}
void ex11() {
	//2e) Care este frecventa fiecarei cifre in parte a elementelor de pe o coloana para si o linie impara din matricea citita?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	frecventaCifrelorFiecaruiElement(x, m, n);
}
void ex12() {
	//2f) Care este cel mai mare numar ce se poate forma din cifrele de la pct. e)?
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = numarFormatDinFrecvente(x, m, n);
	cout << "Cel mai mare numar format din cifrele de la punctul e) este: " << nr << endl;
}
void ex13() {
	//2g) Care este cel mai mic nuamr ce se poate forma din toatae cifrele ce nu apar in scrierea elementelor din interiorul matricei (se va exclude cifra 0).
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	numarFormatDinCifreleCeNuApar(x, m, n);
}
void ex14() {
	//2h) Care este a k-a aparitie a lui y in matrice? (k si y sunt citite de la tastatura). Saca variabila k nu apare de cel putin y ori in vector se ca afisa mesajuL: "Nu exista".
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Introduceti a k-a aparitie: " << endl;
	int k;
	cin >> k;
	cout << "Introduceti elementul: " << endl;
	int y;
	cin >> y;
	aKApariteAlUnuiElement(x, m, n, k, y);
}
void ex15() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisare(x, m, n);
	int uc = n-1;
	sortateColoana(x, m, n,4);
}
//probleme PbInfo \/
void ex16() {
	//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Determinați suma valorilor pare din matrice.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaValorilorPare(x, m, n);
	cout << "Suma valorilor pare din matrice este: " << s << endl;
}
void ex17() {
	//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine suma elementelor de pe fiecare linie.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	sumaFiecareiLinii(x, m, n);
}
void ex18() {
	//Gigel a găsit o matrice cu n linii și m coloane și elemente numere naturale. El își propune să determine, pentru fiecare linie, cea mai mică valoare care se poate obține adunând elementele de pe linie, cu excepția unuia.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	celMaiMicNumarFormatDinSumaElemLiniei(x, m, n);
}
void ex19() {
	//Să se afle câte coloane ale unei matrice au produsul elementelor divizibil cu un număr dat p.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Introduceti divizorul p: " << endl;
	int p;
	cin >> p;
	int nr = nrProdusueAleElemenColoanelorDivizibileCuP(x, m, n,p);
	cout << "Nr coloanelor cu produsul elementelor divzibil cu " << p << " este: " << nr << endl;
}
void ex20() {
	//Să se afișeze elementele de pe coloana cu suma elementelor maximă într-o matrice.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareColoanaCuSumaElementelorMaxima(x, m, n);
}
void ex21() {
	//Să se afle indicele coloanei dintr-o matrice pentru care suma elementelor este minimă.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int c = coloanaCuSumaElementelorMinima(x, m, n);
	cout << "Coloana cu suma elementelor minima este: " << c+1 << endl;
}
void ex22() {
	//Parcurgând o matrice oarecare pe coloane, să se determine cea mai lungă secvenţă de elemente care sunt numere prime.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = ceaMaiMareSecventaDeNrPrime(x, m, n);
	cout << "Cea mai mare secventa de numere prime citite pe coloane este: " << nr << endl;
}
void ex23() {
	//Se dă o matrice cu elemente numere întregi. Să se determine, pentru fiecare coloană, valoarea minimă de pe coloana respectivă.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	valoareaMinimaAFiecareiColoane(x, m, n);

}
void ex24() {
	//Scrieţi un program care citeşte un tablou bidimensional cu m linii şi n coloane şi un număr k şi determină suma indicilor coloanelor care conţin valoarea k.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Inroduceti valoarea k: " << endl;
	int k;
	cin >> k;
	int s = sumaIndicilorColoanelorCareContinK(x, m, n,k);
	cout << "Suma indicilor coloanelor care contin k este: " << s <<  endl;
}
void ex25() {
	//Pentru prevenirea eroziunii la Marea Neagră, autoritățile au hotărât înnisiparea unei plaje. Plaja a fost împărțită în parcele de formă pătrată cu latura de 1 metru, dispuse ca elementele unui tablou bidimensional, reținându-se nivelul fiecărei parcele, măsurat în metri, de la nivelul mării. 
	//Înnisiparea se realizează doar pe acele parcele care au nivelul strict mai mic decât al celei mai joase dintre parcelele vecine cu ea, adăugând nisip, astfel încât cele două să aibă același nivel. Două parcele sunt vecine dacă au o latură comună.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = rezolvareInnisipare(x, m, n);
	cout << "Numarul necesar pentru inisipare este: " << s << endl;
}