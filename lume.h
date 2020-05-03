#include <vector>
#include <string>

using namespace std;

#include "robot.h"
#include"comoara.h"
#include"capcana.h"

class Lume{
private:
	Robot ***harta;
	vector<Robot*>  robot;
	const int nrRanduri;
	const int nrColoane;
public:
	// Creeaza lume
	Lume(const int randuri, const int coloane);

	virtual ~Lume();

	int getNrRanduri() const;
	int getNrColoane() const;

	// Returneaza un vector cu capcanele in lume
	vector<Robot*> getCapcane() const;

	// Returneaza robotul in pozitia noua
	Robot* getRobot(const int randuri, const int coloane) const;

	// Misca robotul la o noua pozitie
	void moveRobot(
		Robot* const robot,
		const int newRand,
		const int newColoana);
};

