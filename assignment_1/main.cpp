#include <iostream>
#include "student.h"
#include "batsman.h"
#include "test.h"
#include "flight.h"
#include "book.h"
#include "report.h"
#include "rectangle.h"
#include "complex.h"
#include "distance.h"
#include "time.h"

using namespace std;

int main()
{
    // problem 1:
    Student student;
    cout << "========== Problem 1 ==========" << endl;
    student.takeData(26, "Emma", 2, 0, 7);
    student.showData();

    cout << endl;
    cout << endl;

    // problem 2:
    Batsman batsman;
    cout << "========== Problem 2 ==========" << endl;
    batsman.readData(1407, "Ryan", 3, 8, 6);
    batsman.displayData();

    cout << endl;
    cout << endl;

    // problem 3:
    Test test;
    cout << "========== Problem 3 ==========" << endl;
    test.SCHEDULE(12, "Foundation Exam", 450);
    test.DISPTEST();

    cout << endl;
    cout << endl;

    // problem 4:
    Flight flight;
    cout << "========== Problem 4 ==========" << endl;
    flight.feedInfo(1215, "Ireland", 3000);
    flight.showInfo();

    cout << endl;
    cout << endl;

    // problem 5:
    Book book;
    int copies;
    cout << "========== Problem 4 ==========" << endl;
    book.input(13, "Everyday", 15.00);
    book.purchase();

    cout << endl;
    cout << endl;

    // problem 6:
    cout << "========== Problem 6 ==========" << endl;
    Report rep;
    float mark[5] = {5.0, 4.0, 3.5, 3.2, 4.5};
    rep.READINFO(5465, "Amelia", mark);
    rep.DISPLAYINFO();

    cout << endl;
    cout << endl;

    // problem 7:
    Rectangle r1, r2;
    cout << "========== Problem 7 Part 1==========" << endl;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);

    cout << "First Triangle:" << endl;
    r1.show();
    cout << "Area: " << r1.area() << " Perimeter: " << r1.perimeter() << endl;

    cout << "Second Triangle:" << endl;
    r2.show();
    cout << "Area: " << r2.area() << " Perimeter: " << r2.perimeter() << endl;

    cout << endl;

    string result = (r1.sameArea(r2) == 1) ? "the same" : "different";
    cout << "The areas of the rectangles are " << result << endl;

    cout << endl;
    cout << "========== Problem 7 Part 2==========" << endl;
    r1.setlength(15);
    r1.setwidth(6.3);

    cout << "First Triangle:" << endl;
    r1.show();
    cout << "Area: " << r1.area() << " Perimeter: " << r1.perimeter() << endl;

    cout << "Second Triangle:" << endl;
    r2.show();
    cout << "Area: " << r2.area() << " Perimeter: " << r2.perimeter() << endl;

    cout << endl;

    result = (r1.sameArea(r2) == 1) ? "the same" : "different";
    cout << "The areas of the rectangles are " << result << endl;

    cout << endl;
    cout << endl;

    // problem 8
    Complex c1, c2, c3;
    cout << "========== Problem 8 ==========" << endl;
    c1.set(4, 2);
    c2.set(5, 1);
    c3 = c1.sum(c2);

    cout << "Complex #1:" << endl;
    c1.disp();
    cout << "Complex #2:" << endl;
    c2.disp();
    cout << "Complex #3 = Complex #1 + Complex #2:" << endl;
    c3.disp();

    cout << endl;
    cout << endl;

    // problem 9
    cout << "========== Problem 9 ==========" << endl;
    Distance d1, d2, d3;
    d1.set(5, 4);
    d2.set(9, 20);
    d3 = d1.add(d2);

    cout << "Distance 1:" << endl;
    d1.disp();
    cout << "Distance 2:" << endl;
    d2.disp();
    cout << "Distance 3 = Distance 1 + Distance 2:" << endl;
    d3.disp();

    cout << endl;
    cout << endl;

    // problem 10
    cout << "========== Problem 10 ==========" << endl;
    Time t1, t2, t3;
    t1.settime(10, 50);
    t2.settime(15, 40);
    t3 = t1.sum(t2);

    cout << "Time 1:" << endl;
    t1.showtime();
    cout << "Time 2:" << endl;
    t2.showtime();
    cout << "Time 3 = Time 1 + Time 2:" << endl;
    t3.showtime();

    return 0;
}