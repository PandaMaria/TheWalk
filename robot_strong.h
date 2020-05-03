#include"Lume.h"
#include"Robot.h"

//robotul puternic

class RobotStrong: public Robot{
    RobotStrong(const Pozitie &p) : Robot(p){}
	string get_robot_type()const{ return "@";}
};

