//1) Write a C program to find maximum between two numbers.


#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a,b : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d\n",a);
    }else if(a==b){
        printf("equal\n");
    }else{
        printf("%d\n",b);
    }

}

//2) Write a C program to find maximum between three numbers.

#include<stdio.h>

int main(void){
    int a,b,c;
    printf("Enter a,b,c : ");
    scanf("%d  %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Maximum number is %d\n",a);
    }else if(b>a && b>c){
        printf("Maximum number is %d\n",b);
    }else{
        printf("Maximum number is %d\n",c);
    }
}


//3) Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>

int main(void){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a%5==0){
        printf("Divisible by 5");
        if(a%11==0){
            printf(" & 11\n");
        }
    }else if(a%11==0){
        printf("Divisible by 11\n");
    }else{
        printf("Not divisible by 5 and 11\n");
    }
}


// 4) Write a C program to check whether a year is leap year or not.

#include<stdio.h>

int main(void){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("This is Leap year\n");
    }else{
        printf("This is not Leap year\n");
    }
}


// 5) Write a C program to check whether a character is alphabet or not.

#include<stdio.h>

int main(){
    char alp;
    printf("Enter any charecter(atoz/AtoZ) : ");
    scanf("%c",&alp);
    if(alp>='A' && alp<='Z'){
        printf("Charecter is alphabet\n");
    }else if(alp>='a' && alp<='z'){
        printf("Charecter is not alphabet\n");
    }else{
        printf("Enter a valid charecter...\n");
    }
    return 0;
}