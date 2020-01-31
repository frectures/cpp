#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream in("readme.txt");
    std::ofstream out("backup.txt");

    std::string line;
    while (std::getline(in, line) && (out << line << "\n")) {
        std::cout << '.';
    }
    std::cout << "done!\n";

    // line destructor releases dynamic char array
    // out destructor closes backup.txt
    // in destructor closes readme.txt
}
