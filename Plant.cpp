//
// Created by hloi on 11/7/2023.
//


#include "Plant.h"
#include <iostream>

using std::cout;
using std::endl;

Plant::~Plant() {}

void Plant::SetPlantName(string userPlantName) {
    plantName = userPlantName;
}

string Plant::GetPlantName() const {
    return plantName;
}

void Plant::SetPlantCost(int userPlantCost) {
    plantCost = userPlantCost;
}

int Plant::GetPlantCost() const {
    return plantCost;
}

void Plant::PrintInfo() const {
    cout << "   Plant name: " << plantName << endl;
    cout << "   Cost: " << plantCost << endl;
}

Plant::Plant(string name, int cost) {
    this->plantName = name;
    this->plantCost = cost;
}

bool Plant::operator==(Plant &other) {
    return this->plantName == other.plantName;
}

ostream &operator<<(ostream &out, Plant* plant) {
    out << "   Plant name: " << plant->plantName << endl;
    out << "   Cost: " << plant->plantCost << endl;

    return out;
}
