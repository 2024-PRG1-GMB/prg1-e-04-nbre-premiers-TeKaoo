/**
 * \file main.cpp
 * \version 1.0.0
 * \author Théo Kilcher
 * \date : 02.10.2024
 * \brief : Lister les nombres premiers de 1 au nombre entre 1 et 1000 proposé par l'utilisateur.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    cout << "Ce programme ... " << endl << endl << endl;

    int nb;
    do
    {
        cout << "Entrer un nombre [2 - 1000] :  " ;
        cin >> nb;
    } while (nb < 2 || nb > 1000);

    //int nb_testant = nb;
    //int result [nb];
    //for (int j = nb; j > 0;) // vient faire tourner la boucle pour J vaut nb rentré jusqu'à ce que nb vale 0
    //{
    //    int i = 2;
    //    do
    //    {
    //        //for (; i <= sqrt(j); i++)
    //        //{
    //        //}
    //        j--;
    //        // result[j] = {j};
    //    } while (j % i++ == 0);
    //    cout << j << " : "  << j << " % " << i << " = " << j % i << endl;
    //}

    //for (int ligne = 'a'; ligne < 'e'; ligne++)
    //{
    //    for (int col = nb; (col / 5) > 1; col--)
    //    {
    //        int x = nb;
    //        cout << result[x] << ' ';
    //        --x;
    //    }
    //    cout << endl;
    //}

    int result[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int i = 0; i < nb;)
    {
        cout << "       ";
        for (int j = 0; j < 5; i++, j++)
        {
            cout << result [i] << "     ";
        }
        cout << endl;

    }
}



