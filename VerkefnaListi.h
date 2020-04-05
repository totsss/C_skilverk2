#pragma once
#include "VerkefniNode.h"

class VerkefnaListi {
private:
    VerkefniNode* head;

public:

    void setjaILista(string lysing, bool skola_verkefni, int mikilvaegt);

    void eydaUrLista(string lysing);

    bool erILista(string lysing);

    void prentaLista();

    ~VerkefnaListi();


};