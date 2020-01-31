#include <ios>
#include <stdio.h>

void backup() {
    FILE* in = fopen("readme.txt", "r");
    if (in) {
        FILE* out = fopen("backup.txt", "w");
        if (out) {
            char line[1000000];
            while (fgets(line, sizeof line, in) && fputs(line, out) != EOF) {
                putchar('.');
            }
            puts("done!");

            fclose(out);
        }
        fclose(in);
    }
}

int main() {
    try {
        backup();
    } catch (std::exception& ex) {
        puts(ex.what());
    }
}
