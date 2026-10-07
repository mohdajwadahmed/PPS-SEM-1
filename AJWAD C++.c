#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter The value Of n:");
    scanf("%d", &n);
    printf("First %d Natural Number Are :\n", n);
    for (i = 1; i<=n; i++)
    {
        printf("%d,",i);
    }
    return 0;
}
