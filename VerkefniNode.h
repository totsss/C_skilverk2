#pragma once
#include "verkefni.h"
using namespace std;
class VerkefniNode{
private:


public :
 	Verkefni verkefni_data;
 	VerkefniNode* next;
	inline	VerkefniNode(string lysing, bool skola_verkefni, int mikilvaegt) {
		verkefni_data = Verkefni( lysing,  skola_verkefni, mikilvaegt);
		this -> next = nullptr;
	}


};

