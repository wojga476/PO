#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "administrator.h"
#include "glowny.h"
#include "aktywnosc.h"
#include <fstream>

using namespace std;

Administrator::Administrator()
{
}

Administrator::~Administrator()
{
}

void Administrator::dodajuzytkownika()
{
    cout <<"                ----------------------------------------"<<endl;
    cout <<"                Podaj nowy login uzytkownika: " << endl;
    cin >> login;
    cout <<"                ----------------------------------------"<<endl;
    cout <<"                Podaj haslo nowego uzytkownika: " << endl;
    cin >> haslo;
    cout <<"                ----------------------------------------"<<endl;

    fstream plik;
    plik.open("uzytkownicy.txt", ios::out | ios::app);
    plik<<login<<endl;
    plik<<haslo<<endl;
    plik.close();

}

void Administrator::dodajczujnik()
{
    cout <<"                ----------------------------------------"<<endl;
    cout <<"                Podaj nazwe nowego czujnika: " << endl;
    cin >> czujnik;
    cout <<"                ----------------------------------------"<<endl;

    fstream plik2;
    plik2.open("czujnik.txt", ios::out | ios::app);
    plik2<<czujnik<<endl;
    plik2.close();

}

void Administrator::logowanieA()
{
    system("cls");

    int wyborA;
    cout <<"                ----------------------------------------"<<endl;
    cout<< "                Podaj haslo administratora: " <<endl;
    cin >>hasloA;
    cout <<"                ----------------------------------------"<<endl;
    if(hasloA=="adm")
        {
            system("cls");
            cout <<"            ------------------------------------------"<<endl;
            cout <<"            Wybierz ustawienia administratora: "<<endl;
            cout <<"            ------------------------------------------"<<endl;
            cout <<" "<<endl;
            cout <<" "<<endl;
            cout <<"            ------------------------------------------"<<endl;
            cout <<"            Dodaj nowego uzytkownika (wybierz 1)."<<endl;
            cout <<"            ------------------------------------------"<<endl;
            cout <<"            Dodaj nowy czujnik do domu (wybierz 2). "<<endl;
            cout <<"            ------------------------------------------"<<endl;
            cout <<"            Cofnij (wybierz 3) "<<endl;
            cout <<"            ------------------------------------------"<<endl;
            cout <<" "<<endl;
            cout <<"            ------------------------------------------"<<endl;
            cout <<"            Wybierz opcje:"<<endl;
            cin>>wyborA;

            switch(wyborA)
            {
                case 1:
                    {
                        system("cls");
                        Administrator a2;
                        a2.dodajuzytkownika();
                        Administrator g2;
                        g2.logowanieA();
                    }
                break;

                case 2:
                    {
                        system("cls");
                        Administrator a3;
                        a3.dodajczujnik();
                        Administrator g2;
                        g2.logowanieA();
                    }
                break;
                case 3:
                    {
                        system("cls");
                        Glowny g1;
                        g1.obsluga();
                    }
                break;

                default: cout << "Z³a opcja. " << endl;
                Administrator g2;
                g2.logowanieA();
            }

        }
    else {cout << "             Zle haslo administratora." << endl;}
    Glowny g1;
    g1.obsluga();
}
