// pointer 

// #include<stdio.h>

// int main()
// {
//     int x = 100;
//     int *ptr = &x;
//     // x = 200;
//     *ptr = 200;
//     // printf("x er address - %p\n",&x);
//     // printf("ptr er value - %p\n",ptr);
//     // printf("ptr er address -%p\n",&ptr);
//     // printf("ptr er size -%d\n",sizeof(ptr));
//     printf("x er value : %d\n",x);
//     printf("x er value : %d\n",*ptr);
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     double x = 2.56;
//     double *ptr = &x;
//     double *ptr2 = ptr;
//     *ptr2 = 10.21;
//     printf("x er value %0.2lf\n",x);
//     printf("x er value %0.2lf\n",*ptr);
//     printf("ptr2 er value %d\n",ptr2);
//     return 0;
// }





// call by value;


// #include<stdio.h>

// void fun(int x)
// {
//     // printf("Fun er x er address - %p\n",&x);
//     x = 200;
// }

// int main()
// {
//     int x=10;
//     // printf("main er x er address - %p\n",&x);
//     fun(x);
//     printf("main er x er value - %d\n",x);
//     return 0;
// }


// call by reference;;


// #include<stdio.h>

// void fun(int *p)
// {
//     printf("p er value - %p\n",p);
//     *p = 100;
// }

// int main()
// {
//     int x = 10;
//     printf("x er address - %p\n",&x);
//     printf("fun er age x er value - %d\n",x);
//     fun(&x);
//     printf("fun er pore x er value - %d\n",x);
//     return 0;
// }



// array and pointer 



// #include<stdio.h>

// int main()
// {
//     int ar[5]={10,20,30,40,50};
//     // printf("0th index er address - %p\n",&ar[0]);
//     // printf("0th index er address - %p\n",ar);

//     // printf("0th index er value - %d\n",ar[0]);
//     // printf("0th index er value - %d\n",*ar);
//     // printf("1th index er value - %d\n",*(ar+1));
//     // printf("2th index er value - %d\n",*(ar+2));

//     printf("%d\n",*(ar+1)); // ar[1];
//     printf("%d\n",*(1+ar)); // 1[ar];
//     printf("%d\n",ar[1]); // *(ar+1);
//     printf("%d\n",1[ar]); // *(1+ar);
//     return 0;
// }


// Function and array

// #include<stdio.h>

// int fun(int ar[],int n)
// // int fun(int *ar,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",ar[i]);
//     }
// }

// int main()
// {
//     int ar[5]={10,20,30,40,50};
//     fun(ar,5);
//     return 0;
// }


// Function and string//

// #include<stdio.h>
// #include<string.h>

// void fun(char ar[])
// {
//     // int sz = sizeof(ar)/sizeof(char);
//     // printf("%d\n",sz);
//     printf("%d\n",strlen(ar));
// }

// int main()
// {
//     char ar[6] = {"Hello"};
//     // int sz = sizeof(ar)/sizeof(char);
//     // printf("%d\n",sz);
//     fun(ar);
//     return 0;
// }


// function with array as reference


// #include<stdio.h>

// void fun(int *ar,int n)
// {
//     ar[0] = 500;
// }

// int main()
// {
//     int ar[5]={10,20,30,40,50};
//     fun(ar,5);
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",ar[i]);
//     }
//     return 0;
// }



// practice problem 1; (Solved\n);

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int my_abs(int n)
// {
//     int ans = abs(n);
//     return ans;
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",my_abs(n));
//     return 0;
// }


// practice problem 2 (solved)

// #include<stdio.h>

// int my_len(char str[],int count)
// {
//     for(int i=0;i<str[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {

//     char str[100];
//     scanf("%s",str);
//     int count = 0;
//     printf("%d\n",my_len(str,count));
//     return 0;
// }



// Practice problem 4 (Solved)
// #include<stdio.h>

// int count_odd(int arr[],int n,int count)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]%2!=0)
//         {
//             count++;
//         }
//         // printf("%d ",arr[i]);
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     int count = 0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("%d\n",count_odd(arr,n,count));
//     return 0;
// }


