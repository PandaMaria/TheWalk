
#include<iostream>
#include"capcana.h"
using namespace std;

void Capcana::setPozitieCapcana(const Pozitie& newPozitie) {
	max=19;
	pozitie.rand = rand()%max;;
	pozitie.coloana = rand()%max;;
}
Capcana::PozitieCapcana Capcana::getPozitieCapcana()const {
	return pozitie;
}
