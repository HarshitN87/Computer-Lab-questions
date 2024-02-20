#include <stdio.h>
#include <string.h>

int main()
{


    char f[40], c[20];
    gets(f);
    gets(c);


    int ac=0,flag = 0, i = 0, q = 0;


    while (f[i] != '\0')
    {   q=0;
        ac=i;
        while (c[q] != '\0')
        {
            if (c[q] != f[ac])
            {
                flag = 1;
            }

            ac++;
            q++;
        }

        if (!flag)
        {
            printf("yes it is a substring");
            break;
        }
        flag=0;
        q=0;
        i++;
    }
    return 0;
}
