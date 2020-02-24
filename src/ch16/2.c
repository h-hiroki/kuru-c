#include <stdio.h>
#include <string.h>

typedef struct {
    char name[64];
    int age;
    int gender;
} Person;

void InputPerson(Person *data);
void ShowPerson(Person *data);

int main(void)
{
    Person data[3];

    for (int i = 0; i < 3; ++i) {
        printf("%d人目\n", i + 1);
        InputPerson(&data[i]);
        printf("入力完了\n");
    }
    for (int i = 0; i < 3; ++i) {
        ShowPerson(&data[i]);
        printf("表示完了\n");
    }

    return 0;
}

void InputPerson(Person *data)
{
    printf("名前を入力してください\n");
    scanf("%s", data->name);
    printf("年齢を入力してください\n");
    scanf("%d", &data->age);
    printf("性別を入力してください。（男性:1, 女性:2）\n");
    scanf("%d", &data->gender);
    return;
}

void ShowPerson(Person *data)
{
    printf("名前：%s\n", data->name);
    printf("年齢：%d\n", data->age);

    if (data->gender == 1) {
        printf("性別：%s\n", "男性");
    } else {
        printf("性別：%s\n", "女性");
    }
    return;
}