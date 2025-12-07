#include <stdio.h>
//排序后打印前五大的数

int main() {
    int n = 0;
    int i = 0;
    scanf_s("%d", &n);
    int arr[100] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", arr + i);
    }
    for (i = 0; i < n - 1; i++)
    {
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = 0;
                tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
    for (i = n; i > 1; i--)
    {
        printf("%d ", arr[i - 1]);
    }
    return 0;
}