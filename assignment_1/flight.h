#include <iostream>
using namespace std;

class Flight
{
private:
    int flightNumber;
    string destination;
    float distance;
    float fuel;
    float calcFuel();

public:
    void feedInfo(int flightNumber, string destination, float distance);
    void showInfo();
};
