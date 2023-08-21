#include <memory>
#include <stdio.h>

template <typename T>
void hexdump(T const& x) {
    auto p = reinterpret_cast<unsigned char const*>(std::addressof(x));
    for (auto n = (sizeof(T) + 15) & ~15; n != 0; n -= 16, p += 16) {
        printf("%p  ", p);
        for (int i = 0; i < 16; ++i) {
            putchar("0123456789abcdef"[p[i] >> 4]);
            putchar("0123456789abcdef"[p[i] & 15]);
            putchar(' ');
        }
        putchar(' ');
        for (int i = 0; i < 16; ++i) {
            auto x = p[i];
            if (x < 32 || x >= 127) {
                x = '.';
            }
            putchar(x);
        }
        putchar('\n');
    }
}
