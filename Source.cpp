#include<iostream>
#include<string>
#include "Header.h"

using namespace std;

Compte::Compte()
{
	this->numCompte = 0;
	this->nomProprietaire = " ";
	this->Solde = 0.0;
}

Compte::Compte(int num, string nom, double so)
{
	this->numCompte = num;
	this->nomProprietaire = nom;
	this->Solde = so;
}

bool Compte::retirerArgent(double val)
{
	if (this->Solde >= val)
	{
		this->Solde -= val;
		return true;
	}
	else {
		cout << "Votre solde est insuffisant";
		return false;
	}
}

void Compte::deposerArgent(double val)
{
	this->Solde += val;
}

void Compte::consulterSolde()
{
	cout << "Numéro de compte : " << this->numCompte << endl;
	cout << "Nom du propriétaire : " << this->nomProprietaire << endl;
	cout << "Solde : " << this->Solde << endl;
}

void Compte::transfererArgent(double val, Compte& c)
{
	if (retirerArgent(val) == true)
	{
		c.deposerArgent(val);
	}
	else
		cout << "Votre solde est insuffisant" << endl;
}
