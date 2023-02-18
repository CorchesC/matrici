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
