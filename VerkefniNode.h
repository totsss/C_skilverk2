#pragma once
#include "verkefni.h"
using namespace std;
class VerkefniNode{
private:
	Verkefni verkefni_data;
	VerkefniNode* next;

public :
	VerkefniNode(string lysing, bool skola_verkefni, int mikilvaegt) {
		verkefni_data = Verkefni( lysing,  skola_verkefni, mikilvaegt);
		this -> next = nullptr;
	}
};

