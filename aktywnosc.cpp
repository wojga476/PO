#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "administrator.h"
#include "glowny.h"
#include "aktywnosc.h"
#include "uzytkownik.h"
#include <fstream>

using namespace std;

Aktywnosc::Aktywnosc()
{
}
Aktywnosc::~Aktywnosc()
{
}

void Aktywnosc::wyboropcji()
{
    int wyborO;

        system("cls");

        cout <<"                -----------------------------------"<<endl;
        cout <<"                Wybierz czynnosc domowa: "<<endl;
        cout <<"                -----------------------------------"<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<"                -----------------------------------"<<endl;
        cout <<"                Otworz/Zamknij okno (wybierz 1)"<<endl;
        cout <<"                -----------------------------------"<<endl;
        cout <<"                Otworz/Zamknij garaz (wybierz 2) "<<endl;
        cout <<"                -----------------------------------"<<endl;
        cout <<"                Otworz/Zamknij drzwi (wybierz 3) "<<endl;
        cout <<"                -----------------------------------"<<endl;
        cout <<"                Cofnij (wybierz 4) "<<endl;
        cout <<"                -----------------------------------"<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<"                -----------------------------------"<<endl;
        cout <<"                Wybierz opcje: "<<endl;
        cin>>wyborO;

        switch(wyborO)
            {
            case 1:
                {
                 system("cls");
                 //cout <<"Zamknieto okno "<<endl;
                 Aktywnosc a1;
                 a1.wyboropcji();
                }
                break;
            case 2:
                {
                    system("cls");
                    Glowny g2;
                    g2.obsluga();
                }
                break;

            case 3:
                    {
                    system("cls");
                    Glowny g2;
                    g2.obsluga();
                    }
            break;

            case 4:
                    {
                        system("cls");
                        Uzytkownik g3;
                        g3.logowanieU();
                    }
            break;


            }


    system("cls");
    Glowny g1;
    g1.obsluga();
}



void Aktywnosc::OZgaraz()
{

}

void Aktywnosc::OZokno()
{

}

void Aktywnosc::OZdrzwi()
{

}
