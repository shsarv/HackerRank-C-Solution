#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    scanf("%d", &n);
  	for(i=n; i>=1; i--)
    {
        // First inner part of upper half
        for(j=n; j>i; j--)
        {
            printf("%d ", j);
        }

        // Second inner part of upper half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d ", i);
        }

        // Third inner part of upper half
        for(j=i+1; j<=n; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    // Second lower half of the pattern
    for(i=1; i<n; i++)
    {
        // First inner part of lower half
        for(j=n; j>i; j--)
        {
            printf("%d ", j);
        }

        // Second inner part of lower half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d ", i+1);
        }

        // Third inner part of lower half
        for(j=i+1; j<=n; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}

