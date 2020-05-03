#include <iostream>

using namespace std;

#include "lume.h"
#include "robot.h"

Lume::Lume(const int randuri, const int coloane):nrRanduri(randuri),nrColoane(coloane){
	harta = new Robot**[randuri];
	for(int i=0; i<=randuri ;i++)
		harta[i] = new Robot*[coloane];
	for(int i=0;i<randuri;i++)
		for(int j=0;j<coloane;j++)
			harta[i][j]=NULL;
}

int Lume::getNrRanduri() const {
	return nrRanduri;
}

int Lume::getNrColoane() const {
	return nrColoane;
}

Robot* Lume::getRobot(const int rand,const int coloana) const{
	return harta[rand][coloana];
}

void  Lume::moveRobot( Robot* const robot, const int newRand, const int newColoana) {
	Robot::Pozitie p(newRand,newColoana),
	q = robot->getPozitie();
	harta[q.rand][q.coloana] = NULL;
	robot->setPozitie(p);
	harta[p.rand][p.coloana] = robot;


	int i=robot.rand, j=robot.coloana;
	for(int k=i-2;k<=i+2;k++)
        for(int t=j-2;t<=j+2;t++)
            if(harta[k][t]==PozitieComoara.pozitie)
            {
                if(i<k)
                    i=i+1;
                else
                if(i>k)
                    i=i-1;
                else
                if(j<t)
                    j=j+1;
                else
                    j=j-1;
                p.rand=i;
                p.coloana=j;
                robot->setPozitie(p);
            }
        if(harta[i+1][j+1]==PozitieCapcana.pozitie)
            if(Capcana.get_capcana_type=="y")
            {   i=i+1;
                j=j+1;
                p.rand=i;
                p.coloana=j;
                robot->setPozitie(p);
            }
            else
                if(Capcana.get_capcana_type=="z")
                    if(Robot.get_robot_type=="#")
                    {
                        i=i+1;
                        j=j+1;
                        p.rand=i;
                        p.coloana=j;
                        robot->setPozitie(p);
                    }
            else
                if(Capcana.get_capcana_type=="x")
                    if(Robot.get_robot_type=="@")
                     {  i=i+1;
                        j=j+1;
                        p.rand=i;
                        p.coloana=j;
                        robot->setPozitie(p);
                     }
                else
                if(harta[i][j+1]==PozitieCapcana.pozitie)
                    if(Capcana.get_capcana_type=="y")
                    {
                        j=j+1;
                        p.rand=i;
                        p.coloana=j;
                        robot->setPozitie(p);
                    }
                    else
                        if(Capcana.get_capcana_type=="z")
                            if(Robot.get_robot_type=="#")
                            {
                                j=j+1;
                                p.rand=i;
                                p.coloana=j;
                                robot->setPozitie(p);
                            }
                    else
                        if(Capcana.get_capcana_type=="x")
                            if(Robot.get_robot_type=="@")
                             {
                                j=j+1;
                                p.rand=i;
                                p.coloana=j;
                                robot->setPozitie(p);
                             }
                else
                    if(harta[i+1][j]==PozitieCapcana.pozitie)
                        if(Capcana.get_capcana_type=="y")
                        {   i=i+1;
                            p.rand=i;
                            p.coloana=j;
                            robot->setPozitie(p);
                        }
                        else
                            if(Capcana.get_capcana_type=="z")
                                if(Robot.get_robot_type=="#")
                                {
                                    i=i+1;
                                    p.rand=i;
                                    p.coloana=j;
                                    robot->setPozitie(p);
                                }
                        else
                            if(Capcana.get_capcana_type=="x")
                                if(Robot.get_robot_type=="@")
                                 {  i=i+1;
                                    p.rand=i;
                                    p.coloana=j;
                                    robot->setPozitie(p);
                                 }

}
