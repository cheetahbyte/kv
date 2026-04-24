#include <string>
#include <iostream>
#include <commandhandler.hpp>
#include <sstream>

int main() {
    CMDHandler cmdHandler;

    std::string line;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        auto result = cmdHandler.parse(iss);
        std::cout << result << "\n";
    }
    return 0;
}
