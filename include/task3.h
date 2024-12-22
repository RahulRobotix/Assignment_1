#ifndef TASK3_H
#define TASK3_H

#include <iostream>
using namespace std;

class Sensor {
public:
    // Template function for DistanceSensor (single argument)
    template <typename U>
    void DistanceSensor(U distance) {
        cout << "The distance reading is: " << distance << endl;
    }

    // Template function for TemepartureSensor (single argument)
    template <typename T>
    void TemepartureSensor(T temperature) {
        cout << "The temperature reading is: " << temperature << endl;
    }
};

#endif // TASK3_H
