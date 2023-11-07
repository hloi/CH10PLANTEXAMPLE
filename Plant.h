//
// Created by hloi on 11/7/2023.
//

#ifndef CH10PLANTEXAMPLE_PLANT_H
#define CH10PLANTEXAMPLE_PLANT_H




#include <string>
using std::string;
using std::ostream;


class Plant {
public:

    Plant() {}
    Plant(string name, int cost);

    virtual ~Plant();

    void SetPlantName(string userPlantName);

    string GetPlantName() const;

    void SetPlantCost(int userPlantCost);

    int GetPlantCost() const;

    virtual void PrintInfo() const;

    virtual bool operator==(Plant& other);

    friend ostream& operator<<(ostream& out, Plant* plant);


protected:
    string plantName;
    int plantCost;
};



#endif //CH10PLANTEXAMPLE_PLANT_H
