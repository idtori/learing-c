#include <stdio.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int i = 3 * n;
    int count = 2;
    int flag = 0;
    for (int k = 0; k < i; k++)
    {
        //´òÓ¡×ó±ßÔµ¿Õ¸ñ
        int j = 0;
        for (j = 0; j < i - k - 1; j++)
        {
            printf(" ");
        }
        //Ñ­»·´òÓ¡*
        if (flag == 3)
        {
            int g = 0;
            for (g = 0; g < count; g++)
            {
                printf("*     ");
            }
            flag = 0;
            count++;
        }
        else if (flag == 1)
        {
            int g1 = 0;
            for (g1 = 0; g1 < count - 1; g1++)
            {
                printf("* *   ");
            }
        }
        else
        {
            for (j = 0; j < k + 1; j++)
            {
                printf("* ");
            }
        }
        flag++;
        printf("\n");
    }
    //Ê÷¸É
    int k = 0;
    for (k = 0; k < n; k++)
    {
        int j = 0;
        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}