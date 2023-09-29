#include "Quete.h"

Quete::Quete()
{
}

Quete::~Quete()
{
}

void Quete::QueteFacile( int _nivMin, int _recompenseOr, int _expRecu)
{
	nivMin = _nivMin;
	recompenseOr = _recompenseOr;
	expRecu = _expRecu;
	nivDifficulte::Facile;
}

void Quete::QueteMoyen(int _nivMin, int _recompenseOr, int _expRecu)
{
	nivMin = _nivMin;
	recompenseOr = _recompenseOr;
	expRecu = _expRecu;
	nivDifficulte::Moyen;
}

void Quete::QueteDifficile(int _nivMin, int _recompenseOr, int _expRecu)
{
	nivMin = _nivMin;
	recompenseOr = _recompenseOr;
	expRecu = _expRecu;
	nivDifficulte::Difficile;
}

Quete::nivDifficulte Quete::getDifficulte()
{
	return nivDifficulte();
}

int Quete::getNivMin()
{
	return nivMin;
}

int Quete::getRecompense()
{
	return recompenseOr;
}

int Quete::getExp()
{
	return expRecu;
}

string Quete::to_string()
{
	return string();
}
