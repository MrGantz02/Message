#include <iostream>
#include <string> //Inclue string et les m�thodes en rapport.
#include <cstdlib>

using namespace std;

string message()
{
	string message; //Cr�� une nouvelle variable "message", qui contient une cha�ne de caract�res.

	cout << "Choisissez votre message : ";
	getline(cin, message); //Pareil que cout, sauf que l'on marque quelque chose (P.S : La fonction utilis�e est g�n�ralement cin >> message; mais cela ne prend pas en compte les majuscules, alors j'utilise celle-ci).

	return message; //Retourne la variable "message".
}

int main()
{
	string realMessage = message(); //Cr�� un string realMessage qui est �gal au return de la fonction message().

	cout << "\n" << realMessage << "\n\n"; //Saute une ligne, affiche votre message dans la console, et saute 2 lignes apr�s.

	system("PAUSE");
}