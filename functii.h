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
int sumaZona1(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j < n - 1) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int sumaZona2(int x[100][100], int n, int m) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j < n - 1) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int sumaZona3(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n - 1) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int sumaZona4(int x[100][100], int n, int m) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j > n - 1) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int sumaZonaSpecificata(int x[100][100], int m, int n, int z) {
	if (z == 1) {
		int s = sumaZona1(x,n,m);
		return s;
	}
	if (z == 2) {
		int s = sumaZona2(x, n, m);
		return s;
	}
	if (z == 3) {
		int s = sumaZona3(x, n, m);
		return s;
	}
	if (z == 4) {
		int s = sumaZona4(x, n, m);
		return s;
	}
	if (z != 1 && z != 2 && z != 3 && z != 4) {
		return 0;
	}
}
int sumaDiagonalaPrincipala(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += x[i][i];
	}
	return s;
}
int sumaDiagonalaSecundara(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = n - 1; i >= 0; i--) {
		s+= x[i][(n - 1) - i];
	}
	return s;
}
int diferentaAbsolutaSumaDiagPrincipalaSecundara(int x[100][100], int m, int n) {
	int dif = 0;
	int sP = sumaDiagonalaPrincipala(x, m, n);
	int sS = sumaDiagonalaSecundara(x, m, n);
	if (sP > sS) {
		dif = sP - sS;
		return dif;
	}
	else if (sS > sP) {
		dif = sS - sP;
		return dif;
	}
}
int celMaiMareDivComun(int a, int b) {
	int dmaxA = -1;
	int dmaxB = -1;
	int dmaxCOM = 0;
	int x1 = 1;
	int x2 = 1;
	for (x1 = 1, x2 = 1; x1 <= a, x2 <= b; x1++, x2++) {
		if (a % x1 == 0) {
			if (x1 > dmaxA) {
				dmaxA = x1;
			}
		}
		if (b % x2 == 0) {
			if (x2 > dmaxB) {
				dmaxB = x2;
			}
		}
		if (dmaxA == dmaxB) {
			dmaxCOM = dmaxA;
		}
	}
	return dmaxCOM;
}
int sumaDeasupraDiagonaleiPrincipale(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int c = i + 1; c < n; c++) {
			s+= x[i][c] ;
		}
	}
	return s;
}
int sumaDedesuptDiagonaleiPrincipale(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int c = 0; c < i; c++) {
			s += x[i][c];
		}
	}
	return s;
}
int cmmdcDiagonalelorEx28(int x[100][100], int m, int n) {
	int dP = sumaDeasupraDiagonaleiPrincipale(x, m, n);
	int sP = sumaDedesuptDiagonaleiPrincipale(x, m, n);
	int cmmdc = celMaiMareDivComun(dP, sP);
	return cmmdc;
}
int sumaPrimuluiVecinAlDiagonaleiPrincipale(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (x[i][i + 1] > 0) {
			s += x[i][i+1];
		}
		
	}
	return s;
}
int sumaAlDoileaVecinAlDiagonaleiPrincipale(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (x[i + 1][i] > 0) {
			s += x[i + 1][i];
		}
		
	}
	return s;
}
void parcurgereSerpuita(int x[100][100], int m, int n) {
	int v[100], d = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			v[d] = x[i][j];
			d++;
		}
	}
	bubbleSort(v, d);
	for (int f = 0; f < d; f++) {
		cout << v[f] << " ";
	}
	cout << endl;
}
int sumaNord(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j < n - 1) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int sumaSud(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n - 1) {
				s+= x[i][j];
			}
		}
	}
	return s;
}
int sumaEst(int x[100][100], int m, int n) {
	int s = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j > n - 1) {
				s += x[i][j];
			}
		}
	}
	return s;
}
int sumaVest(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j < n - 1) {
				s+= x[i][j];
			}
		}
	}
	return s;

}
void afisareSumeIsoscele(int x[100][100], int m, int n) {
	int v[100], d = 0;
	int nord = sumaNord(x, m, n);
	v[d] = nord;
	d++;
	int sud = sumaSud(x, m, n);
	v[d] = sud;
	d++;
	int est = sumaEst(x, m, n);
	v[d] = est;
	d++;
	int vest = sumaVest(x, m, n);
	v[d] = vest;
	d++;
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
int sumaElementelorLinie(int x[100][100], int m, int n, int l) {
	int s = 0;
	for (int j = 0; j < m; j++) {
		s += x[l][j];
	}
	return s;
}
int sumaElementelorColoana(int x[100][100], int m, int n, int c) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += x[i][c];
	}
	return s;
}
int nrElementeCuSumaLiniilorSiColoanelorEgala(int x[100][100], int m, int n) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (sumaElementelorLinie(x, m, n, i) == sumaElementelorColoana(x, m, n, j)) {
				nr++;
			}
		}
	}
	return nr;
}
int nrElementeStrictMaiMariCaVeciniiLor(int x[100][100], int m, int n) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (x[i][j] > x[i][j - 1] && x[i][j] > x[i][j + 1]) {
				nr++;
			}
		}
	}
	return nr;
}
bool kApartineVectorului(int v[] , int dim, int k) {
	for (int i = 0; i < dim; i++) {
		if (v[i] == k) {
			return true;
		}
	}
	return false;
}
void afisareEx34(int x[100][100], int m, int n) {
	int v[100], d = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j < n - 1) {
				if (kApartineVectorului(v,d,x[i][j]) == false) {
					v[d] = x[i][j];
					d++;
				}
			}
		}
	}
	bubbleSort(v, d);
	for (int f = 0; f < d; f++) {
		cout << v[f] << " ";
	}
	cout << endl;
}
bool kApareDe2OriSud(int x[100][100], int m, int n, int k) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n - 1) {
				if (x[i][j] == k) {
					nr++;
				}
			}
		}
	}
	if (nr >= 2) {
		return true;
	}
	else {
		return false;
	}
}
void afisareEx35(int x[100][100], int m, int n) {
	int v[100], d = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n - 1) {
				if (kApartineVectorului(v, d, x[i][j]) == false && kApareDe2OriSud(x,m,n,x[i][j]) == true) {
					v[d] = x[i][j];
					d++;
				}
			}
		}
	}
	bubbleSort(v, d);
	for (int f = 0; f < d; f++) {
		cout << v[f] << " ";
	}
	cout << endl;
}
bool elementeVectorEgale(int v[], int dim) {
	bool aff = false;
	for (int i = 0; i < dim-1; i++) {
		if (v[i] == v[i + 1]) {
			aff = true;
		}
		else {
			return false;
		}
	}
	return aff;
}
bool matricePatratMagic(int x[100][100], int m, int n) {
	int sdp = sumaDiagonalaPrincipala(x, m, n);
	int sds = sumaDiagonalaSecundara(x, m, n);
	int v[100], d = 0;
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = 0; j < m; j++) {
			s += x[i][j];
		}
		v[d] = s;
		d++;
	}
	if (elementeVectorEgale(v, d) == true && sdp == sds && sdp == v[0]) {
		return true;
	}
	else {
		return false;
	}
}
int minimaDePeColoana(int x[100][100], int m, int n,int c) {
	int min = 9999999;
	for (int i =0; i < n; i++) {
		if (x[i][c] < min) {
			min = x[i][c];
		}
	}
	return min;
}
int ultimaCifraAProdusuliDiagSecundaraEx37(int x[100][100], int m, int n) {
	int p = 1;
	for (int i = n - 1; i >= 0; i--) {
		if (x[i][(n - 1) - i] == minimaDePeColoana(x, m, n, i)) {
			p = p * x[i][(n - 1) - i];
		}
	}
	int ucP = p % 10;
	return ucP;
}
double maAleElementelorStrictPozitiveSubDiagPrincipala(int x[100][100], int m, int n) {
	double s = 0;
	double nr = 0;
	for (int i = 0; i < n; i++) {
		for (int c = 0; c < i; c++) {
			if (x[i][c] >= 0) {
				s += x[i][c];
				nr++;
			}
		}
	}
	double ma = s / nr;
	return ma;
}
void parcurgereChenar(int x[100][100], int m, int n) {
	for (int j = 0; j < m; j++) {
		cout << x[0][j] << " ";
	}
	for (int i = 1; i < n; i++) {
		cout << x[i][m - 1];
	}
	for (int j = m - 2; j >= 0; j--) {
		cout << x[n - 1][j] << endl;
	}
	for (int i = n - 2; i < 0; i--) {
		cout << x[i][0] << endl;
	}
	cout << endl;
}
void stergereLinie(int x[100][100], int& m, int n, int l) {
	for (int i = l; i < m - 1; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = x[i + 1][j];
		}
	}
	m--;
}
void stergereColoana(int x[100][100], int m, int& n, int c) {
	for (int j = c; j < n - 1; j++) {
		for (int i = 0; i < m; i++) {
			x[i][j] = x[i][j + 1];
		}
	}
	n--;
}
bool areTreiCifreEgaleIntreEle(int n) {
	while (n != 0) {
		int c1 = n % 10;
		int c2 = n % 100;
		int c3 = n % 1000;
		if (c1 == c2 == c3) {
			return true;
		}
		n = n / 10;
	}
	return false;
}
void stergereLiniiSiColoaneCuNrCuCifreEgaleIntreEle(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (areTreiCifreEgaleIntreEle(x[i][j]) == true) {
				stergereColoana(x, m, n, j);
				stergereLinie(x, m, n, i);
			}
		}
	}
}
void stergereLinieSiColoanaCuAlDoileaElementPrim(int x[100][100], int m, int n) {
	int ctr = 1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (nrPrim(x[i][j]) == true && ctr == 2) {
				stergereColoana(x, m, n, j);
				stergereLinie(x, m, n, i);
			}
			else if (nrPrim(x[i][j]) == true) {
				ctr++;
			}
		}
	}
}