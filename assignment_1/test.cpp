#include "test.h"
#include <iostream>
#include <string>

using namespace std;

double Test::SCHEDULE(int TestCode, string Description, int NoCandidate, int CenterReqd)
{
    this->TestCode = TestCode;
    this->Description = Description;
    this->NoCandidate = NoCandidate;
    this->CenterReqd = CALCNTR();
}

void Test::DISPTEST()
{
    cout << "Test code                  : " << TestCode << endl;
    cout << "Test Description           : " << Description << endl;
    cout << "Test No. Candidates        : " << NoCandidate << endl;
    cout << "Test No. Centers Required  : " << CenterReqd << endl;
}

double Test::CALCNTR()
{
    return NoCandidate / (double)(100 + 1);
}
