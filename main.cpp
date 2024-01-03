#include <boost/version.hpp>
#include <cstdio>
#include "src/Address.h"


int main() {
    printf("Boost version: %d.%d.%d\n",
            BOOST_VERSION / 100000,
           (BOOST_VERSION / 100) % 1000,
           BOOST_VERSION % 100);

    Address address = Address();

    return 0;
}
