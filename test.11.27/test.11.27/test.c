#include <stdio.h>

void move(int* arr, int* n, int* i)
{
    int j = 0;
    int N = *n;
    for (j = 0; j < *n - *i - 1; j++)
    {
        arr[N] = arr[N - 1];
        N--;
    }
}
int main() 
{
    int n = 0;
    scanf_s("%d", &n);
    int i = 0;
    int arr[10] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf_s("%d ", arr + i);
    }
    int new = 0;
    scanf_s("%d", &new);
    if (new > arr[0])
    {
        for (i = 0; i < n; i++)
            {
                if (new >= arr[i])
                {
                    move(arr, &n, &i);
                    arr[i + 1] = new;
                    break;
                }
            }
    }
    else if (new >= arr[n - 1])
    {
        arr[n] = new;
    }
    else
    {
        int j = 0;
        int N = n;
        for (j = 0; j < n; j++)
        {
            arr[N] = arr[N - 1];
            N--;
        }
        arr[0] = new;
    }
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}