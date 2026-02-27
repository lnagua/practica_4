//
// Created by vboxuser on 24/2/26.
//
#include "Device.h"
#include "Display.h"
#include <iostream>
using namespace std;

int main() {
    Display d1("Smartphone");
    cout << "Device Name: " << d1.getName() << endl;
    d1.process("Hello, World!");
    return 0;
}