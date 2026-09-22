#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    void setDimensions(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float calculateArea()
    {
        return length * breadth;
    }

    float calculatePerimeter()
    {
        return 2 * (length + breadth);
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main()
{
    Rectangle rect;

    float length, breadth;

    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    rect.setDimensions(length, breadth);

    rect.display();

    return 0;
}
