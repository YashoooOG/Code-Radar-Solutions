// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char k='A';
        for(int j=1;j<=i;j++){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}