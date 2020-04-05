#include "VerkefnaListi.h"

VerkefnaListi::VerkefnaListi() {
    this->head = nullptr;
}

void VerkefnaListi::setjaILista(string lysing, bool skola_verkefni, int mikilvaegt ) {
    if (this->head == nullptr) {
        this->head = new VerkefniNode(lysing, skola_verkefni, mikilvaegt);
    }
    else {
        VerkefniNode* nyttNode = new VerkefniNode(lysing, skola_verkefni, mikilvaegt);
        if (nyttNode->verkefni_ < this->head -> verkefni_data) {
            nyttNode->next = this->head;
            this->head = nyttNode;
        }
        
    }
}





// fallið skrifar listann út á skjá

void VerkefnaListi::prentaOllverkefni() {
    
    cout << "Oll verkefni : " << endl;
}

void VerkefnaListi::prentaSkolaverkefni() {
    cout << "skolaverkefni : " << endl;
}


void VerkefnaListi::prentaEkkiSkolaverkefni() {
    cout << "Verkefni onnur en skolaverkefni : " << endl;
}


VerkefnaListi::~VerkefnaListi() {
    
}
