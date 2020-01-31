#include <fstream>
#include <iostream>
#include <string>

void backup() {
    std::ifstream in("readme.txt");
    std::ofstream out("backup.txt");

    std::string line;
    while (std::getline(in, line) && (out << line << "\n")) {
        std::cout << '.';
    }
    std::cout << "done!\n";

    // out destructor closes backup.txt
    // in destructor closes readme.txt
}

int main() {
    try {
        backup();
    } catch (std::exception& ex) {
        std::cout << ex.what() << "\n";
    }
}
