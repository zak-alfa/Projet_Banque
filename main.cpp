#include<iostream>
#include<string>
#include "Header.h"

using namespace std;

int main()
{
	Compte c1(5003, "Ahmed Amine", 8050.175);
	c1.consulterSolde();
	c1.deposerArgent(12000);
	c1.consulterSolde();


	return 0;
}