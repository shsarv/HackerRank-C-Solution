#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,p,q;
    float c,d,r,s;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    p=a+b;
    q=a-b;
    r=c+d;
    s=c-d;
    printf("%d %d\n",p,q);
    printf("%0.1f %0.1f",r,s);
    return 0;
}

