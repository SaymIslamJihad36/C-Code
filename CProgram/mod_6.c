/* Note: সব কোডগুলো নিজের লজিক দিয়ে করা😡*/

// 1) solution-

#include<stdio.h>

int main()
{
    int N,l=-1;
    scanf("%d",&N);
    if(N>=2){
        for(int i=1;i<=N;i++){
            if(i%2==0){
                printf("%d\n",i);
            }
        }
    }else{
      printf("%d\n",l);
    }
    return 0;
}

// 2) solution:-

#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
        }else
        {
            odd++;
        }
        if(a>0)
        {
            pos++;
        }else if(a<0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
    
    return 0;
}

// 3) sollution:-

#include<stdio.h>

int main()
{
    int n;
    for(;scanf("%d",&n)!= EOF;){
        if(n==1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}

// 4) sollution:-

#include<stdio.h>

int main()
{
    int n,a;
    int max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(max<a){
            max = a;
        }
    }
    printf("%d\n",max);
    return 0;
}

// 5) sollution

#include<stdio.h>

int main()
{
    int n,mlt;
    scanf("%d",&n);
    for(int i=1;i<=12;i++){
        mlt = i*n;
        printf("%d * %d = %d\n",n,i,mlt);
    }
    return 0;
}
// 6) sollution:-
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        do{
        printf("%d ",n%10);
        n/=10;
        }while(n!=0);
        printf("\n");
    }
    return 0;
}
