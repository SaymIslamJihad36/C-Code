
// Call Stack

#include<stdio.h>
void world()
{
    printf("World start\n");
    printf("World end\n");
}
void hello()
{
    printf("Hello Start\n");
    world();
    printf("Hello end\n");
}
int main()
{
    printf("Main start\n");
    hello();
    printf("Main End\n");
    return 0;
}


// What is Recursion

#include<stdio.h>

void fun()
{
    printf("Fun\n");
    fun();
}
int main()
{
    fun();
}


// print 1-5 using recursion

#include<stdio.h>

void fun(int i)
{
    if(i==6)
    {
        return;
    }
    printf("%d\n",i);
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}



// printing 5-1 using recursion


#include<stdio.h>

void fun(int i)
{
    if(i==0)return;
    printf("%d\n",i);
    fun(i-1);
}
int main()
{
    fun(5);
    return 0;
}


// Array printfing using Recursion

#include<stdio.h>

void fun(int arr[],int n,int i)
{
    if(i==n) return;
    printf("%d\n",arr[i]);
    fun(arr,n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,n,0);
    return 0;
}


// print from 5-1 in reverse way


#include<stdio.h>

void fun(int i)
{
    if(i==6) return;
    fun(i+1);// 2 3 4 5
    printf("%d\n",i);
}
int main()
{
    fun(1);
    return 0;
}


// Length of a string using Recursion


#include<stdio.h>

int fun(char arr[],int i)
{
    if(arr[i]=='\0') return 0;
    int l=fun(arr,i+1);
    return l+1;
}
int main()
{
    char arr[100] = "Hello";
    int length = fun(arr,0);
    printf("%d\n",length);
    return 0;
}


