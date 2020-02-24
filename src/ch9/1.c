#include <stdio.h>

int main(void)
{
    for (int i = 1; i < 10; ++i) {
        printf("**********\n%dの段\n**********\n", i);
        for (int j = 1; j < 10; ++j) {
            printf("%d * %d = %2d\n", i, j, (int)(i * j));
        }
    }
}