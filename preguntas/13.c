#include <stdio.h>
int main(){
    int n = 10;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr;
    ptr = arr;
    int count_e = 0, count_o = 0;
    for (int i = 0; i < n; i++) {
        if (*ptr % 2 == 0) {
            count_e++;
        }
        if (*ptr % 2 != 0) {
            count_o++;
        }
        ptr++;
    }
    printf("%d - %d\n", count_e, count_o);
    return 0;
}
