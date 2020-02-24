#include <stdio.h>
#include <string.h>

typedef struct {
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

void student_print(student data);

int main(void)
{
    student data;
    student *pdata;

    pdata = &data;
//    (*pdata).year = 10;
//    strcpy((*pdata).name, "MARIO");
    pdata->year = 10;
    strcpy(pdata->name, "MARIO");

    return 0;
}
