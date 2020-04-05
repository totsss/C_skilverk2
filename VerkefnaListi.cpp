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

// falli� ey�ir staki me� id �r listanum
void VerkefnaListi::eydaUrLista(string lysing) {
    if (!this->erILista(lysing)) return;
    if (this->head->verkefni_data.get_lysing() == lysing) {
        // TODO
    }
    else {
        // TODO 
    }
}

// falli� skilar true ef stak me� id er � listanum annars false
bool VerkefnaListi::erILista(string lysing) {
    // TODO
}

// falli� skrifar listann �t � skj�
void VerkefnaListi::prentaLista() {
    // TODO
}

// destructorinn ey�ir �llum Node-unum �r listanum
VerkefnaListi::~VerkefnaListi() {
    // TODO
}