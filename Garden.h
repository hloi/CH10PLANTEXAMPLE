//
// Created by hloi on 11/7/2023.
//

#ifndef CH10PLANTEXAMPLE_GARDEN_H
#define CH10PLANTEXAMPLE_GARDEN_H
#include <vector>
#include "Plant.h"
using std::vector;


class Garden {
public:
    Garden() {}
    virtual ~Garden();
    void Add(Plant* aPlant);
    void Remove(Plant* aPlant);
    void PrintInfo();
    int Find(Plant* aPlant);

    friend ostream& operator<<(ostream& out, Garden& garden);

private:
    vector<Plant*> myGarden;
};


#endif //CH10PLANTEXAMPLE_GARDEN_H
