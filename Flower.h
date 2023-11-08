//
// Created by hloi on 11/7/2023.
//

#ifndef CH10PLANTEXAMPLE_FLOWER_H
#define CH10PLANTEXAMPLE_FLOWER_H




#include "Plant.h"
#include <string>
using namespace std;

class Flower : public Plant {
public:

    Flower() {}
    Flower(string name, int cost, string color, bool isAnnual);

    void SetPlantType(bool userIsAnnual);

    bool GetPlantType() const;

    void SetColorOfFlowers(string userColorOfFlowers);

    string GetColorOfFlowers() const;

    void PrintInfo(ostream& out) const;

    friend ostream& operator<<(ostream& out, Flower& flower);

private:
    bool isAnnual;
    string colorOfFlowers;
};


#endif //CH10PLANTEXAMPLE_FLOWER_H
