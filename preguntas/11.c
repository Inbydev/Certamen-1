#include <stdio.h>
int misterio(int, int);
int main() {
    int a = 2, b = 4;
    printf("%d\n", misterio(a, b));
    return 0;
}

int misterio(int n1, int n2) {
    if (n2 == 0) {
        return 1;
    }
    else {
        return misterio(n1, n2 - 1) * n1;
    }
}
