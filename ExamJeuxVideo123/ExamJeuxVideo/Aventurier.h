#pragma once
#include <vector>
#include "Quete.h"
using namespace std;
class Aventurier
{
protected:
	int niveau;
	vector <Quete*> tabQuete;

public : 
	Aventurier(int niv);
	~Aventurier();

	void AfficherQuete();
	void AjouterQuete(Quete* quete);
	int getNiv();


};

