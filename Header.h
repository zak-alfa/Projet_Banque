#pragma once
#include<iostream>
#include<string>
#include "Header.h"

using namespace std;

class Compte {
private:
	int numCompte;
	string nomProprietaire;
	double Solde;

public:
	Compte();
	Compte(int, string, double);
	bool retirerArgent(double);
	void deposerArgent(double);
	void consulterSolde();
	void transfererArgent(double,Compte &c);

};