#include<iostream>
#include"capcane.h"
using namespace std;

void Capcana::setPozitieZid(const PozitieCapcana& newPozitie) {
	max=19;
	pozitie.rand = rand()%max;;
	pozitie.coloana = rand()%max;;
}

Capcana::PozitieCapcana Capcana::getPozitieCapcana()const {
	return pozitie;
}



