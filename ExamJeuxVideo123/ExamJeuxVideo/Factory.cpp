#include "Factory.h"
#include "Quete.h"

inline int genererNb(int min, int max)
{
	return(rand() % (max - min + 1)) + max;
}

Quete* Factory::getRandomQuete()
{
	int nbRandom = genererNb(100,1);
	Quete* quete = new Quete();

	if (nbRandom <= 75)
	{
		int nbNiv = genererNb(10, 1);
		int nbOr = genererNb(1000, 100);
		int nbExp = genererNb(2000, 100);

		quete->QueteFacile(nbNiv, nbOr, nbExp);

	}
	else if (nbRandom > 75 && nbRandom <= 90)
	{
		int nbNiv = genererNb(25, 10);
		int nbOr = genererNb(5000, 1000);
		int nbExp = genererNb(4000, 2000);

		quete->QueteMoyen(nbNiv, nbOr, nbExp);

	}
	else if (nbRandom > 90 && nbRandom <= 100)
	{
		int nbNiv = genererNb(99, 25);
		int nbOr = genererNb(35000, 5000);
		int nbExp = genererNb(14000, 4000);

		quete->QueteDifficile(nbNiv, nbOr, nbExp);

	}
    return quete;
}
