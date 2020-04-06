#include <iostream>

using namespace std;

#include "VerkefnaListi.h"

int main() {
    Verkefni v1("Labba me� hundinn", false, 5);
    Verkefni v2("Ritger� � �slensku", true, 3);
    cout << (v1 < v2) << endl; // �tti a� skrifa �t 1
    Verkefni v3("Forritunarverkefni", true, 5);
    cout << (v3 > v2) << endl; // �tti a� skrifa �t 1
    cout << (v1 >= v3) << endl; // �tti a� skrifa �t 0
    cout << endl;

    VerkefnaListi verk;
    verk.setjaILista(v1);
    verk.setjaILista(v3);
    verk.setjaILista(v2);
    verk.prentaOllVerkefni(); // �tti a� skrifa �t
        // Verkefni: Forritunarverkefni, sk�laverkefni: J�, mikilv�gi: 5
        // Verkefni: Ritger� � �slensku, sk�laverkefni: J�, mikilv�gi: 3
        // Verkefni: Labba me� hundinn, sk�laverkefni: Nei, mikilv�gi: 5 
    cout << endl;

    verk.faNaestaVerkefni(); // �tti a� skrifa �t:
        // Verkefni: Forritunarverkefni, sk�laverkefni: J�, mikilv�gi: 5
    verk.faNaestaVerkefni(); // �tti a� skrifa �t:
        // Verkefni: Ritger� � �slensku, sk�laverkefni: J�, mikilv�gi: 3
    cout << endl;

    verk.setjaILista("Fara �t me� rusli�", false, 6);
    verk.setjaILista("Bor�a", false, 6);
    verk.setjaILista("Gefa kettinum a� bor�a", false, 5);
    verk.prentaOllVerkefni(); // �tti a� skrifa �t:
        // Verkefni: Fara �t me� rusli�, sk�laverkefni: Nei, mikilv�gi: 6
        // Verkefni: Bor�a, sk�laverkefni: Nei, mikilv�gi: 6
        // Verkefni: Labba me� hundinn, sk�laverkefni: Nei, mikilv�gi: 5
        // Verkefni: Gefa kettinum a� bor�a, sk�laverkefni: Nei, mikilv�gi: 5       
    cout << endl;

    verk.setjaILista("Gera sm� HTML", true, 8);
    verk.setjaILista("Reikna slatta", true, 7);
    verk.setjaILista("Gera sm� c++", true, 9);
    verk.prentaOllVerkefni(); // �tti a� skrifa �t:
        // Verkefni: Gera sm� c++, sk�laverkefni: J�, mikilv�gi: 9
        // Verkefni: Gera sm� HTML, sk�laverkefni: J�, mikilv�gi: 8
        // Verkefni: Reikna slatta, sk�laverkefni: J�, mikilv�gi: 7
        // Verkefni: Fara �t me� rusli�, sk�laverkefni: Nei, mikilv�gi: 6
        // Verkefni: Bor�a, sk�laverkefni: Nei, mikilv�gi: 6
        // Verkefni: Labba me� hundinn, sk�laverkefni: Nei, mikilv�gi: 5
        // Verkefni: Gefa kettinum a� bor�a, sk�laverkefni: Nei, mikilv�gi: 5
    cout << endl;

    verk.prentaSkolaverkefni(); // �tti a� skrifa �t:
        // Verkefni: Gera sm� c++, sk�laverkefni: J�, mikilv�gi: 9
        // Verkefni: Gera sm� HTML, sk�laverkefni: J�, mikilv�gi: 8
        // Verkefni: Reikna slatta, sk�laverkefni: J�, mikilv�gi: 7
    cout << endl;

    verk.prentaEkkiSkolaverkefni(); // �tti a� skrifa �t:
        // Verkefni: Fara �t me� rusli�, sk�laverkefni: Nei, mikilv�gi: 6
        // Verkefni: Bor�a, sk�laverkefni: Nei, mikilv�gi: 6
        // Verkefni: Labba me� hundinn, sk�laverkefni: Nei, mikilv�gi: 5
        // Verkefni: Gefa kettinum a� bor�a, sk�laverkefni: Nei, mikilv�gi: 5

    return 0;
    
}