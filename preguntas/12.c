#include <stdio.h>
int misterio(int, int);
int main() {
    int a = 2, b = 4;
    printf("%d\n", misterio(a, b));
    return 0;
}

int misterio(int n1, int n2) {
    int n3, n4;
    n3 = 1;
    n4 = 0;
    while (n4 < n2) {
        n3 = n3 * n1;
        n4++;
    }
    return n3;
}
