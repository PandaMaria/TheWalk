#include"Lume.h"
#include"Robot.h"

//robotul curajos

class RobotBrave: public Robot{
    RobotBrave(const Pozitie &p) : Robot(p){}
	string get_robot_type()const{ return "#";}
};
