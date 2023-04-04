//                                   </>
//                             SAYM ISLAM JIHAD
//                      STUDENT AT PHITRON SPRING 2023
//                           FB : SAYM ISLAM JIHAD
//                                   </>

//practice problem 1
#include<stdio.h>

int main(void){
    printf("Recently I heard that you've achieved 95%% marks in your exam.\nThis is brilliant!\nI wish you'll shine in your life!\tGood luck with all the barriers(/\\) in your life.");
}

//practice problem 2

#include<stdio.h>

int main(void){
    int a,b;
    int pls,min,mlt;
    float div;
    printf("Enter a,b : ");
    scanf("%d %d",&a,&b);
    pls = a+b;
    min = a-b;
    div = (a*1.0)/b;
    mlt = a*b;
    printf("%d + %d=%d\n",a,b,pls);
    printf("%d - %d=%d\n",a,b,min);
    printf("%d * %d=%d\n",a,b,mlt);
    printf("%d / %d=%.2f\n",a,b,div);
}

//practice problem 3

#include<stdio.h>

int main(){
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    if(a>0){
        if(a%2!=0){
            printf("odd\n");
        }else{
            printf("even\n");
        }
    }else{
        printf("Enter valid number pls...");
    }
}

//practice problem 4

#include<stdio.h>

int main(void){
    int a;
    printf("enter : ");
    scanf("%d",&a);
    if(a>0){
        printf("positive\n");
    }else if(a<0){
        printf("negative\n");
    }else{
        printf("zero\n");
    }
}

//practice problem 5

#include<stdio.h>

int main(void){
    int tk;
    printf("Enter money amount : ");
    scanf("%d",&tk);
    if(tk>=10000){
        printf("Gucci Bag\n");
        if(tk>20000){
            printf("Gucci Belt\n");
        }
    }else if(tk>=5000){
        printf("Levis Bag\n");
    }else{
        printf("Something\n");
    }
}