#include <stdio.h>

int sum(int, int);

int main(void) /* プロトタイプ宣言 */
{
    sum(50, 100);
    return 0;
}

int sum(int min, int max)
{
    printf("%d\n", (min + max) * max / 2);
    return 0;
}
