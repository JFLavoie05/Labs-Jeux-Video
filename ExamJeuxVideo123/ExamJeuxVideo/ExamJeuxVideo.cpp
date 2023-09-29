#include <iostream>
#include "Factory.h" 
#include "Quete.h"
#include "Aventurier.h"
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));

    Quete* queteRandom;
    Aventurier* aventurier = new Aventurier(5);

   


    

    for (int i = 0; i < 12; i++)
    {
        queteRandom = Factory::getRandomQuete();

        int nivMinQuete = queteRandom->getNivMin();
        int recompenseOrQuete = queteRandom->getRecompense();
        int expRecuQuete = queteRandom->getExp();

        

        if (nivMinQuete < aventurier->getNiv())
        {
            aventurier->AjouterQuete(queteRandom);
            system("Color 0A");
            cout << "******Quete ajoutee *******" << endl;
        }
        else
        {
            system("Color 4");
            cout << "******Quete Refuser ******* niveau insuffisant" << endl;
        }

    }
    system("Color 7");
    cout << "\n" << endl;
    aventurier->AfficherQuete();

    delete queteRandom;
    delete aventurier;
}

