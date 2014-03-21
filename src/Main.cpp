#include <iostream>
#include <string> //Inclue string et les méthodes en rapport.
#include <cstdlib>

using namespace std;

string message()
{
	string message; //Créé une nouvelle variable "message", qui contient une chaîne de caractères.

	cout << "Choisissez votre message : ";
	getline(cin, message); //Pareil que cout, sauf que l'on marque quelque chose (P.S : La fonction utilisée est généralement cin >> message; mais cela ne prend pas en compte les majuscules, alors j'utilise celle-ci).

	return message; //Retourne la variable "message".
}

int main()
{
	string realMessage = message(); //Créé un string realMessage qui est égal au return de la fonction message().

	cout << "\n" << realMessage << "\n\n"; //Saute une ligne, affiche votre message dans la console, et saute 2 lignes après.

	system("PAUSE");
}