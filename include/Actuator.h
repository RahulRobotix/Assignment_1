#ifndef ACTUATOR_H
#define ACTUATOR_H

#include <string>

class Actuator {
public:
    Actuator(std::string name);
    std::string getName();
protected:
    std::string name;
};

class ArmActuator : public Actuator {
public:
    ArmActuator(std::string name) : Actuator(name) {}
    void move(int angle);
};

class WheelActuator : public Actuator {
public:
    WheelActuator(std::string name) : Actuator(name) {}
    void rotate(int degrees);
};

#endif // ACTUATOR_H
