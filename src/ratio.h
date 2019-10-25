#ifndef RATIO_H
#define RATIO_H

#include <iostream>
#include <utility>
#include <string>
#include <vector>

class Ratio {
    double meter;
    double yard = 1.0936133;
    double foot = 3.2808399;
    double inch = 39.3700787;
    double mile = 0.000621371192;
    double lorem = 123;
    std::vector<std::pair<std::string, double>> results;

    public:

        Ratio():
            meter(0) {};
            
        Ratio(double m):
            meter (m) {};

        void calculate();

        void display();
};

#endif