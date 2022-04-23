#include <stdio.h>
#include <string.h>

// jadi array nya di pisah satu satu
int main()
{
    char str[12] = "07:45:21PM";
    // scanf("%s", str);
    char strcp[12] = {0};
    int length = strlen(str);
    for (int i = 0; i < 8; i++)
    {
        strcp[i] = str[i];
    }
    if (str[8] == 'P' && str[0] + str[1] != 99)
    {
        strcp[0]++;
        strcp[1] += 2;
    }
    else if (str[8] == 'A' && str[0] == '1' && str[1] == '2')
    {
        strcp[0] = '0';
        strcp[1] = '0';
    }

    printf("%s", strcp);
    return 0;
}