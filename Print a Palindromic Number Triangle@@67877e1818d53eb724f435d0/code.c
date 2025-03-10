// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        k--;
        for(int j=1;j<=i-1;j++){
            k--;

            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}