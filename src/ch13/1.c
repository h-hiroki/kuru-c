#include <stdio.h>

int main(void)
{
    int arr[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};


    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        printf("%d\n", arr[i]);
    }
}