#include "VerkefnaListi.h"

VerkefnaListi::VerkefnaListi() {
    this->head = nullptr;
}

void VerkefnaListi::setjaILista(Verkefni x) {
    setjaILista(x.get_lysing(), x.get_skola_verkefni(), x.get_mikilvaegt());
}


void VerkefnaListi::setjaILista(string lysing, bool skola_verkefni, int mikilvaegt ) {
    if (this->head == nullptr) {
        this->head = new VerkefniNode(lysing, skola_verkefni, mikilvaegt);
    }
    else {
        VerkefniNode* nyttNode = new VerkefniNode(lysing, skola_verkefni, mikilvaegt);
        if (nyttNode->verkefni_data >= this->head-> verkefni_data) {
            nyttNode->next = this->head;
            this->head = nyttNode;
        }
        else {
            VerkefniNode* current = this->head;
            VerkefniNode* prev = this->head;
            while (current && current->verkefni_data > nyttNode->verkefni_data) {
                prev = current;
                current = current->next;
            }
            prev->next = nyttNode;
            nyttNode->next = current;
        }
        
    }

}





// falliğ skrifar listann út á skjá

void VerkefnaListi::prentaOllVerkefni() {
    VerkefniNode* current = this->head;
    while (current != nullptr) {
        cout << " 1 Verkefni : " << current->verkefni_data.get_lysing() << " , " << current->verkefni_data.get_skola_verkefni() << " , " << current->verkefni_data.get_mikilvaegt() << endl;
        current = current->next;
    }
}

void VerkefnaListi::prentaSkolaverkefni() {
    VerkefniNode* current = this->head;
    while (current != nullptr) {
        if (current->verkefni_data.get_mikilvaegt()) {
            cout << " 2 Verkefni : " << current->verkefni_data.get_lysing() << " , " << current->verkefni_data.get_skola_verkefni() << " , " << current->verkefni_data.get_mikilvaegt() << endl;

            
        }
        current = current->next;
    }
}


void VerkefnaListi::prentaEkkiSkolaverkefni() {
    VerkefniNode* current = this->head;
    while (current != nullptr) {
        if (!current->verkefni_data.get_mikilvaegt()) {
            cout << " 3 Verkefni : " << current->verkefni_data.get_lysing()<<" , " << current->verkefni_data.get_skola_verkefni() <<" , " << current->verkefni_data.get_mikilvaegt() << endl;
           
        }
        current = current->next;
    }
    
}


void VerkefnaListi::faNaestaVerkefni() {
    // VerkefniNode* nytt = this->head->next;
    // delete this->head;
    // this->head = nytt;


}