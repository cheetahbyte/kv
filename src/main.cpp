#include <string>
#include <iostream>
#include <commandhandler.hpp>

int main() {
    CMDHandler cmdHandler;

    std::string line;
    while (std::getline(std::cin, line)) {
        auto result = cmdHandler.execute(line);
        std::cout << result << "\n";
    }
    return 0;
}
