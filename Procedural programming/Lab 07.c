#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int k, l, m, i, j;
    printf("Insira a string: \n");
    setbuf(stdin, NULL);
    fgets(str, 1000, stdin);
    k = strlen(str);

    for(i = 0; i < k; i++)
    {
        l = i + 1;
        j = l + 1;
        if(((str[i] == 'r') || (str[i] == 'R')) && ((str[l] == 'r') || (str[l] == 'R')))
        {
            for(m = l; m <= k; m++)
            {
                str[m] = str[j];
                j++;
            }
        }

        if((str[i] == 'r') && (( (str[l] > 64) && (str[l] <  91) ) || ((str[l] > 96) && (str[l] <  123) )))
           {
               str[i] = 'l';
           }
        else if((str[i] == 'R') && (( (str[l] > 64) && (str[l] <  91) ) || ((str[l] > 96) && (str[l] <  123) )))
        {
            str[i] = 'L';
        }
    }
    printf("%s", str);

    return 0;
}
