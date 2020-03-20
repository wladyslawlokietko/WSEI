#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()

    {


    
        cout << "Zmiana" << endl;

        srand(time(NULL));
        liczba = rand() % 100 + 1;

        while (liczba != strzal)
        {
            ile_prob++;
            cout << "Zgadnij liczbę: " << endl;
            cin >> strzal;

            if (liczba > strzal)
                cout << "Za mało! Jeszcze raz: " << endl;
            else if (liczba < strzal)
                cout << "Za dużo! Jeszcze raz: " << endl;

        }
        cout << "Wygrałeś za " << ile_prob << " razem!" << endl;

        system("pause");

        return 0;
    }
