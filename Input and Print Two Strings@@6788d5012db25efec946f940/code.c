// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    size_t len=strlen(a);
    printf("You entered: ");
    for(int i=0;i<len;i++){
        if(a[i]==' '){
            printf(" and ");
        }
        else{
            printf("%c", a[i]);
        }
    }
    return 0;

}