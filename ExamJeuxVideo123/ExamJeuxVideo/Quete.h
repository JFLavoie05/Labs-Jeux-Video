#pragma once
#include <string>
using namespace std;
class Quete
{
protected :
	string nom;
	enum class nivDifficulte {Facile, Moyen, Difficile};
	int nivMin;
	int recompenseOr;
	int expRecu;

public :

	Quete();
	~Quete();
	void QueteFacile(int _nivMin, int _recompenseOr, int _expRecu);
	void QueteMoyen(int _nivMin, int _recompenseOr, int _expRecu);
	void QueteDifficile(int _nivMin, int _recompenseOr, int _expRecu);
	nivDifficulte getDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();

	virtual string to_string();
};

