//
// Created by vboxuser on 27/2/26.
//

#ifndef PRACTICA_DISPLAY_H
#define PRACTICA_DISPLAY_H
#include <string>
#include "Device.h"
using namespace std;

class Display: public Device {
public:
    Display(const string& name);
    void process(const string& data);
protected:
    string data;
};


#endif //PRACTICA_DISPLAY_H