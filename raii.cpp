#include <stdio.h>

int main() {
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
