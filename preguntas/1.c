#include <stdio.h>

void fun(int v1, int v2);

int main() {
    int v1 = 20, v2 = 10;
    fun(v1, v2);
    printf("v1=%d,v2=%d", v1, v2);
    return 0;
}

void fun(int v1, int v2) {
    v1 = 30;
    v2 = 50;
}
