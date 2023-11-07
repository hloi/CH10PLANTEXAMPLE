

#include "Plant.h"
#include "Flower.h"
#include "Garden.h"
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints an vector of plant (or flower) object pointers

int main() {
    // TODO: Declare a vector called myGarden that can hold object of type plant pointer

    // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
    //       colorOfFlowers, isAnnual
//    string input;
//
//    cin >> input;
//
//    while(input != "-1") {
//        // TODO: Check if input is a plant or flower
//        //       Store as a plant object or flower object
//        //       Add to the vector myGarden
//        cin >> input;
//    }
//
//    // TODO: Call the method PrintVector to print myGarden
//
//    for (size_t i = 0; i < myGarden.size(); ++i) {
//        delete myGarden.at(i);
//    }

    // create a plant
    Plant* plant1 = new Plant("rose", 100);
    Flower* flower1 = new Flower("tulip", 10, "yellow", true);

    Garden g1;
    g1.Add(plant1);
    g1.Add(flower1);

    g1.PrintInfo();

    int pos = g1.Find(plant1);
    cout << pos << endl;
    pos = g1.Find(flower1);
    cout << pos << endl;

    cout << "my garden: " << endl;
    cout << g1;

//    try {
//        g1.Remove(plant1);
//    }
//    catch (runtime_error& e) {
//        cout << e.what() << endl;
//    }
//
//    try {
//        g1.Remove(plant1);
//    }
//    catch (runtime_error& e) {
//        cout << e.what() << endl;
//    }
//
//    cout << *flower1;
    return 0;
}