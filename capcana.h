#include <string>
using namespace std;
#include"lume.h"

class Lume;

class Capcana{

public:
	// pozitia unei capcane
	struct PozitieCapcana{
		int rand;
		int coloana;
		PozitieCapcana(const int r, const int c){
			rand = r;
			coloana = c;
		}
	};

public:
	Capcana(Pozitie p) : pozitie(p) {};

    virtual string get_capcana_type()

	virtual ~Capcana() {};

	// Permite clasa Lume sa acceseze metoda set_position
	friend class Lume;
};
