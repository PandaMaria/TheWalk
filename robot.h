
#include <string>

using namespace std;

class Robot{
public:
	// pozitia unui robot
	struct Pozitie{
		int rand;
		int coloana;

		Pozitie(const int r, const int c){
			rand = r;
			coloana = c;
		}

		bool operator==(const Pozitie &p) {
			if(p.rand==rand && p.coloana==coloana)
				return true;
			return false;
		}
	};

protected:
	// Schimba pozitia robotului
	void setPozitie(const Pozitie& newPozitie);
	struct Pozitie pozitie;
public:
	// Creeaza robotul
	Robot(Pozitie p) : pozitie(p) {};

	virtual ~Robot() {};

	// Returneaza un string care identifica tipul robotului
	virtual string get_robot_type();

	// returneaza pozitia curenta a robotului
	Pozitie getPozitie() const;

	// Permite clasa Lume sa acceseze metoda set_position
	friend class Lume;
};
