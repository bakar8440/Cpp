#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    long long int i,m[100010],f,sum;
    
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%lld", &m[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum += m[i];
    }
    f = abs(sum);
    printf("%lld\n", f);
    return 0;
}