#include <stdio.h>
#include <ios>
using ioex = std::ios_base::failure;

class Raiile {
public:
    FILE* handle;

    // Constructor
    Raiile(const char* filename, const char* mode) {
        handle = fopen(filename, mode);
        if (!handle) throw ioex(filename);
        printf("fopen %p %s\n", handle, filename);
    }

    // Destructor
    ~Raiile() {
        printf("fclose %p\n", handle);
        fclose(handle);
    }
};

void backup() {
    Raiile in("readme.txt", "r");
    Raiile out("backup.txt", "w");

    char line[1000000];
    while (fgets(line, sizeof line, in.handle)
        && fputs(line, out.handle) != EOF)
    {
        putchar('.');
    }
    puts("done!");
}

int main() {
    try {
        backup();
    } catch (std::exception& ex) {
        puts(ex.what());
    }
}
