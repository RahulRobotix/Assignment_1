#include <iostream>

using namespace std;

namespace kuka{
class Robot{
        public:
            string name;
            float speed;
            float weight;
            int size;
            int no_of_sensors;
            void moveForward();
            void moveBackward();
            void stop();
        };

void Robot::moveForward(){
    cout<<"Simuate the kuka robot moving forward"<<endl;
}

void Robot::moveBackward(){
    cout<<"Simuate the kuka robot moving backward"<<endl;
}
void Robot::stop(){
    cout<<"Simulate stopping the kuka robot"<<endl;
}
}

namespace Turtle_bot{
class Robot{
        public:
            string name;
            float speed;
            float weight;
            int size;
            int no_of_sensors;
            void moveForward();
            void moveBackward();
            void stop();
        };

void Robot::moveForward(){
    cout<<"Simuate the Turte_bot robot moving forward"<<endl;
}

void Robot::moveBackward(){
    cout<<"Simuate the Turtle_bot robot moving backward"<<endl;
}
void Robot::stop(){
    cout<<"Simulate stopping the Turte_bot robot"<<endl;
}
}



int main(){
    kuka::Robot obj1;
    obj1.moveForward();
    obj1.moveBackward();
    obj1.stop();
    Turtle_bot::Robot obj2;
    obj2.moveForward();
    obj2.moveBackward();
    obj2.stop();
}