#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b = 0;
    float c,d = 0;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    printf("%d %d\n", a+b, a-b);
    printf("%0.1f %0.1f\n", c+d, c-d);
    return 0;
}