#include <stdio.h>

void change(int* arr, int num)
{
    int i = 0;
    for (i = 0; i < num - 1; i++)
    {
        int j = 0;
        for (j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    
    int m, n, num1, num2;
    int k = 0;
    scanf_s("%d %d\n", &m, &n);
    int arr[50] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < m; i++)
    {
        scanf_s(" %d", &num1);
        arr[i] = num1;
    }
    for (j = 0; j < n; j++)
    {
        scanf_s(" %d", &num2);
        arr[j + m] = num2;
    }
    //¿ªÊ¼ÅÅĞò
    change(arr, m + n);
    for (k = 0; k < m + n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}