#include <boost/version.hpp>
#include <cstdio>
#include <iostream>

// #include "src/Address.h"

class Point {
public:
    int x, y;
    void Print();
};

void Point::Print() {
    x = 50;
    y = 150;
}


int main() {
    printf("Boost version: %d.%d.%d\n",
            BOOST_VERSION / 100000,
           (BOOST_VERSION / 100) % 1000,
           BOOST_VERSION % 100);

    // todo 잠시 미루자
    // Address address = Address();

    Point pt;
    pt.Print();

    return 0;
}