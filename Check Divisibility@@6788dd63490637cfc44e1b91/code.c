#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n%11==0 &&n%5==0){
        printf("Divisible");
    }
    else{
         printf("Not Divisible");
    }
}