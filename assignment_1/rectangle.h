#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    void setlength(float length)
    {
        this->length = length;
    }

    void setwidth(float width)
    {
        this->width = width;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    float area()
    {
        return length * width;
    }

    void show()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    int sameArea(Rectangle r)
    {

        return (area() == r.area()) ? 1 : 0;
    }
};