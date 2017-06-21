#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "administrator.h"
#include "uzytkownik.h"
#include "glowny.h"
#include "aktywnosc.h"

using namespace std;

int main()
{
    Glowny g1;
    g1.obsluga();

    Administrator g2;
    g2.logowanieA();

    Uzytkownik g3;
    g3.logowanieU();

    Aktywnosc a1;
    a1.wyboropcji();

    return 0;
}
