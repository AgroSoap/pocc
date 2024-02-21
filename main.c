#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Rus");
double  x, m, s, chisl, znam, ABSsum, sum1, sum2,n;
printf("¬ведите X: ");
scanf("%lf", &x);
printf("¬ведите M: ");
scanf("%lf", &m);
printf("¬ведите N: ");
scanf("%lf", &n);
    chisl=0;
    znam=0;
    ABSsum=0;
        sum1=0;
        for(int j=1; j<=m; ++j)
    {
        sum1+=powf(j,3);
    }
for(int k = 1; k <= n; ++k)
{
    sum2=0;
    chisl=k*x+sum1;

    for (int i=1; i<=m;++i)
    {
        sum2+=1+((double)i/(double)k);
    }
    znam=1+sum2;
    ABSsum+=(double)chisl/(double)znam;
}
printf("%lf\n", ABSsum);
}
