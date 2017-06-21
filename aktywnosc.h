#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

class Aktywnosc
{
    private:
        string otwarte, zamkniete;

    public:
        Aktywnosc();
        virtual ~Aktywnosc();

        void wyboropcji();
        void OZgaraz(); //otworz zamknij garaz
        void OZokno();  //otworz zamknij okno
        void OZdrzwi(); //otworz zamknij drzwi
};
