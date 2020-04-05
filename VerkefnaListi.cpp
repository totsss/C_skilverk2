#include "VerkefnaListi.h"

VerkefnaListi::VerkefnaListi() {
    this->head = nullptr;
}

void VerkefnaListi::setjaILista(string lysing, bool skola_verkefni, int mikilvaegt ) {
    if (this->erILista(lysing)) return;
    if (this->head == nullptr) {
        this->head = new VerkefniNode(lysing, skola_verkefni, mikilvaegt);
    }
    else {
        VerkefniNode* nyttNode = new VerkefniNode(lysing, skola_verkefni, mikilvaegt);
        if (nyttNode->verkefni_data < this->head -> verkefni_data) {
            nyttNode->next = this->head;
            this->head = nyttNode;
        }
        else {
            VerkefniNode* current = this->head;
            VerkefniNode* prev = this->head;
            while (current && current->verkefni_data.get_lysing() < lysing) {
                prev = current;
                current = current->next;
            }
            prev->next = nyttNode;
            nyttNode->next = current;
        }
    }
}

// fallið eyðir staki með id úr listanum
void VerkefnaListi::eydaUrLista(string lysing) {
    if (!this->erILista(lysing)) return;
    if (this->head->verkefni_data.get_lysing() == lysing) {
        // TODO
    }
    else {
        // TODO 
    }
}

// fallið skilar true ef stak með id er í listanum annars false
bool VerkefnaListi::erILista(string lysing) {
    // TODO
}

// fallið skrifar listann út á skjá
void VerkefnaListi::prentaLista() {
    // TODO
}

// destructorinn eyðir öllum Node-unum úr listanum
VerkefnaListi::~VerkefnaListi() {
    // TODO
}