#include <iostream>
#include "robot.h"
#include"lume.h"
using namespace std;

void Comoara::setPozitieComoara(const PozitieComoara& newPozitie) {
	max=19;
	pozitie.rand = rand()%max;
	pozitie.coloana = rand()%max;
}

Comoara::PozitieComoara Comoara::getPozitieComoara()const {
	return pozitie;
}
