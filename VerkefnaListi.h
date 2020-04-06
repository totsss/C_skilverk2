#pragma once
#include "VerkefniNode.h"

class VerkefnaListi {
private:
    VerkefniNode* head;

public:
    
    VerkefnaListi();
    void setjaILista(Verkefni x);

    void setjaILista(string lysing, bool skola_verkefni, int mikilvaegt);

    void prentaOllVerkefni();

    void prentaSkolaverkefni();

    void prentaEkkiSkolaverkefni();
     
    void faNaestaVerkefni();
    

};