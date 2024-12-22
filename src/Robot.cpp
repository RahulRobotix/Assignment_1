#include "Robot.h"
#include <iostream>

Robot::Robot(std::string name, double speed)
    : name(name), speed(speed) {}

void Robot::activateActuator(Actuator &actuator) {
    std::cout << "Activating actuator for " << actuator.getName()<< "." << std::endl;
}

void Robot::deactivateActuator(Actuator &actuator) {
    std::cout << "Deactivating actuator for " << actuator.getName() << "." << std::endl;
}
