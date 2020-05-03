#include"robot.h"
#include "lume.h"
#include <string>

using namespace std;

class Joc{
   Lume *lume;
public :
	Joc();
	void runRunda();
	void printJoc();
	~Joc(){delete lume;}

};
