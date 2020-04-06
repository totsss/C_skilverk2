#include "verkefni.h"

void Verkefni::set_mikilvaegt(int mikilvaegt_pub) {
	this->mikilvaegt = mikilvaegt_pub;
}

void Verkefni::set_skola_verkefni(bool skola_verkefni_pub) {
	this-> skola_verkefni = skola_verkefni_pub;
};

void Verkefni::set_lysing(string lysing_pub) {
	this->lysing = lysing_pub;
};

Verkefni::Verkefni()
{
	this->lysing = "";
	this->skola_verkefni = false;
	this->mikilvaegt = 0;
}

Verkefni::Verkefni(string lysing_pub, bool skola_verkefni_pub, int mikilvaegt_pub)
{
	this->lysing = lysing_pub;
	this->skola_verkefni = skola_verkefni_pub;
	this->mikilvaegt = mikilvaegt_pub;
}

string Verkefni::get_lysing() {
	return this->lysing;
}

bool Verkefni::get_skola_verkefni() {
	return this -> skola_verkefni;
}

int Verkefni::get_mikilvaegt() {
	return this->mikilvaegt;
}




//Opertors -----------------------------------------------------------------------------------------------------------------
bool Verkefni::operator<(Verkefni& other) {
	if (!this->skola_verkefni) {
		return true;
	}
	if (this->skola_verkefni) {
		return other.mikilvaegt > this->mikilvaegt;
	}
	else
	{
		return false;
	}
}



bool Verkefni::operator>(Verkefni& other) {
	if (this->skola_verkefni) {

		if (!other.skola_verkefni) {
			return true;
		}
		if (other.skola_verkefni) {
			return mikilvaegt > other.mikilvaegt;
		}
	}
	else
	{
		return false;
	}
}



bool Verkefni::operator<=(Verkefni& other) {
	if (!this->skola_verkefni) {
		return true;
	}
	if (this->skola_verkefni = other.skola_verkefni) {
		return true;
	}
	if (this->skola_verkefni) {
		return other.mikilvaegt > this->mikilvaegt;
	}
	else
	{
		return false;
	}
}



bool Verkefni::operator>=(Verkefni& other) {
	if(this->skola_verkefni) {

		if (!other.skola_verkefni) {
			return true;
		}
		if (this->skola_verkefni = other.skola_verkefni) {
			return true;
		}
		if (other.skola_verkefni) {
			return mikilvaegt > other.mikilvaegt;
		}
	}
	else
	{
		return false;
	}

}

bool Verkefni::operator==(Verkefni& other) {
	if (this->skola_verkefni) {
		if (other.skola_verkefni)
		{
			return mikilvaegt == other.mikilvaegt;
		}
	}
	else { return false; }
}


bool Verkefni::operator!=(Verkefni& other){
	if (this->skola_verkefni != other.skola_verkefni) {
		return true;
	}
	else
	{
		return false;
	}

}

