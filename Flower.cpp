//
// Created by hloi on 11/7/2023.
//



#include "Flower.h"
#include <iostream>

void Flower::SetPlantType(bool userIsAnnual) {
    isAnnual = userIsAnnual;
}

bool Flower::GetPlantType() const {
    return isAnnual;
}

void Flower::SetColorOfFlowers(string userColorOfFlowers) {
    colorOfFlowers = userColorOfFlowers;
}

string Flower::GetColorOfFlowers() const {
    return colorOfFlowers;
}

void Flower::PrintInfo(ostream& out) const {
    out << "   Plant name: " << plantName << endl;
    out << "   Cost: " << plantCost << endl;
    out << "   Annual: " << boolalpha << isAnnual << endl;
    out << "   Color of flowers: " << colorOfFlowers << endl;
}

Flower::Flower(string name, int cost, string color, bool isAnnual) {
    this->plantName = name;
    this->plantCost = cost;
    this->colorOfFlowers = color;
    this->isAnnual = isAnnual;
}

ostream &operator<<(ostream &out, Flower& flower) {
    flower.PrintInfo(out);
    return out;
}
