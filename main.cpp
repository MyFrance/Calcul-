#include <iostream>
using namespace std;
int main()
{
	double prixHT(0);
	cout << "Quel est le prix HT du kilo de tomate ?" << endl;
	cin >> prixHT;


	double nombreKg(0);
	cout << " Combien de kilo avez-vous prix ?" << endl; 
	cin >> nombreKg; 

	double tVA (0);
	cout << " Quel est la TVA appliquee a la tomate " << endl;
	cin >> tVA;

	double prixTTC(0);
	

	prixTTC = prixHT * nombreKg + (prixHT * nombreKg * tVA); 


	cout << "Vous nous devez " << prixTTC << endl;
	return 0; 
}

