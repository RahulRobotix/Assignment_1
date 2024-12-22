#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include "Actuator.h"

class Robot {
public:
    Robot(std::string name, double speed);
    void activateActuator(Actuator &actuator);
    void deactivateActuator(Actuator &actuator);

private:
    std::string name;
    double speed;
};

#endif // ROBOT_H
