#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c = 1, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series till %d terms: ", n);
    if (n == 1)
    {
        printf("%d", a);
    }
    else if (n == 2)
    {

        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d ", a, b);
        for (i = 2; i < n; i++)
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
    return 0;
}
