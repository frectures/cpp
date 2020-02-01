#include <stdio.h>
#include <ios>
using ioex = std::ios_base::failure;

void backup() {
    FILE* in = fopen("readme.txt", "r");
    if (!in) goto close0;

    FILE* out = fopen("backup.txt", "w");
    if (!out) goto close1;

    char line[1000000];
    while (fgets(line, sizeof line, in)
        && fputs(line, out) != EOF)
    {
        putchar('.');
    }
    puts("done!");

close2:
    fclose(out);
close1:
    fclose(in);
close0:
    ;
}

int main() {
    try {
        backup();
    } catch (std::exception& ex) {
        puts(ex.what());
    }
}
