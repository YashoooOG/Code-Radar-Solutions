// Your code here...// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char a='A';
        for(int j=n-i;j>0;j--){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}