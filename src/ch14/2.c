#include <stdio.h>
#include <string.h>

int main(void)
{
    char last_name[128], first_name[128];

    printf("姓をいれて\n");
    scanf("%s", last_name);

    printf("名をいれて\n");
    scanf("%s", first_name);

    printf("%s%s\n", last_name, first_name);
    return 0;
}