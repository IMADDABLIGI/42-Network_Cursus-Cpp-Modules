#include <iostream>
#include <string>
#include <sstream>

void processString(const std::string& str) {
    std::istringstream iss(str);
    int intValue;
    float floatValue;
    double doubleValue;

    if (iss >> intValue) {
        std::cout << "Integer value: " << intValue << std::endl;
    } else if (iss.clear(), std::istringstream(str) >> floatValue) {
        std::cout << "Floating-point value: " << floatValue << std::endl;
    } else if (iss.clear(), std::istringstream(str) >> doubleValue) {
        std::cout << "Double value: " << doubleValue << std::endl;
    } else if (str.size() == 1) {
        char charValue = str[0];
        std::cout << "Character value: " << charValue << std::endl;
    } else {
        std::cout << "Invalid input" << std::endl;
    }
}

int main() {
    std::string input1 = "42";
    std::string input2 = "3.14";
    std::string input3 = "Hello";
    std::string input4 = "A";

    processString(input1);
    processString(input2);
    processString(input3);
    processString(input4);

    return 0;
}