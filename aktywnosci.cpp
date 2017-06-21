#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "administrator.h"
#include "uzytkownik.h"
#include "glowny.h"
#include <fstream>
#include "aktywnosc.h"

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

        cout <<"-------------------------"<<endl;
        cout <<"Wybierz opcje: "<<endl;
        cout <<"-------------------------"<<endl;
        cout <<"1. Otworz okno"<<endl;
        cout <<"-------------------------"<<endl;
        cout <<"2. Otworz garaz. "<<endl;
        cout <<"-------------------------"<<endl;
        cout <<"3. Otworz drzwi. "<<endl;
        cout <<"-------------------------"<<endl;
        cout <<"4. Cofnij. "<<endl;
        cout <<"-------------------------"<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cin>>wyborO;

        switch(wyborO)
            {
            case 1:
                {
                 system("cls");
                 Glowny g2;
                 g2.obsluga();
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
                        Glowny g2;
                        g2.obsluga();
                    }
            break;


            }


    system("cls");
    Glowny g1;
    g1.obsluga();
}



//void Aktywnosc::sprawdzaktywnosc()
//{

//}
