#include "Aventurier.h"
#include <iostream>
using namespace std;

Aventurier::Aventurier(int niv)
{
	niveau = niv;
}

Aventurier::~Aventurier()
{
}

void Aventurier::AfficherQuete()
{
	cout << "Liste de Quetes" << endl;
	for (int i = 0; i < tabQuete.size(); i++)
	{
		cout <<  i + 1 << ". " << "Niveau Minimum : " << tabQuete[i]->getNivMin() << " Recompense en Or : " << tabQuete[i]->getRecompense() << " Experience recu : " << tabQuete[i]->getExp() << endl;
	}
}

void Aventurier::AjouterQuete(Quete* quete)
{
	tabQuete.push_back(quete);
}

int Aventurier::getNiv()
{
	return niveau;
}
