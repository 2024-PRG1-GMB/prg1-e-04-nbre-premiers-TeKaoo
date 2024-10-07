/**
 * \file main.cpp
 * \version 1.0.0
 * \author Théo Kilcher
 * \date : 02.10.2024
 * \brief : Lister les nombres premiers de 1 au nombre entre 1 et 1000 proposé par l'utilisateur.
 */

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    char sortie;
    int nb_max, compteur, nombre;
    int tableur = 0; // va permettre d'amener à la ligne après avoir écrit 5 nombres.
    constexpr int min_valeur = 2;
    constexpr int max_valeur = 1000;



    cout << "Ce programme ..." << endl << endl;

    // Faire tourner le programme jusqu'à ce que l'on demande l'arret.
    do
    {
        nombre = 0;
        // Boucle do / while pour demander à l'utilisateur d'entrer un nombre et vérifier s'il rentre dans les valeurs voulues.
        do
        {
            cout << "Entrer une valeur [2-1000] : ";
            cin >> nb_max;
        } while (nb_max < min_valeur || nb_max > max_valeur);

        cout << "Voici la liste des nombres premiers" << endl;

        // Boucle de vérification et affichage des nombres.
        while (nombre < nb_max)
        {
            compteur = 0;
            nombre++;

            // Vérifier si le nombre est premier
            for(int i = 1; i <= nombre; i++)
            {
                if(nombre % i == 0)
                {
                    compteur++; // lorsqu'un nombre va avoir un modulo de 0 uniquement 2x (car diviser par 1 et lui même)
                                // le compteur incrémente de 1 et signifie que le nombre sera premier.
                }
            }
            // Afficher le nombre s'il est premier.
            if (compteur == 2)
            {
                tableur++;
                cout << '\t' << nombre << '\t';
                // Une fois que le programme à écrit 5 nombres il remets à la ligne.
                if (tableur == 5)
                {
                    cout << endl;
                    tableur = 0;
                }
            }

        }
        cout << endl << endl;

        // Demande à l'utilisateur s'il veut recommencer en vérifiant si la réponse données pour qu'elle rentre dans les valeurs voulues.
        do
        {
            cout << "Voulez-vous recommencer [O/N] : ";
            cin >> sortie;
        } while (toupper(sortie) != 'O' && toupper(sortie) != 'N');

    } while (toupper(sortie) != 'N'); // Sort du programme

    cout << endl << "Fin de programme" << endl;
}



