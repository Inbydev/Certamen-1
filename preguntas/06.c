#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr;
    int i, suma = 0;
    ptr = &arr[0];
    ptr+=5;
    for ( i=*ptr; i<=10; i++ ) {
    	*ptr = 1;
     	ptr++;
    }
    for (i=0; i<10; i++) {
    	suma = suma + arr[i];
    }
    printf("%d\n", suma);
    return 0;
}
