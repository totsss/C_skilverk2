#pragma once
#include <iostream>
#include <string>
using namespace std;

class Verkefni {
private:
	string lysing;
	bool skola_verkefni;
	int mikilvaegt;

public:
	Verkefni();
	Verkefni(string lysing_pub, bool skola_verkefni_pub, int mikilvaegt_pub);

	string get_lysing();
	void set_lysing(string lysing_pub);
		
	

	bool get_skola_verkefni() ;
	void set_skola_verkefni(bool skola_verkefni_pub);
	

	int get_mikilvaegt();
	void set_mikilvaegt(int mikilvaegt_pub);

	bool operator<(Verkefni& other);
	bool operator>(Verkefni& other);
	bool operator<=(Verkefni& other);
	bool operator>=(Verkefni& other);

	bool operator==(Verkefni& other);
	bool operator!=(Verkefni& other);
};


