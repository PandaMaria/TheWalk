#include <iostream>

using namespace std;
#include "robot.h"

void Robot::setPozitie(const Pozitie& newPozitie) {
	pozitie.rand = newPozitie.rand;
	pozitie.coloana = newPozitie.coloana;
}

Robot::Pozitie Robot::getPozitie()const {
	return pozitie;
}
