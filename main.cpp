#include <boost/version.hpp>
#include <cstdio>
#include <iostream>

// #include "src/Address.h"

class Point {
public:
    int x, y;
    void Print() const;

    // 생성자
    Point();
};

Point::Point() {
    x = 0;
    y = 0;
}


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

    Point pt;
    pt.Print();

    return 0;
}