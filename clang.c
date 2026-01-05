#include <stdio.h>

union Test {
    int i;
    float f;
};

int main() {
    union Test t;
    t.i = 10;
    printf("%f", t.f);   // ❌ undefined behavior
}
