// define a class "print" with two members "xordinate" and"yordinate to represent all points in the two dimensional plane by storing their x co ordinate and y co ordinate values write members functions dist():to returns the distance of the point from  the origin . slope(): to return the slope of the line obtained by joining this point with the origin . write constructors with zero one and two arguments to initilize object also write a friend function to compute the distance between two points

#include <iostream>
#include <cmath>
using namespace std;
class point
{
    double xordinate;
    double yordinate;

public:
    point()
    {
        xordinate = yordinate = 0;
    }
    point(double a)
    {
        xordinate = yordinate = a;
    }
    point(double a, double b)
    {
        xordinate = a;
        yordinate = b;
    }
    float dist()
    {
        return sqrt(xordinate * xordinate + yordinate * yordinate);
    }
    float slope(point &other)
    {
        return (other.yordinate - yordinate) / (other.xordinate - xordinate);
    }
    void displaydist()
    {
        cout << "distance from the origin is: " << dist() << "\n";
    }
    void displayslope(point &other)
    {
        cout << "slope of two points are: " << slope(other)<<"\n";
    }
    friend void myfunction(point &obj1, point &obj2);
};
void myfunction(point &obj1, point &obj2)
{
    cout << "the distance from two points are " << sqrt((obj2.xordinate - obj1.xordinate) * (obj2.xordinate - obj1.xordinate) + (obj2.yordinate - obj1.yordinate) * (obj2.yordinate - obj1.yordinate));
}
int main()
{
    point p1(1, 2);
    p1.dist();
    p1.displaydist();
    point p2(3, 4);
    p2.dist();
    p2.displaydist();
    p1.slope(p2);
    p1.displayslope(p2);
    myfunction(p1,p2);

    return 0;
}
