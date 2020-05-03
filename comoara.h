#include <string>
using namespace std;
#include"lume.h"

class Comoara{
public:
	// pozitia comorii
	struct PozitieComoara{
		int rand;
		int coloana;

		PozitieComoara(const int r, const int c){
			rand = r;
			coloana = c;
		}

		bool operator==(const PozitieComoara &p) {
			if(p.rand==rand && p.coloana==coloana)
				return true;
			return false;
		}
	};
public:
	// Creeaza comoara
	Comoara(PozitieComoara c) : pozitie(c) {};

	virtual ~Comoara() {};
	PozitieComoara getPozitieComoara() const;
};
