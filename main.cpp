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

int main() {
    Building building1;
    building1.address = "RasimHolding";
    building1.residents.push_back({ 101, 2, 1000.00 });
    building1.residents.push_back({ 111, 1, 800.00 });

    Building building2;
    building2.address = "RasimHolding2";
    building2.residents.push_back({ 201, 3, 1900.00 });
    building2.residents.push_back({ 222, 2, 1100.00 });

    return 0;
}
