#include "task3.h"
#include <iostream>

using namespace std;

int main(){
    Sensor obj1;
    obj1.DistanceSensor(10);
    obj1.DistanceSensor("error");
    obj1.TemepartureSensor(20.6756);

    return 0;

}