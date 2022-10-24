#include "flight.h"
#include <iostream>
#include <string>

using namespace std;

void Flight::feedInfo(int flightNumber, string destination, float distance)
{
    this->flightNumber = flightNumber;
    this->destination = destination;
    this->distance = distance;
    this->fuel = calcFuel();
}

void Flight::showInfo()
{
    cout << "Flight Number      : " << flightNumber << endl;
    cout << "Flight Destination : " << destination << endl;
    cout << "Flight Distance    : " << distance << endl;
    cout << "Flight Fuel        : " << fuel << endl;
}

float Flight::calcFuel()
{
    if (distance <= 1000)
        return 500;

    else if (distance > 1000 && distance <= 2000)
        return 1100;

    else if (distance > 2000)
        return 2200;
}