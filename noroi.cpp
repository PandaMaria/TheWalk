#include<iostream>
#include"leu.h"
#include"capcana.h"
using namespace std;

void Capcana::setPozitieNoroi(const PozitieCapcana& newPozitie) {
	max=19;
	pozitie.rand = rand()%max;;
	pozitie.coloana = rand()%max;;
}
Capcana::PozitieCapcana Capcana::getPozitieCapcana()const {
	return pozitie;
}
