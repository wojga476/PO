#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "administrator.h"
#include "uzytkownik.h"
#include "glowny.h"
#include "aktywnosc.h"
#include <fstream>

using namespace std;

Uzytkownik::Uzytkownik()
{
}
Uzytkownik::~Uzytkownik()
{
}

void Uzytkownik::dodajgosci()
{
    cout <<"                ---------------------------------------"<<endl;
    cout <<"                Podaj imie nowego goscia: " << endl;
    cin >> imieG;
    cout <<"                ---------------------------------------"<<endl;
    cout <<"                Podaj nazwisko nowego goscia: " << endl;
    cin >> nazwiskoG;
    cout <<"                ---------------------------------------"<<endl;

    fstream plik;
    plik.open("goscie.txt", ios::out | ios::app);
    plik<<imieG<<endl;
    plik<<nazwiskoG<<endl;
    plik.close();

}

void Uzytkownik::dodajmieszkanca()
{
    cout <<"                ---------------------------------------"<<endl;
    cout <<"                Podaj imie nowego mieszkanca: " << endl;
    cin >> imieM;
    cout <<"                ---------------------------------------"<<endl;
    cout <<"                Podaj nazwisko nowego mieszkanca: " << endl;
    cin >> nazwiskoM;
    cout <<"                ---------------------------------------"<<endl;
    cout <<"                Podaj wage nowego mieszkanca: " << endl;
    cin >> waga;
    cout <<"                ---------------------------------------"<<endl;
    cout <<"                Podaj wzrost nowego mieszkanca: " << endl;
    cin >> wzrost;
    cout <<"                ---------------------------------------"<<endl;

    fstream plik2;
    plik2.open("mieszkaniec.txt", ios::out | ios::app);
    plik2<<imieM<<endl;
    plik2<<nazwiskoM<<endl;
    plik2<<waga<<endl;
    plik2<<wzrost<<endl;
    plik2.close();

}


void Uzytkownik::logowanieU()
{
    system("cls");

    int wyborU;
  //  cout <<"-------------------------"<<endl;
   // cout<< "Podaj haslo: " <<endl;
   // cin >>hasloU;
   // cout <<"-------------------------"<<endl;
   // if(hasloU=="git")
        //{
            system("cls");

            cout <<"                -------------------------------------"<<endl;
            cout <<"                Wybierz ustawienia uzytkownika: "<<endl;
            cout <<"                -------------------------------------"<<endl;
            cout <<" "<<endl;
            cout <<" "<<endl;
            cout <<"                -------------------------------------"<<endl;
            cout <<"                Dodaj nowego goscia (wybierz 1)"<<endl;
            cout <<"                -------------------------------------"<<endl;
            cout <<"                Dodaj nowego mieszkanca (wybierz 2) "<<endl;
            cout <<"                -------------------------------------"<<endl;
            cout <<"                Czynnosci domowe (wybierz 3)"<<endl;
            cout <<"                -------------------------------------"<<endl;
            cout <<"                Cofnij (wybierz 4)"<<endl;
            cout <<"                -------------------------------------"<<endl;
            cout << " " << endl;
            cout << " " << endl;
            cout <<"                -------------------------------------" << endl;
            cout <<"                Wybierz opcje: " << endl;
            cin>>wyborU;
            switch(wyborU)
            {
            case 1:
                {
                 system("cls");
                 Uzytkownik u1;
                 u1.dodajgosci();
                 Uzytkownik g3;
                 g3.logowanieU();
                }
                break;
            case 2:
                {
                    system("cls");
                    Uzytkownik u2;
                    u2.dodajmieszkanca();
                    Uzytkownik g3;
                    g3.logowanieU();
                }
                break;

            case 3:
                    {
                    system("cls");
                    Aktywnosc a1;
                    a1.wyboropcji();

                    }
            break;

            case 4:
                    {
                        system("cls");
                        Glowny g1;
                        g1.obsluga();
                    }
            break;


            }

        //}
//    else {cout << "Zle haslo." << endl;}
    system("cls");
    Glowny g1;
    g1.obsluga();
}
