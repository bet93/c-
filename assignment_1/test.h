#include <string>
using namespace std;

class Test
{
private:
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;
    double CALCNTR();

public:
    double SCHEDULE(int TestCode, string Description, int NoCandidate);
    void DISPTEST();
};