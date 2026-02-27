//
// Created by vboxuser on 24/2/26.
//
#include "Device.h"
#include "Display.h"
#include "Processor.h"
#include <iostream>
using namespace std;

int main() {
    Display d1("Smartphone");
    cout << "Device Name: " << d1.getName() << endl;
    d1.process("Hello, World!");
    Processor p1("CPU_1");
    p1.connectTo(d1);
    p1.process("Hello, World!");
    return 0;
}