#include <iostream>
#include <regex>


int main() {
    system("../bin/welcome");
    std::string command;

    std::cout << std::endl << std::endl;

    while (command != "quit") {
        std::cout << "ASM-CLI:~$ ";
        std::cin >> command;
    }
}
