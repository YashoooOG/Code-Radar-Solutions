#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}