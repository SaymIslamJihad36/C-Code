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


#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    int boro,choto;
    if(x>=97&&x<=122)
    {
        boro=x-32;
        printf("%c\n",boro);
    }else
    {
        choto=x+32;
        printf("%c\n",choto);
    }
    return 0;
}



#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        printf("Yes\n");
    }else
    {
        printf("No\n");
    }
    return 0;
}