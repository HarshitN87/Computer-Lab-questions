#include <stdio.h>
#include <string.h>

int main()
{
    int t, ind = 0, e = 0;

    char f[40];
    gets(f);
    int k, arr[26] = {0};
    int l = 0, w = 0, p, count = 0, i = 0, len;
    len = strlen(f);
    f[len] = ' ';
    f[len + 1] = '\0';
    int stk;
    stk = strlen(f);
    while (f[i] != '\0')
    {
        for (int j = 0; j < 26; j++)
        {
            if (f[i] == 97 + j)
            {
                arr[j]++;
            }
        }
        e++;
        i++;
    }
    int big = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
            ind = i;
        }
    }
    int tem = big, o, q = 97 + ind;

    for (int k = 0; k < 26; k++)
    {
        if (f[k] == q)
        {
            for (o = k; o < e; o++)
            {
                f[o] = f[o + 1];
            }
            k--;
        }
    }

    printf("%s", f);

    return 0;
}