
#include <stdio.h>
int mostPlayedGame(int games[1000],int n){
    int arr[1000];
    int ans;
    for(int i=0;i<1000;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==games[j]){
                arr[j]=arr[j]+1;
            }
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            ans=i;
        }
    }
    return ans;

}