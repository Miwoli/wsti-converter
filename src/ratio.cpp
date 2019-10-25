#include <iostream>
#include <utility>
#include <string>
#include <iomanip>
#include "ratio.h"

void Ratio::calculate() {
    results.emplace_back(std::make_pair("yard", meter * yard));
    results.emplace_back(std::make_pair("inch", meter * inch));
    results.emplace_back(std::make_pair("mile", meter * mile));
    results.emplace_back(std::make_pair("foot", meter * foot));
}

void Ratio::display() {
    for (auto result: results) {
        std::cout << result.first << ": " << std::fixed << std::setprecision(4) << result.second << std::endl;
    }
}