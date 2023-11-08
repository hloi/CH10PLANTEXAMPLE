//
// Created by hloi on 11/7/2023.
//

#include "Garden.h"
#include <stdexcept>
#include <iostream>

using std::runtime_error;
using std::cout;

void Garden::Add(Plant *aPlant) {
    myGarden.push_back(aPlant);
}

void Garden::PrintInfo() {
    for (size_t i=0; i<myGarden.size(); i++) {
        cout << *myGarden.at(i);
    }
}

int Garden::Find(Plant *aPlant) {
    for (size_t i=0; i<myGarden.size(); i++) {
        if (*myGarden.at(i) == *aPlant) {
            return i;
        }
    }
    return -1;
}

void Garden::Remove(Plant *aPlant) {
    int pos = Find(aPlant);
    if (pos != -1) {
        myGarden.erase(myGarden.begin()+pos);
    }
    else {
        throw runtime_error("Plant not found.");
    }
}

Garden::~Garden() {
    for (size_t i=0; i<myGarden.size(); i++) {
        delete myGarden.at(i);
    }
}

ostream &operator<<(ostream &out, Garden &garden) {
    for (size_t i=0; i<garden.myGarden.size(); i++)
    {
        out << *garden.myGarden.at(i);
    }
    return out;
}
