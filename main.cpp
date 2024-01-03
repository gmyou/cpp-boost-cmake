#include <boost/version.hpp>
#include <cstdio>
#include <iostream>

// #include "src/Address.h"

class Point {
public:
    int _x, _y;
    void Print(int x) const;
};

void Point::Print(int x) const {
    std::cout << "\n(" << _x << "," << _y << "," << x << ")\n";
}


int main() {
    printf("Boost version: %d.%d.%d\n",
            BOOST_VERSION / 100000,
           (BOOST_VERSION / 100) % 1000,
           BOOST_VERSION % 100);

    // todo 잠시 미루자
    // Address address = Address();

    Point pt1, pt2;
    pt1._x = 100;
    pt1._y = 100;
    pt2._x = 200;
    pt2._y = 200;

    pt1.Print(150);
    pt2.Print(250);

    return 0;
}