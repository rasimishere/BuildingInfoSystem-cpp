#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Resident {
    int roomNumber;
    int numberOfResidents;
    double rent;
};

struct Building {
    string address;
    vector<Resident> residents;
};
