#include <iostream>
#include <utility>
#include <string> 
#include <limits>
#include "ratio.h"

int main(int argc, char** argv) {

    char exit;

    std::cout << "Length conversions program. ";
    do {
        std::cout << "Type meters to calculate: " << std::endl;

        double input;
        std::cin >> input;

        while ((input < 0) || (std::cin.fail())) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Distance cannot be lower than 0 and must be a number." << std::endl;
            std::cout << "Type meters to calculate: " << std::endl;
            std::cin >> input;
        };

        Ratio ratio{input};

        ratio.calculate();
        ratio.display();

        std::cout << "Do you want to exit [y/n]?" << std::endl;
        std::cin >> exit;

        while ((exit != 'y') && (exit != 'n')) {
            std::cout << "Unexpected input!" << std::endl;
            std::cin >> exit;
        }

    } while (exit == 'n');
    
    std::getchar();
    return 0;
}