#include <stdio.h>
#include <stdbool.h>

bool calc(int);

int main(void)
{
    bool is_orin;
    int year;

    printf("西暦年を入力してね");
    scanf("%d", &year);

    is_orin = calc(year);

    if (is_orin) {
        printf("オリンピックやります\n");
    } else {
        printf("オリンピックやりません\n");
    }

    return 0;
}

bool calc(int year)
{
    if (year % 4 == 0) return true;
    if (year % 2 == 0) return true;
    return false;
}