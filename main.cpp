#include <boost/version.hpp>
#include <cstdio>
#include <iostream>

// #include "src/Address.h"

class Point {
public:
    int x, y;
    void Print() const;
};

void Point::Print() const {
    std::cout << "\n(" << x << "," << y << ")\n";
}


int main() {
    printf("Boost version: %d.%d.%d\n",
            BOOST_VERSION / 100000,
           (BOOST_VERSION / 100) % 1000,
           BOOST_VERSION % 100);

    // todo 잠시 미루자
    // Address address = Address();

    Point pt1, pt2;
    pt1.x = 100;
    pt1.y = 100;
    pt2.x = 200;
    pt2.y = 200;

    pt1.Print();
    pt2.Print();

    return 0;
}