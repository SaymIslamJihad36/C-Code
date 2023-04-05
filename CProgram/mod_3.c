//                                   </>
//                             SAYM ISLAM JIHAD
//                      STUDENT AT PHITRON SPRING 2023
//                           FB : SAYM ISLAM JIHAD
//                                   </>


#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        printf("Hello\n");
    }
}


#include<stdio.h>

int main(){
    for(int i=0;i<100;i++){
        printf("%d\n",i);
    }
}


#include<stdio.h>

int main(){
    int a;
    for(int i=1;i<=15;i=i+2){
        printf("%d\n",i);
    }
}


#include<stdio.h>

int main(){
    long long int sum = 0;
    int n;
    printf("Enter amount : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%lld",sum);
}



#include<stdio.h>

int main(){
    int evod;
    printf("Enter : ");
    scanf("%d",&evod);
    for(int i=0;i<=evod;i++){
        if(i%2==0){
            printf("%d-Even\n",i);
        }else{
            printf("%d-Odd\n",i);
        }
    }
}



#include<stdio.h>

int main(){
    int n;
    for(int i=0;i<=5;i++){
        if(i==5){
            break;
        }
        printf("%d\n",i);
    }
}


//Continue statement 

#include<stdio.h>

int main(){
    for(int i=0;i<=10;i++){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
}


//While loop

#include<stdio.h>

int main(){
    int i=1;
    while(i<=5){
        printf("%d\n",i);
        i++;
    }
}



#include<stdio.h>

int main(){
    int i=100;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);
}

