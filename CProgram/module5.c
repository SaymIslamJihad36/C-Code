#include<stdio.h>

int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a<=b&&a<=c)
    {
        printf("%lld",a);
        if(b>=a&&b>=c){
            printf(" %lld",b);
        }else{
            printf(" %lld",c);
        }
    }else if(b<=a&&b<=c)
    {
        printf("%lld",b);
        if(a>=b&&a>=c)
        {
            printf(" %lld",a);
        }else
        {
            printf(" %lld",c);
        }
    }else if(c<=a&&c<=b)
    {
        printf("%lld",c);
        if(b>=a&&b>=c){
            printf(" %lld",b);
        }else{
            printf(" %lld",a);
        }
    }
    return 0;
}
