#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "glowny.h"
#include "administrator.h"
#include "uzytkownik.h"
#include "aktywnosc.h"
#include <fstream>

using namespace std;

Glowny::Glowny()
{
}
Glowny::~Glowny()
{
}

void Glowny::obsluga()
{
    for(;;)
{
    string hasloA;
    int wybor;

    cout << " " << endl;
    cout << "               Witaj w aplikacji!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "               --------------------------------------------" << endl;
    cout << "               Konto administratora (wybierz 1) " << endl;
    cout << "               --------------------------------------------" << endl;
    cout << "               Konto uzytkownika (wybierz 2)" << endl;
    cout << "               --------------------------------------------" << endl;
    cout << "               Koniec (wybierz 3) " << endl;
    cout << "               --------------------------------------------" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "               --------------------------------------------" << endl;
    cout << "               Wybierz opcje: " << endl;
    cin >> wybor;
    cout << "               --------------------------------------------" << endl;
    cout << " " << endl;


    switch(wybor)
    {
    case 1:
        {
            Administrator a1;
            a1.logowanieA();

        }
        break;

    case 2:
        {
            Uzytkownik u1;
            u1.logowanieU();
        }
        break;

    case 3:
        {
            exit(0);
        }
        break;

    default: cout << "Nie ma takiej opcji." <<endl;
    cout << "Wybierz ponownie opcje: " << endl;
    cin >> wybor;

    }
    getchar(); getchar();
    system("cls");
}
}
