#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}