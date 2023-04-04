//                                   </>
//                             SAYM ISLAM JIHAD
//                      STUDENT AT PHITRON SPRING 2023
//                           FB : SAYM ISLAM JIHAD
//                                   </>


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


// 6) Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>

int main(){
    char alp;
    printf("Enter any char(A-Z) : ");
    scanf("%c",&alp);
    if(alp>='A' && alp<='Z'){
        if(alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U'){
            printf("Vowel\n");
        }else{
            printf("Consonant\n");
        }
    }else{
        printf("Enter a valid charecter...");
    }
}


// 7) Write a C program to input any character and check whether it is charecter, digit or special character.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter : ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("This is a charecter\n");
    }else if(ch>='0' && ch<= '9'){
        printf("This is a digit\n");
    }else{
        printf("This is a special charecter\n");
    }
}


// 8) Write a C program to check whether a character is uppercase or lowercase alphabet.


#include<stdio.h>

int main(){
    char ch;
    printf("Enter char : ");
    scanf("%c",&ch);
    if(ch>='A' && ch <= 'Z'){
        printf("Uppercase\n");
    }else if(ch>='a' && ch <= 'z'){
        printf("Lowercase\n");
    }else{
        printf("Enter valid charecter...");
    }
}



// 9) Write a C program to input week number and print week day.

#include<stdio.h>

int main(){
    int week;
    printf("Enter week number(1-7) : ");
    scanf("%d",&week);
    if(week>=1){
        if(week==1){
            printf("Monday\n");
        }else if(week==2){
            printf("Tuesday\n");
        }else if(week==3){
            printf("Wednesday\n");
        }else if(week==4){
            printf("Thursday\n");
        }else if(week==5){
            printf("Friday\n");
        }else if(week==6){
            printf("Saturday\n");
        }else if(week==7){
            printf("Sunday\n");
        }
    }else{
        printf("Enter a valid day(1-7)");
    }
}


