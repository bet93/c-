#include <iostream>

using namespace std;

class Book
{
private:
    int bookNo;
    char bookTitle[20];
    float price;
    float totalCost(int copies);

public:
    void input(int bookNo, const char bookTitle[], float price);
    void purchase();
};