//
// Created by vboxuser on 27/2/26.
//

#include "Display.h"
#include <iostream>
using namespace std;

Display::Display(const string &name) : Device(name) {
    data="";
}

void Display::process(const string& d) {
    data = d;
    cout << "Processing data on " << name << ": " << data << endl;
}