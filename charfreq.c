#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char l[26] = {0};
    char f[20];
    fgets(f);
    int k, arr[26] = {0};
    int w = 0, p, count = 0, i = 0, len;
    len = strlen(f);
    f[len] = ' ';
    f[len + 1] = '\0';

    char c[10];
    for (int j = 0; j < 26; j++)
    {

        l[j] = 97 + j;
    }
    while (f[i] != '\0')
    {
        for (int j = 0; j < 26; j++)
        {
            if (f[i] == 97 + j)
            {
                l[j]++;
                arr[j]++;
            }
        }
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;

                t = l[j];
                l[j] = l[j + 1];
                l[j + 1] = t;
            }
        }
    }

    for (int j = 0; j < 26; j++)
    {
        if (arr[j] != 0)
        {
            printf("%c has %d frequency \n", l[j] - arr[j], arr[j]);
        }
    }

    return 0;
}
