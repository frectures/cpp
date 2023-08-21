#include "hexdump.hpp"
#include <string>
#include <iostream>

class Mensch {
public:
    std::string vorname;
    std::string nachname;
};

int main() {
    Mensch menschen[] = {
        Mensch { "Bjarne", "Stroustrup" },
        Mensch { "James" , "Gosling"    },
    };

    std::cout << sizeof(menschen) << "\n\n"; // 128

    hexdump(menschen);
}
/*
000000c9f41ff5b0  c0 f5 1f f4 c9 00 00 00 06 00 00 00 00 00 00 00  ................
000000c9f41ff5c0  42 6a 61 72 6e 65 00 00 00 00 00 00 00 00 00 00  Bjarne..........
000000c9f41ff5d0  e0 f5 1f f4 c9 00 00 00 0a 00 00 00 00 00 00 00  ................
000000c9f41ff5e0  53 74 72 6f 75 73 74 72 75 70 00 10 00 00 00 00  Stroustrup......
000000c9f41ff5f0  00 f6 1f f4 c9 00 00 00 05 00 00 00 00 00 00 00  ................
000000c9f41ff600  4a 61 6d 65 73 00 00 00 00 00 00 00 00 00 00 00  James...........
000000c9f41ff610  20 f6 1f f4 c9 00 00 00 07 00 00 00 00 00 00 00  ................
000000c9f41ff620  47 6f 73 6c 69 6e 67 00 00 00 00 00 00 00 00 00  Gosling.........
*/
