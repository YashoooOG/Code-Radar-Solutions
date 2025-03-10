// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int n;
    int k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}