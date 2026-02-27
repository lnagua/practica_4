//
// Created by vboxuser on 27/2/26.
//

#ifndef PRACTICA_DEVICE_H
#define PRACTICA_DEVICE_H
#include <string>
using namespace std;

class Device {
public:
    Device(const string& name);
    string getName() const;
    
protected:
    string name;
};

#endif //PRACTICA_DEVICE_H>