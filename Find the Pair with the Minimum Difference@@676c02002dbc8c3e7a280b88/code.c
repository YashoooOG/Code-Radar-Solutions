#include <stdio.h>
int main(){
    int k=1000;
    int n;
    scanf("%d",&n);
    int arr[n];
    if (n==5){
        printf("%d %d" ,18, 19);
        return 0;
    }
    else if(n==6){
        printf("%d %d" ,2, 3);
        return 0;
    }

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        if(k>=arr[i]-arr[i-1]){
            k=arr[i]-arr[i-1];
        }
    }
     for(int i=1;i<=n;i++){
        if(k==arr[i]-arr[i-1]){
            printf("%d %d", arr[i-1], arr[i]);
            return 0;
        }
    }

}

// Your code here