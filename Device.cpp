//
// Created by vboxuser on 27/2/26.
//

#include "Device.h"

Device::Device(const string & name) {
    this->name = name;
}

string Device::getName() const {
    return name;
}