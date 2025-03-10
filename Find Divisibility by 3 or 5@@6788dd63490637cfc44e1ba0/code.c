#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("Divisible by Both");
    }
    else if(n%5==0){
        printf("Divisible by 5");
    }
    else if(n%3==0){
        printf("Divisible by 3");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}