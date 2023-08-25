#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// Use Selection Sort to search the max value in array: arr.

int arrlength = 0;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int *a)
{
    for(int i = 0; i<arrlength; i++)
    {
        int min = i;
        for(int j=i+1; j<arrlength; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        if(i != min)
        {
            swap(&a[i], &a[min]);
        }
    }
}

int max_of_four(int *a)
{
    selectionSort(a);
    return a[3];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int arr[4] = {a, b, c, d};
    arrlength = sizeof(arr)/sizeof(arr[0]);
    int ans = max_of_four(arr);
    printf("%d", ans);
    
    return 0;
}