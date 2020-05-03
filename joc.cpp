#include <iostream>
#include <fstream>
#include "robot.h"
#include "joc.h"
#include "lume.h"
#include"capcane.h"
#include"comoara.h"
using namespace std;


//initializam lumea si plasam comoara si capcanele pe harta
Joc::Joc(){
	cout<<"Se creaza jocul";
	ifstream F("fisier.txt");
	int l, c;
	string tip;
	F >> l >> c;
	lume = new Lume(x,y);
	F >> tip;
	for(int i=1; i<=z; i++) {
		Robot::Pozitie p(0,0);
		Robot *r;
	}
}

ostream &operator <<(ostream &out,Lume &lume) {
	out <<endl <<" ";
	for(int i=0; i<2*lume.getNrColoane();i++)
		out << (char)196;
	out << endl;
	for(int i=0; i<lume.getNrRanduri(); i++) {
		out <<(char)179;
		for(int j=0; j<lume.getNrColoane(); j++)
			if(lume.getRobot(i,j)!=NULL)
				out << lume.getRobot(i,j)<<" ";
			else
				cout<<" "<<" ";
		out << (char)179;
		out << endl;
	}
	out <<" ";
	for(int i=0; i<2*lume.getNrColoane();i++)
		out << (char)196;
	return out;
}

void Joc::runRunda() {
	Robot::Pozitie p(0,0);
	unsigned i = 0;
    Robot *a;
    q = a->getPozitie();
    if(!lume->getRobot(p.randuri,p.coloane)) {
        lume->moveRobot(a,p.randuri,p.coloane);
        i++;
    }
}
	cout<<endl<<*lume;   //afisam harta
}



void Joc::printJoc() {
	cout << *lume;
}
