#include"Lume.h"
#include"Robot.h"

//robotul naiv

class RobotNaiv: public Robot{
    RobotNaiv(const Pozitie &p) : Robot(p){}
	string get_robot_type()const{ return "$";}
};

