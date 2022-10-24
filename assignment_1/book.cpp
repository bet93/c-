#include "book.h"
#include <iostream>
#include <string>

using namespace std;

void Book::input(int bookNo, const char bookTitle[], float price)
{
    this->bookNo = bookNo;
    strcpy(this->bookTitle, bookTitle);
    this->price = price;
}

void Book::purchase()
{
    int copies;
    float total;

    cout << "Enter the number of copies of " << bookTitle << " to be purchased ";
    cin >> copies;

    total = Book::totalCost(copies);
    cout << "Total cost of " << copies << " copies of " << bookTitle << " " << totalCost << endl;
}

float Book::totalCost(int copies)
{
    return price * copies;
}
