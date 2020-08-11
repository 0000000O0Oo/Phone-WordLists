#include <fstream>
#include <iostream>

int main() {
	int indicateur{ 0 };
	while (1) {
		std::cout << "Entrez votre indicateur regional (XXX-000-0000) : ";
		std::cin >> indicateur;
		if (indicateur > 1000) {
			std::cout << "ERREUR ! Veuillez entrez un indicateur regional valide !" << std::endl <<"Exemple : 514";
	 	}
		else {
			std::cout << "Creation de la wordlist en cours..." << std::endl;
			std::cout << "Veuillez patienter !";
			break;
		}
	}
	int numero{ 1000000 };
	int finnum{ 9999999 };
	//Ouverture du fichier texte
	std::ofstream fichier{ "sortie.txt" };
	while (numero != finnum) {
		fichier << indicateur << numero << std::endl;
		++numero;
	}
	//Ouverture d'un fichier texte
	//Écriture dans le fichier texte
	return 0;
}