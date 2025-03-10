
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("28");
    }
    else if(n==13){
        printf("Invalid month");
    }
    else if(n<=7){
        if(n%2==0){
            printf("30");
        }
        else{
            printf("31");
        }
    }
    else if(7<n<=12){
        if(n%2==0){
            printf("31");
        }
        else{
            printf("30");
        }
    }
}