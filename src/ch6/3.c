#include <stdio.h>

int main(void)
{
//    double base, divi1, divi3, divi5, divi8;
//    scanf("%lf", &base);
//
//    divi1 = base * 0.9;
//    divi3 = base * 0.7;
//    divi5 = base * 0.5;
//    divi8 = base * 0.2;
//
//    printf("定価 %f, 1割引 %f, 3割引 %f, 5割引 %f, 8割引 %f\n",
//            base,
//            divi1,
//            divi3,
//            divi5,
//            divi8);

    int price;

    printf("定価を入力してください：");
    scanf("%d", &price);

    printf("1割引 = %d円\n", (int)(price * 0.9));
    printf("3割引 = %d円\n", (int)(price * 0.7));
    printf("5割引 = %d円\n", (int)(price * 0.5));
    printf("8割引 = %d円\n", (int)(price * 0.2));

    return 0;
}