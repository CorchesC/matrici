#pragma once
#include <iostream>
#include <fstream>
using namespace std;



void citire(int x[100][100], int&m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
int nrElementePozDivizibile(int x[100][100], int& m, int& n) {
	int ctr = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0 && j % 3 == 0) {
				ctr++;
			}
		}
	}
	return ctr;
}
bool nrPrim(int n) {
	int nrdiv = 0;
	for (int x = 1; x <= n; x++) {
		if (n % x == 0) {
			nrdiv++;
		}
	}
	if (nrdiv == 2) {
		return true;
	}
	else if (nrdiv == 1) {
		return true;
	}
	else {
		return false;
	}
}
int sumaElementePrimeParImp(int x[100][100], int& m, int& n) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (nrPrim(x[i][j]) == true) {
				if (i % 2 == 0 && j % 2 != 0) {
					s += x[i][j];
				}
			}
		}
	}
	return s;
}
int oglindit(int n) {
	int ogl = 0;
	while (n != 0) {
		int cifra = n % 10;
		ogl = ogl * 10 + cifra;
		n = n / 10;
	}
	return ogl;
}
bool palindrom(int n) {
	int ogl = oglindit(n);
	if (n == ogl) {
		return true;
	}
	else {
		return false;
	}
}
void afisareVector(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
void vectorNouElementePalindromiceDinMatrice(int x[100][100], int& m, int& n,int v[],int& dim) {
	dim = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			if (palindrom(x[i][j]) == true) {
				v[dim] = x[i][j];
				dim++;
			}
		}
	}
}
int sumaMaxDePeFiecareLinie(int x[100][100], int& m, int& n) {
	int sMax = -1;
	for (int i = 0; i < m; i++) {
		int s = 0;
		for (int j = 0; j < n; j++) {
			s += x[i][j];
		}
		if (s > sMax) {
			sMax = s;
		}
	}
	return sMax;
}
double maAElementelorCuCeleMaiMulteNrBinare(int x[100][100], int& m, int& n) {
	int max1 = -1;
	int max0 = -1;
	double ma = 0;
	for (int i = 0; i < m; i++) {
		int nr1 = 0;
		int nr0 = 0;
		for (int j = 0; j < n; j++) {
			if (x[i][j] == 1) {
				nr1++;
			}
			if (x[i][j] == 0) {
				nr0++;
			}
		}
		if (nr1 >= max1 && nr0 >= max0) {
			max1 = nr1;
			max0 = nr0;
			double s = 0;
			double nr = 0;
			for (int f = 0; f < n; f++) {
				s += x[i][f];
				nr++;
			}
			ma = s / nr;
		}
	}
	return ma;
}
int cifraMin(int n) {
	int min = 10;
	while (n != 0) {
		int cifra = n % 10;
		if (cifra < min) {
			min = cifra;
		}
		n = n / 10;
	}
	return min;
}
int nrNouDinCifraMaxLinii(int x[100][100], int& m, int& n) {
	int nr = 0;
	for (int i = 0; i < m; i++) {
		int max = -1;
		for (int j = 0; j < n; j++) {
			if (x[i][j] > max) {
				max = x[i][j];
			}
		}
		int cMin = cifraMin(max);
		if (cMin >= 0) {
			nr = nr * 10 + cMin;
		}
	}
	return nr;
}
int nrDivizoriProprii(int n) {
	int nrd = 0;
	for (int x = 1; x < n; x++) {
		if (x != 1) {
			if (n % x == 0) {
				nrd++;
			}
		}
	}
	return nrd;
}
double maAlElementelorCuNrdPropIntre3Si5(int x[100][100], int& m, int& n) {
	double ma = 0;
	double nr = 0;
	double s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (nrDivizoriProprii(x[i][j]) >= 3 && nrDivizoriProprii(x[i][j]) <= 5) {
				s += x[i][j];
				nr++;
			}
		}
	}
	ma = s / nr;
	return ma;
}
bool palindromeIntreEle(int n, int m) {
	int ogln = oglindit(n);
	int oglm = oglindit(m);
	if (ogln == m && oglm == n) {
		return true;
	}
	else {
		return false;
	}
}
void perechiElemPalindromeIntreElePeLinaL(int x[100][100], int& m, int& n, int l) {
	for (int j = 0; j < n; j++) {
		if (palindromeIntreEle(x[l][j], x[l][j + 1]) == true) {
			cout << x[l][j] << " " << x[l][j + 1] << endl;
		}
	}
}
int cifraDeControl(int n) {
	int cc = 0;
	do {
		cc = 0;
		while (n != 0) {
			int cifra = n % 10;
			cc += cifra;
			n = n / 10;
		}
		n = cc;
	}while (cc > 9);
	return cc;
}
int cifraControlAlElementuluiDinDreaptaJos(int x[100][100], int& m, int& n) {
	cout << x[m - 1][n - 1] << endl;
	int cifraC = cifraDeControl(x[m-1][n-1]);
	return cifraC;
}
void frecventaCifre(int f[], int nr) {
	while (nr != 0) {
		f[nr % 10]++;
		nr = nr / 10;
	}
}
void frecventaCifrelorFiecaruiElement(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (j % 2 != 0) {
					cout << "Pentru numarul " << x[i][j] << ":" << endl;
					int f[10]{};
					frecventaCifre(f, x[i][j]);
					for (int x = 0; x < 10; x++) {
						if (f[x] != 0) {
							if (f[x] == 1) {
								cout << "   Cifra " << x << " apare odata." << endl;
							}
							else {
								cout << "   Cifra " << x << " apare de " << f[x] << " ori." << endl;
							}
						}
					}
				}
			}
		}
	}
}
void bubbleSort(int v[], int dim) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < dim - 1; j++) {
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				aff = false;
			}
		}
	} while (aff == false);
}
void bubbleSortDesc(int v[], int dim) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < dim - 1; j++) {
			if (v[j] < v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				aff = false;
			}
		}
	} while (aff == false);
}
int numarFormatDinFrecvente(int x[100][100], int& m, int& n) {
	int v[100], d = 0;
	for (int i = 0; i < m; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (j % 2 != 0) {
					int f[10]{};
					frecventaCifre(f, x[i][j]);
					for (int x = 0; x < 10; x++) {
						if (f[x] != 0) {
							int ctr = f[x];
							while (ctr > 0) {
								v[d] = x;
								d++;
								ctr--;
							}
						}
					}
				}
			}
		}
	}
	int nrf = 0;
	bubbleSortDesc(v, d);
	for (int y = 0; y < d; y++) {
		nrf = 10 * nrf + v[y];
	}
	return nrf;
}
void numarFormatDinCifreleCeNuApar(int x[100][100], int& m, int& n) {
	int v[100], d = 0;
	for (int i = 0; i < m; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (j % 2 != 0) {
					int f[10]{};
					frecventaCifre(f, x[i][j]);
					for (int x = 1; x < 10; x++) {
						if (f[x] == 0) {
							v[d] = x;
							d++;
						}
					}
				}
			}
		}
	}
	cout << "Cel mai mic numar format din toatae cifrele ce nu apar in scrierea elementelor din interiorul matricei este: " ;
	int nrf = 0;
	bubbleSort(v, d);
	for (int y = 0; y < d; y++) {
		cout << v[y];
	}
	cout << endl;
}
void aKApariteAlUnuiElement(int x[100][100], int& m, int& n, int k, int y) {
	int ctr = 1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j] == y && ctr == k) {
				cout << "A " << k << "-a apatitie al numarului " << y << " este pe pozitia " << i << " " << j << endl;
			}
			else if (x[i][j] == y) {
				ctr++;
			}
		}
	}
	if (ctr < k) {
		cout << "Nu exista" << endl;
	}
}
void interschimbareLinii(int x[100][100], int m, int n,int l1,int l2) {
	for (int j = 0; j < m; j++) {
		
		int aux = x[l1][j];

		x[l1][j] = x[l2][j];

		x[l2][j] = aux;
	}
}			
void sortateColoana(int x[100][100], int m, int n,int uc) {
	

	for (int i = 0; i < m - 1; i++) {

		for (int j = i + 1; j < m; j++) {


			if (x[i][uc] > x[j][uc]) {

				interschimbareLinii(x, m, n, i, j);
			}
		}

	}
	cout << "=====================" << endl;
	afisare(x, m, n);
}
int sumaValorilorPare(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j] % 2 == 0) {
				s += x[i][j];
			}
		}
	}
	return s;
}
void sumaFiecareiLinii(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		int s = 0;
		for (int j = 0; j < n; j++) {
			s += x[i][j];
		}
		cout << "Suma pentru linia " << i+1 << " este: " << s << endl;
	}
}
void celMaiMicNumarFormatDinSumaElemLiniei(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		int min = 9999;
		int poz = 0;
		for (int j = 0; j < n; j++) {
			if (x[i][j] < min) {
				min = x[i][j];
				poz = j;
			}
		}
		int s = 0;
		for (int f = 0; f < n; f++) {
			if (f != poz) {
				s += x[i][f];
			}
		}
		cout << "Pentru linia " << i + 1 << "cea mai mică valoare care se poate obține adunând elementele de pe linie, cu excepția unuia este : " << s << endl;
	}
}
int nrProdusueAleElemenColoanelorDivizibileCuP(int x[100][100], int m, int n, int p) {
	int nr = 0;
	for (int j = 0; j < n; j++) {
		int prod = 1;
		for (int i = 0; i < m; i++) {
			prod = prod * x[i][j];
		}
		if (prod > 1 && prod % p == 0) {
			nr++;
		}
	}
	return nr;
}
void afisareColoanaCuSumaElementelorMaxima(int x[100][100], int m, int n) {
	int max = -100;
	int cMax = 0;
	for (int j = 0; j < n; j++) {
		int s = 0;
		for (int i = 0; i < m; i++) {
			s += x[i][j];
		}
		if (s > max) {
			max = s;
			cMax = j;
		}
	}
	for (int j = 0; j < n; j++) {
		if (j == cMax) {
			for (int i = 0; i < m; i++) {
				cout << x[i][j] << " ";
			}
		}
	}
	cout << endl;
}
int coloanaCuSumaElementelorMinima(int x[100][100], int m, int n) {
	int min = 1000;
	int cMin = 0;
	for (int j = 0; j < n; j++) {
		int s = 0;
		for (int i = 0; i < m; i++) {
			s += x[i][j];
		}
		if (s < min) {
			min = s;
			cMin = j;
		}
	}
	return cMin;
}
int ceaMaiMareSecventaDeNrPrime(int x[100][100], int m, int n) {
	int nrE = -1;
	int nrET = 0;
	for (int j = 0; j <n; j++) {
		for (int i = 0; i < m; i++) {
			if (nrPrim(x[i][j]) == true) {
				nrET++;
			}
			if (nrPrim(x[i][j]) == false) {
				if (nrET > nrE) {
					nrE = nrET;
				}
				nrET = 0;
			}
		}
	}
	return nrE;
}
void valoareaMinimaAFiecareiColoane(int x[100][100], int m, int n) {
	for (int j = 0; j < n; j++) {
		int min = 9999;
		for (int i = 0; i < m; i++) {
			if (x[i][j] < min) {
				min = x[i][j];
			}
		}
		if (min != 9999) {
			cout << "Valoarea minima a coloanei " << j << " este: " << min << endl;
		}
	}

}
int sumaIndicilorColoanelorCareContinK(int x[100][100], int m, int n,int k) {
	int s = 0;
	for (int j = 0; j < n; j++) {
		int aff = false;
		for (int i = 0; i < m; i++) {
			if (x[i][j] == k) {
				aff = true;
			}
		}
		if (aff == true) {
			s += j;
		}
	}
	return s;
}
int rezolvareInnisipare(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j - 1] > x[i][j] && x[i][j + 1] > x[i][j]) {
				if (x[i][j - 1] > x[i][j + 1]) {
					int dif = x[i][j - 1] - x[i][j];
					s += dif;
				}
				if (x[i][j - 1] < x[i][j + 1]) {
					int dif = x[i][j + 1] - x[i][j];
					s += dif;
				}
			}
		}
	}
	return s;
}
		