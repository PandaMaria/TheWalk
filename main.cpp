#include <iostream>
#include <time.h>

using namespace std;

#include "joc.h"
#include "world.h"

int main() {
    srand(time(NULL));
	Joc G;
	G.printJoc();  //afisam starea initiala
	int i,r=0;
	cout<<endl;
 	system("pause");
	do {
		r++;
		cout<<"\nRunda "<< r;
		G.runRunda();
		cout << "\nDoriti sa continuati? 0-DA/1-NU\n=>";
		cin >> i;
	}while(i == 0);
	cout << endl;
	return 0;
}
