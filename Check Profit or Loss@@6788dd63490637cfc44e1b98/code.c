#include <stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(y-x>1){
        printf("Profit");
    }
    else if(y-x==0){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}